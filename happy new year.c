#include<stdio.h>
int main(){
	int a,i;
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	for(a=1;a<=5;a++){
		for(i=1;i<=90;i++){
			if(i==25 || i==29 || i==34 || i==41){
				printf("*");
			}
			else if(a==1){
				if((i>31 && i<=36)||(i>38 && i<=43)){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			else if(a==5){
				if(i>31 && i<=36){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			else if((a==2 && i==26) || (a==3 && i==27) || (a==4 && i==28)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(a=1;a<=5;a++){
	 
		for(i=1;i<=90;i++){
			if(i==11||i==16||(a==4&&i==12)||(a==4&&i==15)||(a==3&&i==14)||i==21||(a==1&&i>=19&&i<=23)||(a==5&&i>=19&&i<=23)||(a==1&&i>26&&i<=30)||(a==5&&i>=26&&i<30)||(a==2&&i==26)||(a==4&&i==30)||(a==3&&i>26&&i<30)||i==33||i==37||(a==3&&i>33&&i<37)||i==42||(a==1&&i>=40&&i<=44)||(a==5&&i>=40&&i<=44)||i==47||i==51||(a==2&&i==48)||(a==3&&i==49)||(a==4&&i==50)){
				printf("*");
			}
			else if((i==54&&a>1&&a<5)||(a==1&&i>54&&i<58)||(a==5&&i>54&&i<58)||(i==58&&a>2&&a<5)||(a==3&&i>55&&i<58)||(a==4&&i==58)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
    }
		
	printf("\n");
	for(a=1;a<=5;a++){
		for(i=1;i<=55;i++){
			if((i==31 && a>1 && a<5) ||(i==35 && a>1 && a<5)||(i==37 && a>=1 && a<5) ||(i==41 && a>=1 && a<5) || (a==1 && i>31 && i<35)||(a==5 && i>31 && i<35)|| (a==5 && i>37 && i<41)||(a==1 && i==29)||(a==1 && i==25)||(a==2 && i==28)||(a==2 && i==26) || (a==3 && i==27) ||(i==27 && a>3 && a<=5)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(a=1;a<=5;a++){
		for(i=1;i<=87;i++){
			if((i==2)||(i==6)||(a==3 && i>2 && i<6)||(i==8 && a>1 && a<=5)||(i==12 && a>1 && a<=5)||(a==1 && i>8 && i<12)||(a==3 && i>=9 && i<=11) ||(i==14)||(i==20)){
				printf("*");
			}
			else if((a==1 && i==26) || (a==1 && i==30)||(a==2 && i==27)||(a==2 && i==29)||(i==28 && a==3)||(i==28 && a>3 && a<=5)||(a==3 && i>14 && i<18)||(a==1 && i>14 && i<18)||(a==2 && i==18)||(a==3 && i>20 && i<24)||(a==1 && i>20 && i<24)||(a==2 && i==24)){
				printf("*");
			}
			else if(i==35||i==39 || (a==2 && i==36)||(a==3 && i==37)||(a==4 && i==38)||(i==41)||(a==1 && i>41 && i<=45)||(a==3 && i>41 && i<=44)||(a==5 && i>41 && i<=45)||(i==47)||(i==52)||(a==3 && i==50)||(a==4 && i==51) || (a==4 && i==49)||(i==59 && a>3 && a<=5)||(a==1&&i==57)||(a==1&&i==61)||(a==2&&i==58)||(a==2&&i==60)||(a==3&&i==59)){
				printf("*");
			}
			else if(i==63||(a==1&&i>63&&i<=67)||(a==3&&i>63&&i<=66)||(a==5&&i>63&&i<=67)||(a==1&&i>69&&i<73)||(i==69&&a>1&&a<=5)||(i==73&&a>1&&a<=5)||(a==3&&i>69&&i<73)||i==75||(a==1&&i>75&&i<79)||(a==3&&i>76&&i<79)||(a==2&&i==79)||(a==4&&i==77)||(a==5&&i==78)){
				printf("*");
			}
			else{
				printf(" ");
			}
	    }
		printf("\n");	
	}
	printf("\n");
	for(a=1;a<=5;a++){
		for(i=1;i<90;i++){
			if((a==5&&i>=25&&i<=29)||(a==1&&i>25&&i<29)||(a==2&&i==25)||(a==2&&i==29)||(a==3&&i==28)||(a==4&&i==26)||(a==1&&i>31&&i<35)||(a==5&&i>31&&i<35)||(i==31&a>1&&a<5)||(i==35&&a>1&&a<5)||(a==5&&i>=37&&i<=41)||(a==1&&i>37&&i<41)||(a==2&&i==37)||(a==2&&i==41)||(a==3&&i==40)||(a==4&&i==38)||(a==5&&i>=43&&i<=47)||(a==1&&i>43&&i<47)||(a==2&&i==43)||(a==2&&i==47)||(a==3&&i==46)||(a==4&&i==44)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\t\t\t\t\t\t\t\t\t\t\t\tBY-kunal srivastava\n");
	return 0;
}
