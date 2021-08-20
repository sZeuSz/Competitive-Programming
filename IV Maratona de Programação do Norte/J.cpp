#include <bits/stdc++.h>

using namespace std;

#define max 3005

char mp[max][max];

long long int n,m, x;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};

bool NoIntervalo(int i, int j){
	if(i < 0 || i >= n || j < 0 || j>=m){
		return false;
	}else{
		return mp[i][j] == '#';}
}

void dfs(int i, int j){

	mp[i][j] = '.';
	for(int h = 0; h<4; h++){
		if(NoIntervalo(i+dx[h],j+dy[h])){
			dfs(i+dx[h],j+dy[h]);
		}
	}

}


int main(){
	scanf("%lld %lld %lld", &n, &m, &x);

	for(int i=0 ; i<n ; i++){
		scanf("%s",mp[i]);
	}

	long long int resp = 0;


	for(int i=0; i<n ; i++){
		for(int j =0 ; j < m; j++ ){
			if(mp[i][j] == '#'){
				resp++;
				dfs(i,j);
			}
		}
	}

  if(resp <= x){
    printf("sim\n");
  }
  else{
    printf("nao\n");
  }

	return 0;

}
