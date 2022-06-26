#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main(){
    FILE *price;
printf("Enter the value '1' for menswear and '2' for womenswear \n");
int data;
int jeans,shorts,kurta,pant,tshirt,shirt,trouser;
int priceofjeans =0;
int priceofshorts =0;
int priceofkurta=0;
int priceofpant=0;
int priceoftshirt=0;
int priceofshirt=0;
int priceoftrouser=0;
int sumofallmenswear=0;

int bra,legins,kurti,tops,skirts,slacks;
int priceofbra =0;
int priceoflegins =0;
int priceofkurti=0;
int priceoftops=0;
int priceofskirts=0;
int priceofslacks=0;
int sumofallfemaleswear=0;
scanf("%d",&data);
if(data==1){
printf("Enter the number of jeans\n");
scanf("%d",&jeans);
priceofjeans=(jeans*650)*20/100;


printf("Enter the number of shorts\n");
scanf("%d",&shorts);
priceofshorts=(shorts*400)*20/100;



printf("Enter the number of kurta\n");
scanf("%d",&kurta);
priceofkurta=(kurta*700)*20/100;





printf("Enter the number of pant\n");
scanf("%d",&pant);
priceofpant=(pant*1000)*20/100;


printf("Enter the number of tshirt\n");
scanf("%d",&tshirt);
priceoftshirt=(tshirt*350)*20/100;



printf("Enter the number of shirt\n");
scanf("%d",&shirt);
priceofshirt=(shirt*900)*20/100;




printf("Enter the number of trouser\n");
scanf("%d",&trouser);
priceoftrouser=(trouser*700)*20/100;


printf(" Jeans  %d\n",priceofjeans);
printf(" Shorts  %d\n",priceofshorts);
printf(" Kurta  %d\n",priceofkurta);
printf(" Pant  %d\n",priceofpant);
printf(" Tshirt  %d\n",priceoftshirt);
printf(" Shirt  %d\n",priceofshirt);
printf(" Trouser  %d\n",priceoftrouser);


sumofallmenswear = priceofjeans+priceofshorts+priceofkurta+priceofpant+priceoftshirt+priceofshirt+priceoftrouser;
printf("TOTAL : %d",sumofallmenswear);

price = fopen("Price.txt","w");
fprintf(price,"Jeans  %d\n",priceofjeans);
fprintf(price,"Shorts  %d\n",priceofshorts);
fprintf(price,"Kurta  %d\n",priceofkurta);
fprintf(price,"Pant  %d\n",priceofpant);
fprintf(price,"Tshirt  %d\n",priceoftshirt);
fprintf(price,"Shirt  %d\n",priceofshirt);
fprintf(price,"Trouser  %d\n",priceoftrouser);
fprintf(price,"TOTAL:  %d\n",sumofallmenswear);
}
else{
printf("Enter the number of bra\n");
scanf("%d",&bra);
priceofbra=(bra*250)*20/100;
printf("Enter the number of legins\n");
scanf("%d",&legins);
priceoflegins=(legins*800)*20/100;
printf("Enter the number of tops\n");
scanf("%d",&tops);
priceoftops=(tops*1000)*20/100;
printf("Enter the number of skirts\n");
scanf("%d",&skirts);
priceofskirts=(skirts*600)*20/100;
printf("Enter the number of kurti\n");
scanf("%d",&kurti);
priceofkurti=(kurti*350)*20/100;
printf("Enter the number of slacks\n");
scanf("%d",&slacks);
priceofslacks=(slacks*666)*20/100;
printf(" Bra  %d\n",priceofbra);
printf(" Legins  %d\n",priceoflegins);
printf(" Tops  %d\n",priceoftops);
printf(" Skirts  %d\n",priceofskirts);
printf(" Kurti  %d\n",priceofkurti);
printf(" Slacks  %d\n",priceofslacks);
sumofallfemaleswear=priceofbra+priceoflegins+priceoftops+priceofskirts+priceofkurti+priceofslacks;
printf("TOTAL : %d",sumofallfemaleswear);
price = fopen("price.txt","w");
fprintf(price,"Bra  %d\n",priceofbra);
fprintf(price,"Legins  %d\n",priceoflegins);
fprintf(price,"Tops  %d\n",priceoftops);
fprintf(price,"Skirts  %d\n",priceofskirts);
fprintf(price,"Kurti  %d\n",priceofkurti);
fprintf(price,"Slacks  %d\n",priceofslacks);
fprintf(price,"TOTAL:  %d\n",sumofallfemaleswear);
}
return 0;
}