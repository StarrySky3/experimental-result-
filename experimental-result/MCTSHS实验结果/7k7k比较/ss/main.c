#include<io.h>
#include<stdio.h>

#include<stdbool.h>
#include"./dictionary/dict.h"
#include"./pokerUtil/pokerUtil.h"
#include"./dictionary/dictionary.h"
#include"./pokerNode/root.h"
#include"./pokerNode/pokerNode.h"
#define HASH_SIZE 10000
#define DICTIONARY_SIZE 14865



void intToString(int num,char str[])
{

    int i=0;
    while(num>0)
    {
        str[i]=num%10+'0';
        num=num/10;
        i++;
    }
    char temp[15]={"\0"};
    i=strlen(str)-1;
    int j=0;
    for(i;i>=0;i--)
    {
        temp[j++]=str[i];
    }
    strcpy(str,temp);
}

int main(int argc, char *argv[])
{
    char filename[] ="C:\\Users\\xxx\\Desktop\\bestSplit.txt";
    FILE *fp;
    char StrLine[1024];
    int sum=0;
    int exist0=0,exist1=0,exist2=0,exist3=0;
    if((fp = fopen(filename,"r")) == NULL) //�ж��ļ��Ƿ���ڼ��ɶ�
    {
        printf("error!");
        return -1;
    }
    while (!feof(fp))
    {
        printf("sum:%d exist0:%d exist1:%d exist2:%d exist3:%d\n",sum,exist0,exist1,exist2,exist3);
        sum++;
        fgets(StrLine,1024,fp);  //��ȡһ��
        initDict();
        char allPossibleLst[5000][40]={"\0"};
        int lengthPossible=0;
        char unique[4000][31]={"\0"};
        int uniqueLength=0;
        char putPoker[21]={'\0'};
        char ownPokers[21]={'\0'};
        char originalPokers[21]={'\0'};
        int i=0,strLength=strlen(StrLine);
        int no=0,strindex=0;
        for(i=0;i<strLength-1;i++)
        {
            if(StrLine[i]==',')
            {
                if(no==0)
                {
                    putPoker[strindex++]='\0';;
                }
                else if(no==1)
                {
                    ownPokers[strindex++]='\0';;
                }
                else
                {
                    originalPokers[strindex++]='\0';;
                }
                no++;
                strindex=0;
            }
            else
            {
                if(no==0)
                {
                    putPoker[strindex++]=StrLine[i];
                }
                else if(no==1)
                {
                    ownPokers[strindex++]=StrLine[i];
                }
                else
                {
                    originalPokers[strindex++]=StrLine[i];
                }
            }
        }
        getChaifengResult_cf(originalPokers,allPossibleLst);
        lengthPossible=getLength_cf(allPossibleLst);
        Dictionary * uniqueDic=dictionary_create(DICTIONARY_SIZE);
        int index=0;
        int minLength=200;
        //int length=3;
        for(index=0;index<lengthPossible;index++)
        {
            if(strlen(allPossibleLst[index])<minLength)
            {
                minLength=strlen(allPossibleLst[index]);
            }
        }

        for(index=0;index<lengthPossible;index++)
        {
            if(strlen(allPossibleLst[index])<=(minLength))
            //if(true)
            {
                //printf("%s\n",allPossibleLst[index]);
                int end=0,tempIndex=0;
                end=1;
                while(allPossibleLst[index][end]!='\0')
                {
                    char temp[21]="\0";
                    tempIndex=0;
                    while(allPossibleLst[index][end]!='|' && allPossibleLst[index][end]!='\0')
                    {
                        temp[tempIndex++]=allPossibleLst[index][end];
                        if(allPossibleLst[index][end]!='\0')
                            end++;
                    }
                    if(allPossibleLst[index][end]=='|')
                        end++;
                    if(!dictionary_exist(uniqueDic,temp))
                    {
                        //strcpy(unique[uniqueLength++],temp);
                        pokerNode  node;
                        dictionary_insert(uniqueDic,temp,node);
                    }
                }
            }
        }
        if(dictionary_exist(uniqueDic,putPoker))
        {
            exist0++;
            exist1++;
            exist2++;
            exist3++;
            continue;
        }
        dictionary_free(uniqueDic);

        //unique[4000][31]={"\0"};
        printf("%d \n",uniqueLength);
        uniqueLength=0;
        printf("%d \n",uniqueLength);

        uniqueDic=dictionary_create(DICTIONARY_SIZE);
        for(index=0;index<lengthPossible;index++)
        {
            if(strlen(allPossibleLst[index])<=(minLength+1))
            //if(true)
            {
                //printf("%s\n",allPossibleLst[index]);
                int end=0,tempIndex=0;
                end=1;
                while(allPossibleLst[index][end]!='\0')
                {
                    char temp[21]="\0";
                    tempIndex=0;
                    while(allPossibleLst[index][end]!='|' && allPossibleLst[index][end]!='\0')
                    {
                        temp[tempIndex++]=allPossibleLst[index][end];
                        if(allPossibleLst[index][end]!='\0')
                            end++;
                    }
                    if(allPossibleLst[index][end]=='|')
                        end++;
                    if(!dictionary_exist(uniqueDic,temp))
                    {
                        //strcpy(unique[uniqueLength++],temp);
                        pokerNode  node;
                        dictionary_insert(uniqueDic,temp,node);
                    }
                }
            }
        }
        if(dictionary_exist(uniqueDic,putPoker))
        {
            exist1++;
            exist2++;
            exist3++;
            continue;
        }
        printf("%d \n",uniqueLength);


        dictionary_free(uniqueDic);
        uniqueLength=0;
        printf("%d \n",uniqueLength);
        uniqueDic=dictionary_create(DICTIONARY_SIZE);
        for(index=0;index<lengthPossible;index++)
        {
            if(strlen(allPossibleLst[index])<=(minLength+2))
            //if(true)
            {
                //printf("%s\n",allPossibleLst[index]);
                int end=0,tempIndex=0;
                end=1;
                while(allPossibleLst[index][end]!='\0')
                {
                    char temp[21]="\0";
                    tempIndex=0;
                    while(allPossibleLst[index][end]!='|' && allPossibleLst[index][end]!='\0')
                    {
                        temp[tempIndex++]=allPossibleLst[index][end];
                        if(allPossibleLst[index][end]!='\0')
                            end++;
                    }
                    if(allPossibleLst[index][end]=='|')
                        end++;
                    if(!dictionary_exist(uniqueDic,temp))
                    {
                        //strcpy(unique[uniqueLength++],temp);
                        pokerNode  node;
                        dictionary_insert(uniqueDic,temp,node);
                    }
                }
            }
        }
        if(dictionary_exist(uniqueDic,putPoker))
        {
            exist2++;
            exist3++;
            continue;
        }


        printf("%d \n",uniqueLength);
        dictionary_free(uniqueDic);
        uniqueLength=0;
        printf("%d \n",uniqueLength);
        uniqueDic=dictionary_create(DICTIONARY_SIZE);
        for(index=0;index<lengthPossible;index++)
        {
            if(strlen(allPossibleLst[index])<=(minLength+3))
            //if(true)
            {
                //printf("%s\n",allPossibleLst[index]);
                int end=0,tempIndex=0;
                end=1;
                while(allPossibleLst[index][end]!='\0')
                {
                    char temp[21]="\0";
                    tempIndex=0;
                    while(allPossibleLst[index][end]!='|' && allPossibleLst[index][end]!='\0')
                    {
                        temp[tempIndex++]=allPossibleLst[index][end];
                        if(allPossibleLst[index][end]!='\0')
                            end++;
                    }
                    if(allPossibleLst[index][end]=='|')
                        end++;
                    if(!dictionary_exist(uniqueDic,temp))
                    {
                        //strcpy(unique[uniqueLength++],temp);
                        pokerNode  node;
                        dictionary_insert(uniqueDic,temp,node);
                    }
                }
            }
        }
        if(dictionary_exist(uniqueDic,putPoker))
        {
            exist3++;
            continue;
        }
        printf("%d \n",uniqueLength);
        dictionary_free(uniqueDic);
    }


    printf("over");
    fclose(fp);
    return 0;
    /* ע�� ����
    printf("����Ϊ:%s \n",argv[1]);
    //initMCTS(0);
    char allPokers[55]="3333444455556666777788889999TTTTJJJJQQQQKKKKAAAA2222LB\0";
    //int NUM=900;
    //while(NUM--)
    //{
        //printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%d\n",NUM);
        char landlordPokers[4]="\0";
        int pokersNum[3]={20,17,17};
        char putPokerList[3][21]={"\0","\0","\0"};
        char currentPutList[2][21]={"\0","\0"};
        strcpy(currentPutList[0],"0\0");
        strcpy(currentPutList[1],"0\0");
        char player[3][21]={"\0"};

        memset(player,'\0',3*21);
        int *randomIntList=malloc(sizeof(int) * 54);
        randomShuffle(randomIntList,54,getRandomNumInt(0));

        int ii=0;
        for(ii=0;ii<3;ii++)
        {
            int j=0;
            for(j=0;j<17;j++)
            {
                player[ii][j]=allPokers[randomIntList[j+ii*17]];
            }
        }
        //int landlordIndex=getRandomNumInt((player[0][0]-'0')*(player[0][3]-'0')*(player[1][5]-'0')*(player[2][1]-'0')*(player[2][3]-'0'))%3;
        //�̶�0��λ���ǵ���
        player[0][17]=allPokers[randomIntList[51]];
        player[0][18]=allPokers[randomIntList[52]];
        player[0][19]=allPokers[randomIntList[53]];
        for(ii=0;ii<3;ii++)
        {
            bubbleSort(player[ii]);
        }
        printf("**********************************************************************\n");
        printf("%s %d\n",player[0],strlen(player[0]));
        printf("%s %d\n",player[1],strlen(player[1]));
        printf("%s %d\n",player[2],strlen(player[2]));
        //printf("landlordIndex:%d\n",landlordIndex);

        int ownIndex=getRandomNumInt((player[0][0]-'0')*(player[0][1]-'0')*(player[1][7]-'0')*(player[2][3]-'0')*(player[2][11]-'0'))%3;

        strcpy(currentPutList[0],"0\0");
        strcpy(currentPutList[1],"0\0");
        char result[21]={"0\0"};

        int COUNT=0;//�����ڼ��γ���
        initMCTS(ownIndex);
        char fileName[15]={"p_"};
        //char *numString=itoa(NUM);
        char numString[15]={"\0"};
        //intToString(NUM,numString);

        //stringjoinNoSpecialCharToNum(fileName,"701");
        stringjoinNoSpecialCharToNum(fileName,argv[1]);
        stringjoinNoSpecialChar(fileName,".txt");
        //�ж��ļ��Ƿ����
        if(!access(fileName,0))
        {
            free(randomIntList);
            printf("���ļ��Ѵ��ڣ�\n");
            return 0;
        }

        freopen(fileName,"w",stdout);
        while(true)
        {
            memset(result,'0\0',21);
            result[0]='0';
            if((COUNT)%3==ownIndex)
            {
                getResult(ownIndex,landlordPokers,result,putPokerList,pokersNum,player[ownIndex],currentPutList);
                if(strcmp(result,"0\0")!=0)
                {
                    stringDelete(player[ownIndex],result);
                    stringjoinNoSpecialChar(putPokerList[ownIndex],result);
                }
            }
            else
            {
                getOthersResult(ownIndex,result,player[(COUNT)%3],currentPutList);
                if(strcmp(result,"0\0")!=0)
                {
                    stringDelete(player[(COUNT)%3],result);
                    stringjoinNoSpecialChar(putPokerList[(COUNT)%3],result);
                }
            }
            strcpy(currentPutList[0],currentPutList[1]);
            if(strlen(result)==0)
                strcpy(currentPutList[1],"0\0");
            else
                strcpy(currentPutList[1],result);
            printf("���ƣ�%s(ʣ���ƣ�%s)\n",result,player[COUNT%3]);
            COUNT++;
//            if(strlen(putPokerList[0])>=17 ||strlen(putPokerList[1])>=17 ||strlen(putPokerList[2])>=17 )
//                printf("er");
            if(strlen(putPokerList[0])==20 || strlen(putPokerList[1])==17 || strlen(putPokerList[2])==17)
            {
                printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
                printf("����(0��)���Ƽ�¼Ϊ:%s\n",putPokerList[0]);
                printf("ũ��(1��)���Ƽ�¼Ϊ:%s\n",putPokerList[1]);
                printf("ũ��(2��)���Ƽ�¼Ϊ:%s\n",putPokerList[2]);
                printf("��Ϊ:%d��\n",ownIndex);
                if(strlen(putPokerList[0])==20 && ownIndex==0)
                    printf("\t\t��ϲ��");
                else
                {
                    if((strlen(putPokerList[1])==17 ||strlen(putPokerList[2])==17) && (ownIndex==1 || ownIndex==2))
                        printf("\t\t��ϲ��");
                    else
                        printf("\t\t�ܲ��ң������ˣ����ͣ���");
                }
                break;
            }
        }
        fclose(stdout);
        free(randomIntList);
    */
    //}


    //stringjoinNoSpecialChar(player[landlordIndex],)






//    getOthersResult(0,result,"334555667777JQKKA",currentPutList);
//    printf("over");
    /*
    initMCTS(1);
    int pokersNum[3]={20,17,17};
    char putPokerList[3][21];
    char currentPutList[2][21];
    char cardList[]="";
    strcpy(putPokerList[0],"55KK226A");
    strcpy(putPokerList[1],"66JB789TJQKA33355");
    strcpy(putPokerList[2],"QQAA");
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*
    initMCTS(0);
    int pokersNum[3]={20,17,17};
    char putPokerList[3][21];
    char currentPutList[2][21];
    char cardList[]="8";
    strcpy(putPokerList[0],"44JJJTTQQK99995ALB2");
    strcpy(putPokerList[1],"QQ33KK5A4567872");
    strcpy(putPokerList[2],"JK");
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */

    //��ǰ���λ�ñ�ǣ����е���Ϊ0����0��1��2��
    /*No.1.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=1;
    char cardList[]="669Q2";//
    //�����ѳ���
    strcpy(putPokerList[0],"4A338887999TTK2JJJJQ");
    strcpy(putPokerList[1],"7233555KKTAL");
    strcpy(putPokerList[2],"KQ");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"JJJJ");

    char landlordPokers[4]="\0";
    */
    /*No.2.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=1;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"3277AA4L6KQQQQ88");
    strcpy(putPokerList[1],"499J22555666A2333");
    strcpy(putPokerList[2],"JB778899TT44KKJA");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.3.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//8JK
    //�����ѳ���
    strcpy(putPokerList[0],"3456789TJJJ68KKAA222");
    strcpy(putPokerList[1],"L99");
    strcpy(putPokerList[2],"923344556QQ");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.4.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    �ڱ�����Ϸ�У��������ֳ���ˮƽ�������׶Σ�δ����һ����ũ����ƺ󣬴����
    int ownIndex=1;
    char cardList[]="JA";//
    //�����ѳ���
    strcpy(putPokerList[0],"33366555QQKKAAA7772L");
    strcpy(putPokerList[1],"444889997TTTQB2");
    strcpy(putPokerList[2],"66JJJ");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.5.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//2B6
    //�����ѳ���
    strcpy(putPokerList[0],"3456789TJQ66AA5B7222");
    strcpy(putPokerList[1],"QQ6");
    strcpy(putPokerList[2],"J");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.6.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//9A2
    //�����ѳ���
    strcpy(putPokerList[0],"57779JJJQKKK4442AAA2");
    strcpy(putPokerList[1],"7TTT6668");
    strcpy(putPokerList[2],"4QQQ");
    //���ֳ���
    strcpy(currentPutList[0],"6668");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.7.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    //��ũ���8ʱ��Ӧ��ͳ�ƽ��δQ������pass
    //��������Jʱ��Ӧ�ó�2������B
    int ownIndex=2;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"456789TJQT225JAA6");
    strcpy(putPokerList[1],"56789TJQK528L99");
    strcpy(putPokerList[2],"6Q82TJQKA33B44477");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.8.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="6";//568
    //�����ѳ���
    strcpy(putPokerList[0],"32244QQAA89TJQK5J22");
    strcpy(putPokerList[1],"4L556677883JJKK9");
    strcpy(putPokerList[2],"QKB33A");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.9.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=0;
    char cardList[]="KK";//28T
    //�����ѳ���
    strcpy(putPokerList[0],"34567894TTTJJ228AA");
    strcpy(putPokerList[1],"7QQQ4455566AAK");
    strcpy(putPokerList[2],"6789TJQ3337LJBK22");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"22");

    char landlordPokers[4]="\0";
    */
    /*No.10.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=1;
    char cardList[]="";//28T
    //�����ѳ���
    strcpy(putPokerList[0],"3456789TJQK55AA2B6");
    strcpy(putPokerList[1],"TT22456787LQKKAAJ");
    strcpy(putPokerList[2],"JJQ");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.11.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//9TA
    //�����ѳ���
    strcpy(putPokerList[0],"567895TTTQQQ89K2LBAA");
    strcpy(putPokerList[1],"TA");
    strcpy(putPokerList[2],"Q");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.12.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=2;
    char cardList[]="3456778999TTA";//9TA
    //�����ѳ���
    strcpy(putPokerList[0],"3344455QQQA82TLKKK7");
    strcpy(putPokerList[1],"66JJJAA2223BK");
    strcpy(putPokerList[2],"8Q6J");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.13.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=2;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"4JKL6B889AQQQ");
    strcpy(putPokerList[1],"6Q2JAA44K");
    strcpy(putPokerList[2],"7993456762JJKK2T2");
    //���ֳ���
    strcpy(currentPutList[0],"Q");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.14.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=1;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"32789TJ44KK");
    strcpy(putPokerList[1],"4B56789QQ2233666A");
    strcpy(putPokerList[2],"Q");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.15.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=1;
    char cardList[]="7";//
    //�����ѳ���
    strcpy(putPokerList[0],"3334426KAAQQQQ55J");
    strcpy(putPokerList[1],"99TTT4L58AJJ22KK");
    strcpy(putPokerList[2],"K667788834567TAB2");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"55");

    char landlordPokers[4]="\0";
    */
    /*No.16.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    //���ϼҳ�Aʱ�����ûҪ��Ȼ����������2ʱ����ǰҪ�����ֺ���
    int ownIndex=2;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"4455667K2B3888AAT");
    strcpy(putPokerList[1],"9A223Q");
    strcpy(putPokerList[2],"TL7QQQ33665582AKK");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */

    //��ʾ��ǰ��ҵ�λ�ã�0��ʾ����
//    int ownIndex;
//    ownIndex=0;
//    char cardList[21]={"\0"};
//    printf("�����뵱ǰ�������:");
//    scanf("%s",cardList);
//    printf("�����뵱ǰ���λ��(0��ʾ����,��ʱ�����,ȡֵ{0��1��2}):");
//    scanf("%d",&ownIndex);
//    while(true)
//    {
//        char result[21]={"\0"};
//        printf("���������ϼҳ���(0��ʾ��)��");
//        scanf("%s",currentPutList[0]);
//        currentPutList[0][strlen(currentPutList[0])]='\0';
//        bubbleSort_cf(currentPutList[0],strlen(currentPutList[0]));
//        if(strcmp(putPokerList[(ownIndex-2)%3],"0")==0)
//            strcpy(putPokerList[(ownIndex-2)%3],currentPutList[0]);//���ϼ�
//        else
//        {
//            if(strcmp(currentPutList[0],"0")!=0)
//                stringjoinNoSpecialChar(putPokerList[(ownIndex-2)%3],currentPutList[0]);
//        }
//        if(strlen(putPokerList[0])==20 || strlen(putPokerList[1])==17 || strlen(putPokerList[2])==17)
//        {
//            printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
//            if(strlen(putPokerList[0])==20)
//                printf("\t\t��ϲ����Ӯ��������");
//            else
//            {
//                if(strlen(putPokerList[1])==17)
//                    printf("\t\t��ϲһ��ũ��Ӯ��������");
//                else
//                    printf("\t\t��ϲ����ũ��Ӯ��������");
//            }
//            break;
//        }
//        printf("�������ϼҳ���(0��ʾ��)��");
//        scanf("%s",currentPutList[1]);
//        currentPutList[1][strlen(currentPutList[1])]='\0';
//        bubbleSort_cf(currentPutList[1],strlen(currentPutList[1]));
//        if(strcmp(putPokerList[(ownIndex-1)%3],"0")==0)
//            strcpy(putPokerList[(ownIndex-1)%3],currentPutList[1]);
//        else
//        {
//            if(strcmp(currentPutList[1],"0")!=0)
//                stringjoinNoSpecialChar(putPokerList[(ownIndex-1)%3],currentPutList[1]);//�ϼ�
//        }
//        if(strlen(putPokerList[0])==20 || strlen(putPokerList[1])==17 || strlen(putPokerList[2])==17)
//        {
//            printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
//            if(strlen(putPokerList[0])==20)
//                printf("\t\t��ϲ����Ӯ��������");
//            else
//            {
//                if(strlen(putPokerList[1])==17)
//                    printf("\t\t��ϲһ��ũ��Ӯ��������");
//                else
//                    printf("\t\t��ϲ����ũ��Ӯ��������");
//            }
//            break;
//        }
//        getResult(ownIndex,landlordPokers,result,putPokerList,pokersNum,cardList,currentPutList);
//        if(strcmp(result,"0\0")!=0)
//        {
//            stringDelete(cardList,result);
//            stringjoinNoSpecialChar(putPokerList[ownIndex],result);
//        }
//    }
    //��ʾ������,10��T��ʾ��С����L��������B
    //char cardList[]="3455777889TQQQAA2";//
    //�����ѳ���
    //��������ѳ��˿ˣ���û�г��Ƶ�ʱ��ʹ��0��ʾ
//    strcpy(putPokerList[0],"3322");
//    strcpy(putPokerList[1],"KK");
//    strcpy(putPokerList[2],"0");
    //���ֳ���
//    strcpy(currentPutList[0],"22");//��ʾ���ϼ�
//    strcpy(currentPutList[1],"0");//��ʾ�ϼ�
//
//    char landlordPokers[4]="\0";


//    printf("���ϼҳ���%s ,�ϼҳ���:%s\n",currentPutList[0],currentPutList[1]);

    //rootLength=initTree(putPokerList,pokersNum,cardList,currentPutList,rootLst);

//    if(currentPutList[0]=='0' && currentPutList[1]=='0')
//        rootLength=initTree(putPokerList,pokersNum,cardList,currentPutList,rootLst,2);
//    else
//        rootLength=initTree(putPokerList,pokersNum,cardList,currentPutList,rootLst,2);

//    printf("�ֵܣ�������س��������֣���������ӭ������һ�֣���л��л������������������������������������\n");
//    getchar();
//    getchar();
//    printf("����һ���س�Ӵ����͵��\n");
//    getchar();
//    getchar();
//    return 0;
}
