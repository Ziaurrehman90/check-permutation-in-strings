#include<iostream>
#include<cstring>
using namespace std;
bool permutation(char a[],char b[]){
    int n=strlen(a);
    int m=strlen(b);
    int temp1[100];
    int k=0;
    for(int i=97;i<=122;i++){
            int sum=0;
        for(int j=0;j<n;j++){
            if((int)a[j]==i){
                sum++;
            }
        }
    if(sum>=0){
            temp1[k]=sum;
    k++;

    }
    }
     int temp2[100];
    int p=0;
    for(int i=97;i<=122;i++){
            int sum=0;
        for(int j=0;j<m;j++){
            if((int)b[j]==i){
                sum++;
            }
        }
    if(sum>=0){
            temp2[p]=sum;
    p++;

    }
    }
    int flag=0;
    for(int i=0;i<26;i++){
        for(int j=i;j<26;j++){
            if(temp1[i]!=temp2[j]){
                flag=1;
                break;
            }
            else{
                i++;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0){
      return true;

    }
    else
        return false;

}
int main(){
    char a[250],b[250];
    cin>>a;
    cin>>b;
   cout<<permutation(a,b)<<endl;
    return 0;
}
