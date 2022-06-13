#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<unistd.h>

int main ()
{

    setlocale(LC_ALL, "");
    char pala[100], under[16], nomev[30],dica[50],chute,chutadas[20], ant;
    int i=0, chance=5,f=0,v=0,status=3,acertos=0, cont=0;
    char tm[20];
    printf("\n\n***************************    JOGO DA FORCA!!   *******************************\n\n");
    printf("            VOCÊ É O ENFORCADOR!! DIGITE UMA PALAVRA PARA COMEÇAR!\n\n\t               DICA: NÃO CONTE A NINGUÊM!!\n\n                                ");
    gets(pala);
    printf("\n\n\t\tDigite seu nome: ");
    gets(nomev);
    printf("\n\n\tNÃO SEJA MALDOSO, DÊ UMA DICA SOBRE A PALAVRA  E LETS GOO!:\n\n\t\t\t\t  ");
    gets(dica);
    system("cls");
    printf("\n\n\n                LOADING");

   for(i=0;i < 5; i++){
   sleep(1);
   printf(".");
   fflush(stdout);
    }
    system("cls");

    for(i=0;i<strlen(pala);i++){
        under[i]='_';}

        printf("\n         OLÁ, VOCÊ É A VÍTIMA DA FORCA, %s ESTÁ TENTANDO TE ENFORCAR!! \n\n      SUA ÚNICA ALTERNATIVA É ACERTAR A PALAVRA QUE ELE ESCOLHEU PARA VOCÊ!\n\n", strupr(nomev));


         while(chance>0 && chance<6){

                status=3;

        printf("\n\n\t\t\t");

        if(status==1){
        printf("VAMOS LÁ, NÃO DESISTA!\n\n");
            }else if (status==0){
                printf("UHUU, VOCÊ ACERTOU!\n\n");
                    }else if (status==3){
                printf("   VAMOS LÁ, NÃO DESISTA!!\n\n");
                    }

        printf("\n\t\t       ");


        printf("\t\tDICA: %s\n\n\n\n\t\t\t   ", strupr(dica));


        for(i=0;i<strlen(under);i++){
        printf("%c  ", under[i]);}


        switch (chance){
                case 5:
                    printf("\n\n");
                printf("                               ===============\n");
                printf("                               |             |\n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                              ===              \n");
                break;

            case 4:
                printf("\n\n");
                printf("                               ===============\n");
                printf("                               |             |\n");
                printf("                               |             O\n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                              ===              \n");
                break;

            case 3:
                printf("\n\n");
                printf("                               ===============\n");
                printf("                               |             |\n");
                printf("                               |             O\n");
                printf("                               |             |\n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                              ===              \n");
                break;

            case 2:
                printf("\n\n");
                printf("                               ===============\n");
                printf("                               |             |\n");
                printf("                               |             O\n");
                printf("                               |            /|\n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                              ===              \n");
                break;

            case 1:
                printf("\n\n");
                printf("                               =============== \n");
                printf("                               |             |\n");
                printf("                               |             O \n");
                printf("                               |            /|\\\n");
                printf("                               |                 \n");
                printf("                               |                 \n");
                printf("                               |                 \n");
                printf("                               |                 \n");
                printf("                              ===               \n");
                break;

            case 0:
                printf("\n\n");
                printf("                               ===============\n");
                printf("                               |             |\n");
                printf("                               |             O\n");
                printf("                               |            /|\\\n");
                printf("                               |            / \\\n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                               |                \n");
                printf("                              ===               \n");
                sleep(1);
                break;

                default :
                    printf("");}

        printf("\n\n\n\n\t\t\t    CHANCES PERMITIDAS: %d\n\n\t\t", chance);

        printf("LETRAS CHUTADAS: ");

        for(i=0;i<strlen(chutadas);i++){
        printf(" %c --", chutadas[i]);
        }

        printf("\n\n\t\t\t");
        printf("CHUTE: ");
        scanf(" %c", &chute);
        cont++;
        chutadas[cont]=chute;


        for(v=0;v<strlen(pala);v++){ //verificar

            if(chute==pala[v]){
            under[v]=chute;
            status=0;
            printf("\n\t\t*********  UHUUU, VOCÊ ACERTOU!!  **********");
            system("color 20");
            sleep(1);
            system("color 07");
            acertos++;

            }
        }
        if(status!=0){
            status=1;
            chance--;
            printf("\n\t\t  *********  PUTZ, VOCÊ ERROU!!  **********");
            system("color C0");
            sleep(1);
            system("color 07");

        }
        system("cls");
        if(acertos>=strlen(pala))
            chance=6;
}
    if(chance<1){
        system("cls");
        system("cls");
    system("color FC");
    printf("\n*******************************************************************************\n\n");
    printf("                   :::!~!!!!!:.\n");
    printf("              .xUHWH!! !!?M88WHX:.\n");
    printf("            .X*#M@$!!  !X!M$$$$$$WWx:.\n");
    printf("           :!!!!!!?H! :!$!$$$$$$$$$$8X:\n");
    printf("          !!~  ~:~!! :~!$!#$$$$$$$$$$8X:\n");
    printf("         :!~::!H!<   ~.U$X!?R$$$$$$$$MM!\n");
    printf("         ~!~!!!!~~ .:XW$$$U!!?$$$$$$RMM!\n");
    printf("           !:~~~ .:!M T#$$$$WX??#MRRMMM!\n");
    printf("           ~?WuxiW*`   ` #$$$$8!!!!??!!!\n");
    printf("         :X- M$$$$       ` T#$T~!8$WUXU~\n");
    printf("        :%`  ~#$$$m:        ~!~ ?$$$$$$\n");
    printf("      :!`.-   ~T$$$$8xx.  .xWW- ~  ##*_ \n");
printf(".....   -~~:<` !    ~?T#$$@@W@*?$$      /\n");
printf("W$@@M!!! .!~~ !!     .:XUW$W!~ ` ~:    :/\n");
printf("#~~`.:x%`!!  !H:   !WM$$$$Ti.: .!WUn+!`/\n");
printf(":::~:!!`:X~ .: ?H.!u  $$$B$$$!W:U!T$$M~\n");
printf(".~~   :X@!.-~   ?@WTWo *$$$W$TH$!\n");
printf("Wi.~!X$?!-~    : ?$$$B$Wu( **$RM!\n");
printf("$R@i.~~ !     :   ~$$$$$B$$en:``\n");
printf("?MXT@Wx.~    :     ~ ##*$$$$M~\n");
        printf("\n\n");
        printf("\t\t\t\t EAÍ MEU CHAPA HAHAH\n");
        printf("*******************************************************************************");
    }


    if(chance>5){
    system("cls");
    system("color 76");
    printf("\n*******************************************************************************");
    printf("\n\n\n\n");
    printf("\t\t\t     PARABÉNS CAMPEÃO!\n\n\n\n\n\n\n");
    printf("                               .-=========-.\n");
    printf("                               /'-=======-'/\n");
    printf("                               _|   .=.   |_\n");
    printf("                              ((|  {{1}}  |))\n");
    printf("                               /|   /|\   |/\n");
    printf("                               /__ '`' __/\n");
    printf("                                  _`) (`_\n");
    printf("                                _/_______/_\n");
    printf("                              /___________/_\n");
    printf("\n\n");

    printf("*******************************************************************************");
    }



        getch();
        return(0);
}

