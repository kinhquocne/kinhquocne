#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<=3,i++)
        cin>>ss[i][4]>>ss[i][1]>>ss[i][0]>>ss[i][5]>>ss[i][2]>>ss[i][3];
    tt[24][2];
    cnt = 0;
    for(int p=0;p<=5;p++)
        for(int d=0;d<=5;d++)
        {
            tt[cnt][0]=p;
            tt[cnt][1]=d;
            cnt++
        }

}
#include<bits/stdc++.h>
using namespace std;
int main(){
for(int i=0;i<=3;i++){
    cin>>ss[i][4]>>ss[i][1]>>ss[i][0]>>ss[i][5]>>ss[i][2]>>s[i][3];
}
tt[24][2];
cnt=0;
for(int p=0;p<=5;p++){
    for(int d=0;d<=5;d++){
        if(p!=d&&p+d!=5){
            tt[cnt][0]=p;
            tt[cnt][1]=d;
            cnt++;
        }
    }
}
for(int h=0;h<=5;h++){
    a=HV[h][0];b=HV[h][1];c=HV[h][2];
    for(int s0=0;s0<=23;s0++){
          for(int s1=0;s1<=23;s1++){
                  for(int s2=0;s2<=23;s2++){
                        for(int s3=0;s3<=23;s3++){
                            if(ss[0][tt[s0][0]]==ss[a][tt[s1][0]]&&)
    }
}
}
