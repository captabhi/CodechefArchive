#include<stdio.h>
        typedef long long int ll;
        int main(){
           int t;
           ll n,b,m,time=0,p;
            scanf("%d",&t);
            while(t--){
            scanf("%lld %lld %lld",&n,&b,&m);
            time =0;
             while(n>1){

              if(n%2==0){
                n =n/2;
                  time += n * m + b;
                 m = 2*m; }
              else
                {   p = (n+1)/2;
                      time += p*m + b;
                   n = n- p;
                   m = 2*m;
                   }  }
                  printf("\n%lld",time+m);


            }
            return 0;

        }
