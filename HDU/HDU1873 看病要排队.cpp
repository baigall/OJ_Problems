/*

看病要排队

Problem Description

看病要排队这个是地球人都知道的常识。
不过经过细心的0068的观察，他发现了医院里排队还是有讲究的。0068所去的医院有三个医生（汗，这么少）同时看病。而看病的人病情有轻重，所以不能根据简单的先来先服务的原则。所以医院对每种病情规定了10种不同的优先级。级别为10的优先权最高，级别为1的优先权最低。医生在看病时，则会在他的队伍里面选择一个优先权最高的人进行诊治。如果遇到两个优先权一样的病人的话，则选择最早来排队的病人。

现在就请你帮助医院模拟这个看病过程。
 

Input

输入数据包含多组测试，请处理到文件结束。
每组数据第一行有一个正整数N(0<N<2000)表示发生事件的数目。
接下来有N行分别表示发生的事件。
一共有两种事件：
1:"IN A B",表示有一个拥有优先级B的病人要求医生A诊治。(0<A<=3,0<B<=10)
2:"OUT A",表示医生A进行了一次诊治，诊治完毕后，病人出院。(0<A<=3)
 

Output

对于每个"OUT A"事件，请在一行里面输出被诊治人的编号ID。如果该事件时无病人需要诊治，则输出"EMPTY"。
诊治人的编号ID的定义为：在一组测试中，"IN A B"事件发生第K次时，进来的病人ID即为K。从1开始编号。
 

Sample Input
7
IN 1 1
IN 1 2
OUT 1
OUT 2
IN 2 1
OUT 2
OUT 1
2
IN 1 1
OUT 1
 

Sample Output
2
EMPTY
3
1
1

*/
#include <queue>
#include <iostream>
#include <string>
using namespace std;

struct Point {
	int lv,id;
	
	bool operator < (const Point & a) const {
		if(lv < a.lv)
			return 1;
		if(lv == a.lv)
			return id > a.id;
			
	}
} a;

int main() {
	int t, doc, lv, n;
	string tmp;
	while(cin >> t) {
		priority_queue<Point> q1,q2,q3;
		n = 0;
		while(t--) {
			cin >> tmp >> doc;
			if(tmp == "IN") {
				n++;
				cin >> lv;
				a.id = n;
				a.lv = lv;
				switch(doc) {
					case 1:
						q1.push(a);
						break;
					case 2:
						q2.push(a);
						break;
					case 3:
						q3.push(a);
						break;
				}
			}
			else {
				switch(doc) {
					case 1:
						if(!q1.empty()){
							cout << q1.top().id << endl;
							q1.pop();
						} else cout << "EMPTY" << endl;
						break;
					case 2:
						if(!q2.empty()){
							cout << q2.top().id << endl;
							q2.pop();
						} else cout << "EMPTY" << endl;
						break;
					case 3:
						if(!q3.empty()){
							cout << q3.top().id << endl;
							q3.pop();
						} else cout << "EMPTY" << endl;
						break;
				}
			}
		}
	}
	return 0;
}
