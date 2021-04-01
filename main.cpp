//@author Gabriel Mawunyo Owusu
//@author Kelvin Anim Offei


#include <iostream>
#include <cstdlib>

using namespace std;

// method populate array, for randomly filling the array
void populateArray(int array[101][101], int N){
    int i;
    int j;
    for(int num=0;num<=N;num++){
        i=rand()%101;
        j=rand()%101;
        if(array[i][j]==0){
            array[i][j]=1;
        }
        else{
            array[i][j]=array[i][j]+1;
        }
    }
};

// method searchValidEntries() for looking for filled indexes and returning indexes and values
void searchValidEntries(int XL, int YL, int XH, int YH, int array[101][101]){
    cout<<"Boundary: [" << XL << " " << YL << " " << XH <<" " << YH << "]"<<endl;
    for(int i=XL;i<=XH;i++){
        for(int j=YL;j<=YH;j++){
            if(array[i][j]!=0){
                cout<<"["<<i<<","<<j<<"]"<<"\t"<<array[i][j]<<endl;
            }
        }
    }
    cout<<endl<<endl;
}

int main()
{
    // creating array A
    int A[101][101]={0};
    //populating array A in a loop for 2000
    populateArray(A,2000);

    //running and returning boundary box elements
    searchValidEntries(80,1,100,10,A);
    searchValidEntries(10,20,40,79,A);
    searchValidEntries(1,90,100,100,A);
    searchValidEntries(40,30,70,60,A);
    searchValidEntries(50,50,70,70,A);
    return 0;

}



