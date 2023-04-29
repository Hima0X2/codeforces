#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,i,sobceyegorib=0,motamotigorib=0,people;

    bool deki=true;

    cin >> n;

    for(i=0;i<n;i++){

        cin>>people;

        if(i==0 && (people==50 || people==100)){

                deki=false;

                 break;
        }

        if(people==25)sobceyegorib++;

        else if(people==50){
            sobceyegorib--;
            motamotigorib++;
        }

        else if(people==100){
            if(motamotigorib>0){
                sobceyegorib--;
                motamotigorib--;
            }
            else sobceyegorib-=3;
        }

        if(sobceyegorib<0 || motamotigorib<0){
            deki=false;
            break;
        }
    }

    if(deki)cout<< "YES" <<endl;
    else cout<< "NO" <<endl;

    return 0;




}
