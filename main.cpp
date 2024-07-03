#include <iostream>
using namespace std;
struct sommet{
	int inf;
	sommet*suivante;
};
void empiler(sommet*&yasser,int vale){
	sommet*nouveau=new sommet;
	nouveau->inf=vale;
	nouveau->suivante=yasser;
	yasser=nouveau;
}
void creear(sommet*&yasser,int n){
	int vale;
	for(int i=0;i<n;i++){
			cout<<"saisire la valeure de lelement"<<i+1<<endl;
			cin>>vale;
			empiler(yasser,vale);
	}
}
void depeler(sommet*&yasser,int& x){
	sommet*supe=yasser;
	yasser=yasser->suivante;
    x=supe->inf;
	delete supe;
}
void aficher(sommet*yasser){
	while(yasser!=0){
		cout<<yasser->inf<<endl;
		yasser=yasser->suivante;
	}

}
void minimume(sommet*yasser,int &y){
	y=yasser->inf;
	while(yasser!=0){
		if(y>yasser->inf){
			y=yasser->inf;}
			yasser=yasser->suivante;
	}
	cout<<"le minilule est"<<y<<endl;

}
void supmine(sommet*&yasser,sommet*&intr,int y,int n){
	int val,cnt;
	cnt=0;

	for(int i=0;i<n;i++){
		if(yasser->inf==y){
        cnt=cnt+1;}
		else{
		depeler(yasser,val);
		empiler(intr,val);}
		}
			cout<<"le nbr de minimume est"<<cnt<<endl;

}
int main(){
	sommet*yasser,*intr;
	intr=0;
	yasser=0;
	int n,y;
	cout<<"saisire la taille de la pille";
	cin>>n;
	creear(yasser,n);
	cout<<"la pille est"<<endl;
	aficher(yasser);
	minimume(yasser,y);
	supmine(yasser,intr,y,n);
		cout<<"la pille sans mine est"<<endl;
    	aficher(intr);

}














