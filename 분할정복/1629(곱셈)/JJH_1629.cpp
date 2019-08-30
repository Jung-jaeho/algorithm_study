#include <stdio.h>

long long jagom=1;   //
long long sangta=0;
long long N,M,L;
long long status=1;

void exponentiation(long long N,long long status)
{
    long long nowjagom=((N%L)*(N%L))%L;    // a가 들어왔다면 a^2 , a^2이 들어왔다면 a^4
    long long nowsangta=status*2;  // 들어간 만큼 상태를 알려주는 변수

    if(status > M)
        return ;

    exponentiation(nowjagom,nowsangta);

    if(M >= sangta + nowsangta){
        sangta=sangta + nowsangta;
        jagom=((jagom%L) * (nowjagom%L))%L;
    }
}



int main(){

    scanf("%lld %lld %lld",&N,&M,&L);
    exponentiation(N,status);

    if(M==sangta)
        printf("%lld",jagom%L);
    else
        printf("%lld",(jagom*N)%L);

    return 0;
}
