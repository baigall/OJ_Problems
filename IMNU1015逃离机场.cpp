#include<iostream>
#include<queue>
#include<string.h>
#include<stdio.h>
using namespace std;

char mp[205][205];
int step[205][205];
int n,m;
int starx,stary;
class Point {
    public:
        int x,y;
};

const int cc[4][2]= {{1,0},{0,1},{-1,0},{0,-1}};
void init() {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(mp[i][j]=='@') {
                starx=i;
                stary=j;
            }
            if(mp[i][j]=='o') {
                for(int k=i+1; k<n&&(mp[k][j]=='.'||mp[k][j]=='@'||mp[k][j]=='#'); k++) {
                    mp[k][j]='#';
                }
                for(int k=i-1; k>=0&&(mp[k][j]=='.'||mp[k][j]=='@'||mp[k][j]=='#'); k--) {
                    mp[k][j]='#';
                }
                for(int k=j+1; k<m&&(mp[i][k]=='.'||mp[i][k]=='@'||mp[i][k]=='#'); k++) {
                    mp[i][k]='#';
                }
                for(int k=j-1; k>=0&&(mp[i][k]=='.'||mp[i][k]=='@'||mp[i][k]=='#'); k--) {
                    mp[i][k]='#';
                }
            }
        }
    }
}

void bfs() {
    queue<Point>q;
    Point a;
    a.x=starx;
    a.y=stary;
    q.push(a);
    while(!q.empty()) {
        Point x=q.front();
        q.pop();
        for(int i=0; i<4; i++) {
            Point t;
            t.x=x.x+cc[i][0];
            t.y=x.y+cc[i][1];
            if(mp[t.x][t.y]=='.'&&t.x>=0&&t.x<n&&t.y>=0&&t.y<m&&step[t.x][t.y]==0) {
                step[t.x][t.y]=step[x.x][x.y]+1;
                q.push(t);
            }
        }
    }
}

int main() {
    int N;
    scanf("%d",&N);
    while(N--) {
        scanf("%d%d",&n,&m);
        getchar();
        for(int i=0; i<n; i++) {
            gets(mp[i]);
        }
        starx=0;
        stary=0;
        init();
        memset(step,0,sizeof(step));
        if(mp[starx][stary]=='@') {
            step[starx][stary]=1;
            int maxn=0x7fffffff;//2147483647
            bfs();
            for(int i=0; i<n; i++) {
                if(step[i][0]!=0) {
                    maxn=min(maxn,step[i][0]);
                }
                if(step[i][m-1]!=0) {
                    maxn=min(maxn,step[i][m-1]);
                }
            }
            for(int j=0; j<m; j++) {
                if(step[0][j]!=0) {
                    maxn=min(maxn,step[0][j]);
                }
                if(step[n-1][j]!=0) {
                    maxn=min(maxn,step[n-1][j]);
                }
            }
            if(maxn!=0x7fffffff) {
                printf("%d\n",maxn);
            } else {
                printf("no zuo no die!\n");
            }
        } else {
            printf("no zuo no die!\n");
        }
    }
    return 0;
}
 
/**************************************************************
    Problem: 1015
    User: root
    Language: C++
    Result: ÕýÈ·
    Time:40 ms
    Memory:2116 kb
****************************************************************/
