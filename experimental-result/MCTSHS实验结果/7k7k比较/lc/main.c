
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

    //当前玩家位置标记，其中地主为0，（0，1，2）
    /*No.1.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=1;
    char cardList[]="669Q2";//
    //所有已出牌
    strcpy(putPokerList[0],"4A338887999TTK2JJJJQ");
    strcpy(putPokerList[1],"7233555KKTAL");
    strcpy(putPokerList[2],"KQ");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"JJJJ");

    char landlordPokers[4]="\0";
    */
    /*No.2.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=1;
    char cardList[]="";//
    //所有已出牌
    strcpy(putPokerList[0],"3277AA4L6KQQQQ88");
    strcpy(putPokerList[1],"499J22555666A2333");
    strcpy(putPokerList[2],"JB778899TT44KKJA");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.3.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//8JK
    //所有已出牌
    strcpy(putPokerList[0],"3456789TJJJ68KKAA222");
    strcpy(putPokerList[1],"L99");
    strcpy(putPokerList[2],"923344556QQ");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.4.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    在本次游戏中，地主表现出高水平，在最后阶段，未三带一避免农民接牌后，打对子
    int ownIndex=1;
    char cardList[]="JA";//
    //所有已出牌
    strcpy(putPokerList[0],"33366555QQKKAAA7772L");
    strcpy(putPokerList[1],"444889997TTTQB2");
    strcpy(putPokerList[2],"66JJJ");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.5.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//2B6
    //所有已出牌
    strcpy(putPokerList[0],"3456789TJQ66AA5B7222");
    strcpy(putPokerList[1],"QQ6");
    strcpy(putPokerList[2],"J");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.6.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//9A2
    //所有已出牌
    strcpy(putPokerList[0],"57779JJJQKKK4442AAA2");
    strcpy(putPokerList[1],"7TTT6668");
    strcpy(putPokerList[2],"4QQQ");
    //本轮出牌
    strcpy(currentPutList[0],"6668");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.7.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    //当农民出8时，应该统计结果未Q而不是pass
    //当地主出J时，应该出2而不是B
    int ownIndex=2;
    char cardList[]="";//
    //所有已出牌
    strcpy(putPokerList[0],"456789TJQT225JAA6");
    strcpy(putPokerList[1],"56789TJQK528L99");
    strcpy(putPokerList[2],"6Q82TJQKA33B44477");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.8.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="6";//568
    //所有已出牌
    strcpy(putPokerList[0],"32244QQAA89TJQK5J22");
    strcpy(putPokerList[1],"4L556677883JJKK9");
    strcpy(putPokerList[2],"QKB33A");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.9.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=0;
    char cardList[]="KK";//28T
    //所有已出牌
    strcpy(putPokerList[0],"34567894TTTJJ228AA");
    strcpy(putPokerList[1],"7QQQ4455566AAK");
    strcpy(putPokerList[2],"6789TJQ3337LJBK22");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"22");

    char landlordPokers[4]="\0";
    */
    /*No.10.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=1;
    char cardList[]="";//28T
    //所有已出牌
    strcpy(putPokerList[0],"3456789TJQK55AA2B6");
    strcpy(putPokerList[1],"TT22456787LQKKAAJ");
    strcpy(putPokerList[2],"JJQ");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.11.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    char cardList[]="";//9TA
    //所有已出牌
    strcpy(putPokerList[0],"567895TTTQQQ89K2LBAA");
    strcpy(putPokerList[1],"TA");
    strcpy(putPokerList[2],"Q");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.12.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=2;
    char cardList[]="3456778999TTA";//9TA
    //所有已出牌
    strcpy(putPokerList[0],"3344455QQQA82TLKKK7");
    strcpy(putPokerList[1],"66JJJAA2223BK");
    strcpy(putPokerList[2],"8Q6J");
    //本轮出牌
    strcpy(currentPutList[0],"0");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */
    /*No.13.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW

    int ownIndex=2;
    char cardList[]="";//
    //所有已出牌
    strcpy(putPokerList[0],"4JKL6B889AQQQ");
    strcpy(putPokerList[1],"6Q2JAA44K");
    strcpy(putPokerList[2],"7993456762JJKK2T2");
    //本轮出牌
    strcpy(currentPutList[0],"Q");
    strcpy(currentPutList[1],"0");

    char landlordPokers[4]="\0";
    */

    /*No.1.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=2;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//
    //所有已出牌
    strcpy(putPokerList[0],"556677KKQLJJ9999");//0号玩家，表示地主
    strcpy(putPokerList[1],"2244AB55TTTT88");//1号玩家
    strcpy(putPokerList[2],"66778833QQ42KKAAA");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//上上家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*N0.2.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//87K
    //所有已出牌
    strcpy(putPokerList[0],"3456786JJJ9922KAAAQB");//0号玩家，表示地主
    strcpy(putPokerList[1],"TTK");//1号玩家
    strcpy(putPokerList[2],"QQA");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//上上家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";*/
    /*NO.3.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
     int ownIndex=1;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//
    //所有已出牌
    strcpy(putPokerList[0],"789TJA");//0号玩家，表示地主
    strcpy(putPokerList[1],"89TJQ5KKKJBAAQ222");//1号玩家
    strcpy(putPokerList[2],"L");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//上上家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.4.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
     int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="2";//99J
    //所有已出牌
    strcpy(putPokerList[0],"34567899TTJJQQ6KKK");//0号玩家，表示地主
    strcpy(putPokerList[1],"0");//1号玩家
    strcpy(putPokerList[2],"55AAA3339777TTB2Q");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"Q");//上上家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*N0.5.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//34K
    //所有已出牌
    strcpy(putPokerList[0],"5566779KQAJ2444A2333");//0号玩家，表示地主
    strcpy(putPokerList[1],"TL9TJQKA3Q");//1号玩家
    strcpy(putPokerList[2],"8899TT4QJKB5");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.6.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//36K
    //所有已出牌
    strcpy(putPokerList[0],"3366677KKK4B8825LAAT");//0号玩家，表示地主
    strcpy(putPokerList[1],"55QQQ8223A");//1号玩家
    strcpy(putPokerList[2],"QK");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.7.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=2;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="KA";//
    //所有已出牌
    strcpy(putPokerList[0],"55JJAB789TJ24444");//0号玩家，表示地主
    strcpy(putPokerList[1],"KK66778833AA5");//1号玩家
    strcpy(putPokerList[2],"629TJQK56789T3L");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"3QQQ");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*N0.8.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="2";//JJK
    //所有已出牌
    strcpy(putPokerList[0],"66778833444JJKKK5AT");//0号玩家，表示地主
    strcpy(putPokerList[1],"62556789TJJQQLBAA");//1号玩家
    strcpy(putPokerList[2],"33999K224");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"LB");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.9.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="7AA";//8K2
    //所有已出牌
    strcpy(putPokerList[0],"56789TTTKK222238A");//0号玩家，表示地主
    strcpy(putPokerList[1],"TJQKA334448Q");//1号玩家
    strcpy(putPokerList[2],"JJJQQK4L3666B8999");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"8999");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.10.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//899
    //所有已出牌
    strcpy(putPokerList[0],"339TJQK7A56789TJQ5LB");//0号玩家，表示地主
    strcpy(putPokerList[1],"KK6789T87");//1号玩家
    strcpy(putPokerList[2],"TJQKA3J");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.11.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//45T
    //所有已出牌
    strcpy(putPokerList[0],"3677788844AA5522TQLB");//0号玩家，表示地主
    strcpy(putPokerList[1],"66TTJA");//1号玩家
    strcpy(putPokerList[2],"JJ");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"A");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.12.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//4T2
    //所有已出牌
    strcpy(putPokerList[0],"456789T4A7QQQJJ2227B");//0号玩家，表示地主
    strcpy(putPokerList[1],"623334A");//1号玩家
    strcpy(putPokerList[2],"6789TJQ3J");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.13.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=2;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//
    //所有已出牌
    strcpy(putPokerList[0],"3456789TJ66KK228B99");//0号玩家，表示地主
    strcpy(putPokerList[1],"QQAA9KK");//1号玩家
    strcpy(putPokerList[2],"JAA33448877JJQQ2T");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.14.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=1;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="6";//
    //所有已出牌
    strcpy(putPokerList[0],"444556789TT2229AAJJK");//0号玩家，表示地主
    strcpy(putPokerList[1],"9TJQK33355A7788Q");//1号玩家
    strcpy(putPokerList[2],"QQKK789TJ66");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"K");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.15.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//89K
    //所有已出牌
    strcpy(putPokerList[0],"456789T89TJQKAJJ9222");//0号玩家，表示地主
    strcpy(putPokerList[1],"AA44B335557");//1号玩家
    strcpy(putPokerList[2],"KK334JL7");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.16.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//678
    //所有已出牌
    strcpy(putPokerList[0],"66778899335JBTJQKA44");//0号玩家，表示地主
    strcpy(putPokerList[1],"JJ57A");//1号玩家
    strcpy(putPokerList[2],"Q4K3");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.17.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//25J
    //所有已出牌
    strcpy(putPokerList[0],"56789TJQKA33JJJ2925L");//0号玩家，表示地主
    strcpy(putPokerList[1],"TTQQQ34445B6A8");//1号玩家
    strcpy(putPokerList[2],"K9");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.18.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=1;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="334455888TJJQQ";//
    //所有已出牌
    strcpy(putPokerList[0],"66AA34567TB77KK2222J");//0号玩家，表示地主
    strcpy(putPokerList[1],"99Q");//1号玩家
    strcpy(putPokerList[2],"KK456783");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"J");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.19.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="66788JJQKKAA2L";//8JL
    //所有已出牌
    strcpy(putPokerList[0],"3TTTT5");//0号玩家，表示地主
    strcpy(putPokerList[1],"A2444566999BJJQQQ");//1号玩家
    strcpy(putPokerList[2],"0");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"JJQQQ");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.20.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=1;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//
    //所有已出牌
    strcpy(putPokerList[0],"3336K2555899L");//0号玩家，表示地主
    strcpy(putPokerList[1],"3KKK7788994A226BJ");//1号玩家
    strcpy(putPokerList[2],"JJ");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.21.WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="";//QAL
    //所有已出牌
    strcpy(putPokerList[0],"35QQQKKK4B6AL8ATT222");//0号玩家，表示地主
    strcpy(putPokerList[1],"892J");//1号玩家
    strcpy(putPokerList[2],"KJ");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.22.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=2;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="346788TTJQ";//
    //所有已出牌
    strcpy(putPokerList[0],"3QKKAA34567222299JJ5");//0号玩家，表示地主
    strcpy(putPokerList[1],"5L3456789TQQAAKK");//1号玩家
    strcpy(putPokerList[2],"6789TJ4");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"5");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";
    */
    /*NO.23.FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="88JQ";//34A
    //所有已出牌
    strcpy(putPokerList[0],"34567T5AAA344422");//0号玩家，表示地主
    strcpy(putPokerList[1],"56789336");//1号玩家
    strcpy(putPokerList[2],"QQ6K5999JJJKTTLB2");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"0");//下家
    strcpy(currentPutList[1],"2");//上家

    char landlordPokers[4]="\0";
    */
    int ownIndex=0;
    //自己手牌，其中L表示小王，B表示大王，T表示10
    char cardList[]="K";//446
    //所有已出牌
    strcpy(putPokerList[0],"445556667762JJLB92K");//0号玩家，表示地主
    strcpy(putPokerList[1],"8KK3334A77QQQJJA");//1号玩家
    strcpy(putPokerList[2],"QATTTT4");//2号玩家
    //本轮出牌
    strcpy(currentPutList[0],"A");//下家
    strcpy(currentPutList[1],"0");//上家

    char landlordPokers[4]="\0";



    printf("上上家出牌%s ,上家出牌:%s\n",currentPutList[0],currentPutList[1]);
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
        printf("\n出牌:pass\n");
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
                    printf("出牌:%15s,次数:%5d,收益:%5d,rate:%25.6f\n",rootLst[index].cards,(int)resultList[index][0],(int)resultList[index][1],(float)resultList[index][1]/resultList[index][0]);
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
            printf("出牌:%15s,次数:%5f,收益:%5f,rate:%25.6f\n",rootLst[i].cards,resultList[i][0],resultList[i][1],(float)resultList[i][1]/resultList[i][0]);
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
            printf("\n出牌:%15s,次数:%5d,收益:%5d,rate:%25.6f\n",rootLst[indexSub].cards,resultList[indexSub][0],resultList[indexSub][1],(float)resultList[indexSub][1]/resultList[indexSub][0]);
        }
        else
        {
            printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
            printf("\n出牌:%15s,次数:%5d,收益:%5d,rate:%25.6f\n",rootLst[index].cards,resultList[index][0],resultList[index][1],(float)resultList[index][1]/resultList[index][0]);
        }
    }

    return 0;
}
