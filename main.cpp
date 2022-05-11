#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

struct nodo{
int num;
struct nodo*prox;
};

//criando no 1 
nodo*no1=new nodo;
no1->num=23;
no1->prox=NULL;

//criando no 2
nodo*no2=new nodo;
no1->prox=no2;
no2->num=13;
no2->prox=NULL;

//exibindo
cout<<"\nValordono1:"<<no1->num;
cout<<"\nValordono2:"<<no2->num;
cout<<"\n\n\nEndereco de no1:"<<no1;
cout<<"\nEndereco de no2:"<<no2;
cout<<"\n\n\nEndereco apontado por no1:"<<no1->prox;
cout<<"\nEndereco apontado por no2:"<<no2->prox;

//liberando 
delete no1;
no1=0;
delete no2;
no2=0;
cout<<"\n\n";
system("pause");
}
