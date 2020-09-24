# include <iostream>
using namespace std;
int a = 0;
bool konfirm=true;

int main(){


for(int i=0;i<=5;i++){
cout<<i<<endl;
} //tag penutup for

while (konfirm == true){
    cout<<"kalimat ini akan terulan selama i belum mencapai batas maksimal"<<endl;
    a = a+1;
    if(a==10){
        konfirm = false;
    }
}

}//tag penutup utama
