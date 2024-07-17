#include <iostream>
using namespace std;
float algo(){
    float x,c,y;
    std::cout<< "Algorithm and data structure 1 : "<<std::endl;
    std::cout<< "Enter Note TD : ";
    std::cin>>x;
    std::cout<< "Enter Note TP : ";
    std::cin>>c;
    std::cout<< "Enter Note Exam : ";
    std::cin>>y;
    float z;
    z = ( ( (x+c) / 2 ) * .40) + (y * .60);
    return z;
}
float Analyse(){
    float x , y; 
    std::cout<< "Analyse 1 : " <<std::endl;
    std::cout<< "Enter Note TD : ";
    std::cin>>x;
    std::cout<< "Enter Note Exam : ";
    std::cin>>y;
    float z;
    z = (x * .40) + (y * .60);
    return z;
}

float Algebra(){
    float x , y; 
    std::cout<< "Algebra 1 : "<<std::endl;
    std::cout<< "Enter Note TD : ";
    std::cin>>x;
    std::cout<< "Enter Note Exam : ";
    std::cin>>y;
    float z;
    z = (x * .40) + (y * .60);
    return z;
}
float os(){
    float x , y; 
    std::cout<< "Operating system introduction 1 : "<<std::endl;
    std::cout<< "Enter Note TP : ";
    std::cin>>x;
    std::cout<< "Enter Note Exam : ";
    std::cin>>y;
    float z;
    z = ( x * .40) + (y * .60);
    return z;
}
float bw(){
    float x,y;
    std::cout<< "Bureautique & Web : "<<std::endl;
    std::cout<< "Enter Note TP : ";
    std::cin>>x;
    std::cout<< "Enter Note Exam : ";
    std::cin>>y;
    float z;
    z = (x * .40) + (y * .60);
    return z;
}
float ado(){
    float  x,y;
    std::cout<< "Architecture des ordinateurs 1 : "<<std::endl;
    std::cout<< "Enter Note TD : ";
    std::cin>>x;
    std::cout<< "Enter Note Exam : ";
    std::cin>>y;
    float z;
    z = (x * .40) + (y * .60);
    return z;
}
float Tse(){ 
    float z ;
    std::cout<< "TSE  : "<<std::endl;
    std::cout<< "Enter Note Exam : ";
    std::cin>>z;
    return z;
}
void Academic(){
float T[7];

}
void Engineer(){
float T[7];
T[0] = algo();
T[1] = Analyse();
T[2] = Algebra();
T[3] = os();
T[4] = bw();
T[5] = ado();
T[6] = Tse();
T[7] = ((T[0]*6)+(T[1]*6)+(T[2]*4)+(T[3]*4)+(T[4]*1)+(T[5]*4)+(T[6]*1))/26;
std::cout<<"your moyenn is : "<<T[7]<<std::endl;
}
using namespace std;
int main(){
    bool a = true;
    do {
        char q;
    std::cout<<"Type: 1.Academic (LMD) or 2.Engineer (classic) "<<std::endl;
    std::cout<<"Enter number"<<std::endl;
    int x;
    std::cin>>x;
    switch (x)
    {
    case 1:
    Academic() ;
    break;
    case 2:
    Engineer() ;
    break;
    default:
        break;
    }
    std::cout<<"Wanna exit ? (Y/N) : ";
    std::cin>>q;
    while(q != 'y' && q != 'Y' && q != 'n' && q != 'N' ){
        std::cout<<"again!!"<<std::endl;
        std::cout<<"Wanna exit ? (Y/N) : ";
        std::cin>>q;
    }
    if (q == 'y' || q == 'Y' ){
        a=false;
        }
        else if (q == 'n' || q == 'N' ) { 
        a=true;
    }

    }while ( a != false );
    return 0;
}
