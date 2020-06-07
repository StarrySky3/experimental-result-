
#include<stdio.h>

#include<stdbool.h>
#include"./dictionary/dict.h"
#include"./pokerUtil/pokerUtil.h"
#include"./dictionary/dictionary.h"
#include"./pokerNode/root.h"
#define HASH_SIZE 100
#define DICTIONARY_SIZE 14865



int main()
{
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
    int pokersNum[3]={20,17,17};
    char putPokerList[3][21];
    char currentPutList[2][21];

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
    
	
	/*N0.1 WWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"55578999TQQQKKK2LB44");
    strcpy(putPokerList[1],"0");
    strcpy(putPokerList[2],"3666");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*N0.2 WWWWWWWWWWWWWWWWWW
    int ownIndex=1;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"33345677889TJJQKKKA");
    strcpy(putPokerList[1],"345566799TJQQA222");
    strcpy(putPokerList[2],"4JQ2");
    //���ֳ���
    strcpy(currentPutList[0],"4");
    strcpy(currentPutList[1],"8");
    */
    /*N0.3 FFFFFFFFFFFFFFFFFFFF
     int ownIndex=2;
    char cardList[]="9K";//
    //�����ѳ���
    strcpy(putPokerList[0],"455666789TTJQQ2ALB");
    strcpy(putPokerList[1],"677KKKA");
    strcpy(putPokerList[2],"47TTAA222JJJ338");
    //���ֳ���
    strcpy(currentPutList[0],"LB");
    strcpy(currentPutList[1],"0");
    */
    /*N0.4 FFFFFFFFFFFFFFFFF
     int ownIndex=2;
    char cardList[]="33455699TTKA2";//
    //�����ѳ���
    strcpy(putPokerList[0],"445566677789TJQKAAJ2");
    strcpy(putPokerList[1],"9TJQKA4288833LB7");
    strcpy(putPokerList[2],"2QQK");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"7");
    */
     /*N0.5FFFFFFFFFFFFFFF
     int ownIndex=1;
    char cardList[]="34458TJJQQKAA2L";//
    //�����ѳ���
    strcpy(putPokerList[0],"558884999Q7777A2");
    strcpy(putPokerList[1],"66");
    strcpy(putPokerList[2],"JJ3334");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"7777A2");
    */
    /*N0.6 WWWWWWWWWWWWWWWWWWWW
    int ownIndex=1;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"34567TJQKA5KB7");
    strcpy(putPokerList[1],"6789TT2Q333466AA2");
    strcpy(putPokerList[2],"KK");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*N0.7 FFFFFFFFFFF
     int ownIndex=2;
    char cardList[]="Q";//
    //�����ѳ���
    strcpy(putPokerList[0],"33QQKK52LTT9999");
    strcpy(putPokerList[1],"77AA33445588QJJ");
    strcpy(putPokerList[2],"TTJJAA4KB6667822");
    //���ֳ���
    strcpy(currentPutList[0],"9999");
    strcpy(currentPutList[1],"0");
    */
    /*N0.8 WWWWWWWWWWWWWWWW
     int ownIndex=1;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"7B56789TJ923KKK3");
    strcpy(putPokerList[1],"9KL456789T7JJJ2AA");
    strcpy(putPokerList[2],"Q");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*N0.9 WWWWWWWWWWWWW
    int ownIndex=1;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"442266AA338899JL");
    strcpy(putPokerList[1],"KKJJ2BTJQKA45678T");
    strcpy(putPokerList[2],"55994567833TT7");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
     /* NO.10 WWWWWWWWW
      int ownIndex=1;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"55667789TJQKA3339");
    strcpy(putPokerList[1],"44486789TJQKAQ222");
    strcpy(putPokerList[2],"0");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
     /*N0.11 WWWWWWWW
       int ownIndex=1;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"44AAQQQ55");
    strcpy(putPokerList[1],"99JJJJ33888TTTT22");
    strcpy(putPokerList[2],"KK");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*N0.12 WWWWWWWWWWWW
     int ownIndex=0;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"444555683337LBTAJ2KK");
    strcpy(putPokerList[1],"JK");
    strcpy(putPokerList[2],"88839TJQKA24");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*N0.13 WWWWWWWWWWWWWWW
     int ownIndex=2;
     char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"3456789TTAA8");
    strcpy(putPokerList[1],"T");
    strcpy(putPokerList[2],"456789T33KK224299");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
     /*N0.14 WWWWWWWWWWWWWW
      int ownIndex=0;
     char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"44557778889TJQKA2ALB");
    strcpy(putPokerList[1],"0");
    strcpy(putPokerList[2],"0");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*No.15
    int ownIndex=2;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"34567KL772288TT");
    strcpy(putPokerList[1],"AJJ99");
    strcpy(putPokerList[2],"6789T3B5522JKKKA9");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*N0.16 FFFFFFFFFFFFFFF
    int ownIndex=2;
    char cardList[]="5TQAA22";//
    //�����ѳ���
    strcpy(putPokerList[0],"3456789T22JJJ6LBKKKA");
    strcpy(putPokerList[1],"QQQ3");
    strcpy(putPokerList[2],"456789TJ33");
    //���ֳ���
    strcpy(currentPutList[0],"LB");
    strcpy(currentPutList[1],"0");
    */
    /*N0.17 WWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"3456789TJQ4AL8B55KKK");
    strcpy(putPokerList[1],"69");
    strcpy(putPokerList[2],"Q2J");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*N0.18 WWWWWWWWWWW
     int ownIndex=2;
    char cardList[]="TTQ2";//
    //�����ѳ���
    strcpy(putPokerList[0],"3AKKK345678Q2");
    strcpy(putPokerList[1],"Q24455669993KLBAA");
    strcpy(putPokerList[2],"89TJQ345678JA");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"AA");
    */
    /*N0.19 WWWWWWWWWWW
     int ownIndex=0;
    char cardList[]="A";//
    //�����ѳ���
    strcpy(putPokerList[0],"56789TJQQQ56KTT222B");
    strcpy(putPokerList[1],"JA5678933KK");
    strcpy(putPokerList[2],"JJ33");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */
    /*N0.20 WWWWWWWWWWWWW
     int ownIndex=0;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"444533337B88QQTTKK9L");
    strcpy(putPokerList[1],"9998A22TJQKA662");
    strcpy(putPokerList[2],"JJAA4567855");
    //���ֳ���
    strcpy(currentPutList[0],"2");
    strcpy(currentPutList[1],"0");
    */
    /*N0.21 WWWWWWWW
    int ownIndex=2;
    char cardList[]="";//
    //�����ѳ���
    strcpy(putPokerList[0],"789TJQKA33QQ2255");
    strcpy(putPokerList[1],"55KK");
    strcpy(putPokerList[2],"88AA33444JJJ6T2KL");
    //���ֳ���
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");
    */



    char landlordPokers[4]="\0";
    printf("���ϼҳ���%s ,�ϼҳ���:%s\n",currentPutList[0],currentPutList[1]);
    initMCTS(ownIndex);
    root rootLst[300];
    int rootLength=0;
    rootLength=initTree(putPokerList,pokersNum,cardList,currentPutList,rootLst,2);
    //rootLength=initTree(putPokerList,pokersNum,cardList,currentPutList,rootLst);

//    if(currentPutList[0]=='0' && currentPutList[1]=='0')
//        rootLength=initTree(putPokerList,pokersNum,cardList,currentPutList,rootLst,2);
//    else
//        rootLength=initTree(putPokerList,pokersNum,cardList,currentPutList,rootLst,2);
    if(rootLength==1 && strcmp(rootLst[0].cards,"0")==0)
    {
        printf("\n����:pass\n");
    }
    else
    {
        float resultList[300][2];
        memset(resultList,0,300*2);
        //Dictionary * resultDic;
        //resultDic=dictionary_create(DICTIONARY_SIZE);
        int i=0;
        int NUM=rootLength*5000;
        if(NUM>100000)
            NUM=120000;
        else if(NUM<50000)
            //NUM=100000;
            NUM=50000;
        int index=-1;
        float max=-2.0;
        int indexSub=-1;
        float maxSub=-2.0;
        for(i=0;i<NUM;i++)
        {
            /*
            if(i>rootLength*3000)
                break;
            */
            if(i%5000==0)
            {
                int index;
                printf("*****************************************************************************************************************%d\n",i);
                for(index=0;index<rootLength;index++)
                {
                    printf("����:%15s,����:%5d,����:%5d,rate:%25.6f\n",rootLst[index].cards,(int)resultList[index][0],(int)resultList[index][1],(float)resultList[index][1]/resultList[index][0]);
                }
            }
            mctsSearch(i,landlordPokers,rootLst,rootLength,resultList);
            //printf("\n");

        }
        printf("*****************************************************************************************************************\n");
        for(i=0;i<rootLength;i++)
        {
            if((float)resultList[i][1]/resultList[i][0]>max)
            {
                max=(float)resultList[i][1]/resultList[i][0];
                index=i;
            }
            printf("����:%15s,����:%5f,����:%5f,rate:%25.6f\n",rootLst[i].cards,resultList[i][0],resultList[i][1],(float)resultList[i][1]/resultList[i][0]);
        }
        if(rootLst[index].cards[0]=='0' && rootLength>3)
        {
            for(i=0;i<rootLength;i++)
            {
                if((float)resultList[i][1]/resultList[i][0]>maxSub && (float)resultList[i][1]/resultList[i][0]<max)
                {
                    maxSub=(float)resultList[i][1]/resultList[i][0];
                    indexSub=i;
                }
            }
            printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
            printf("\n����:%15s,����:%5d,����:%5d,rate:%25.6f\n",rootLst[indexSub].cards,resultList[indexSub][0],resultList[indexSub][1],(float)resultList[indexSub][1]/resultList[indexSub][0]);
        }
        else
        {
            printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
            printf("\n����:%15s,����:%5d,����:%5d,rate:%25.6f\n",rootLst[index].cards,resultList[index][0],resultList[index][1],(float)resultList[index][1]/resultList[index][0]);
        }
    }

    return 0;
}
