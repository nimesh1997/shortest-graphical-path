#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include <iostream>

#define INFINITY 999

int n0 = 0;int n1 = 0;int n2 = 0;int n3 = 0;int n4 = 0;int n5 = 0;int n6 = 0;int n7 = 0;int n8 = 0;int n9 = 0;int n10 = 0;int n11 = 0;int n12 = 0;int n13 = 0;int n14 = 0;int n15 = 0;int n16 = 0;
int n17 = 0;int n18 = 0;int n19 = 0;

int l1 = 15;int l2 = 15;int l3 = 15;int l4 = 15;int l5 = 15;int l6 = 15;int l7 = 15;int l8 = 15;int l9 = 15;
int al1 = 15;
int bl1 = 15;int bl2 = 15;int bl3 = 15;int bl4 = 15;int bl5 = 15;int bl6 = 15;int bl7 = 15;int bl8 = 15;
int cl1 = 15;int cl2 = 15;
int dl1 = 15;int dl2 = 15;int dl3 = 15;int dl4 = 15;int dl5 = 15;int dl6 = 15;int dl7 = 15;
int el1 = 15;int el2 = 15;
int fl1 = 15;int fl2 = 15;

int graph(int n0, int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8,int n9,int n10,int n11,int n12,int n13,int n14,int n15,int n16,int n17,int n18,int n19,
          int l1,int l2,int l3,int l4,int l5,int l6,int l7,int l8,int l9,
          int al1,
          int bl1,int bl2,int bl3,int bl4,int bl5,int bl6,int bl7,int bl8,
          int cl1,int cl2,
          int dl1,int dl2,int dl3,int dl4,int dl5,int dl6,
          int dl7,int el1,int el2,int fl1,int fl2);
//Global declaration of variables used in algorithm//
int adja,src;
int temp[750];
int o = 1;

using namespace std;
class Dijkstra{
   private:
        int predecessor[20],distance[20]; // previous node and the distance
        bool mark[20]; // visited node
        int source;   //   source node?
        int dest;  // destination?
        int numOfVertices;  // total no of nodes i.e. 20

   public:
     int adjMatrix[40][40];
     int quart[20];
        void read();
        void initialize();
        int getClosestUnmarkedNode();
        void calculateDistance();
        void output();
       void printPath(int);
};
void Dijkstra::read(){
             numOfVertices = 20;//20;

            for(int v = 0; v < 20; v++)   // initially setting all weights to INFINITY = 999
            {
                    for(int u = 0; u < 20; u++)
                    adjMatrix[v][u] = INFINITY;
            }
adjMatrix[0][0] = 0;
adjMatrix[0][1] = 2;
adjMatrix[0][5] = 5;
adjMatrix[1][0] = 2;
adjMatrix[1][1] = 0;
adjMatrix[1][2] = 4;
adjMatrix[1][6] = 8;
adjMatrix[2][1] = 4;
adjMatrix[2][2] = 0;
adjMatrix[2][3] = 6;
adjMatrix[2][7] = 12;
adjMatrix[3][2] = 6;
adjMatrix[3][3] = 0;
adjMatrix[3][4] = 5;
adjMatrix[3][8] = 13;
adjMatrix[4][3] = 5;
adjMatrix[4][4] = 0;
adjMatrix[4][9] = 7;
adjMatrix[5][0] = 5;
adjMatrix[5][5] = 0;
adjMatrix[5][6] = 5;
adjMatrix[5][10] = 3;
adjMatrix[6][1] = 8;
adjMatrix[6][5] = 5;
adjMatrix[6][6] = 0;
adjMatrix[6][7] = 7;
adjMatrix[6][11] = 6;
adjMatrix[7][2] = 12;
adjMatrix[7][6] = 7;
adjMatrix[7][7] = 0;
adjMatrix[7][8] = 8;
adjMatrix[7][12] = 8;
adjMatrix[8][3] = 13;
adjMatrix[8][7] = 8;
adjMatrix[8][8] = 0;
adjMatrix[8][9] = 10;
adjMatrix[8][13] = 9;
adjMatrix[9][4] = 7;
adjMatrix[9][8] = 10;
adjMatrix[9][9] = 0;
adjMatrix[9][14] = 10;
adjMatrix[10][5] = 3;
adjMatrix[10][10] = 0;
adjMatrix[10][11] = 2;
adjMatrix[10][15] = 12;
adjMatrix[11][6] = 6;
adjMatrix[11][10] = 2;
adjMatrix[11][11] = 0;
adjMatrix[11][12] = 8;
adjMatrix[11][16] = 5;
adjMatrix[12][7] = 8;
adjMatrix[12][11] = 8;
adjMatrix[12][12] = 0;
adjMatrix[12][13] = 10;
adjMatrix[12][17] = 7;
adjMatrix[13][8] = 9;
adjMatrix[13][12] = 10;
adjMatrix[13][13] = 0;
adjMatrix[13][14] = 3;
adjMatrix[13][18] = 6;
adjMatrix[14][9] = 10;
adjMatrix[14][13] = 3;
adjMatrix[14][14] = 0;
adjMatrix[14][19] = 10;
adjMatrix[15][10] = 12;
adjMatrix[15][15] = 0;
adjMatrix[15][16] = 3;
adjMatrix[16][11] = 5;
adjMatrix[16][15] = 3;
adjMatrix[16][16] = 0;
adjMatrix[16][17] = 5;
adjMatrix[17][12] = 7;
adjMatrix[17][16] = 5;
adjMatrix[17][17] = 0;
adjMatrix[17][18] = 7;
adjMatrix[18][13] = 6;
adjMatrix[18][17] = 7;
adjMatrix[18][18] = 0;
adjMatrix[18][19] = 8;
adjMatrix[19][14] = 10;
adjMatrix[19][18] = 8;
adjMatrix[19][19] = 0;


    cout << "\n\t      DATA STRUCTURES PROJECT\n";
    cout << "\n\tDIJKSTRA'S ALGORITHM GRAPHICAL IMPLEMENTATION\n";

    Sleep(3000);  // wait 3 seconds
    graph(n0, n1,n2, n3, n4, n5, n6, n7, n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,
          n18,n19,l1,l2,l3,l4,l5,l6,l7,l8,l9,al1,bl1,bl2,bl3,bl4,bl5,
           bl6, bl7,bl8,cl1,cl2,dl1,dl2,dl3,dl4,dl5,dl6,
           dl7,el1,el2,fl1,fl2);
    Sleep(2000);
    cout << "\n\nTotal Nodes: 20(from 0 to 19)\n\n\n";
    Retry://go to
    cout<<"Enter the Source Node: ";
    cin>>source;

    while((source<0) || (source>numOfVertices-1)) {
         cout<<"\n\nSource vertex should be between 0 and "<<numOfVertices-1<< "!"<<endl;
        cout<<"\nEnter the source vertex again: ";
        cin>>source;  system("cls");}
    cout<<"\n\nEnter the Destination Node: ";
    cin>>dest;

    while((dest<0) || (dest>numOfVertices-1)) {
        cout<<"\n\nDestination vertex should be between 0 and "<<numOfVertices-1<< "!"<<endl;
        cout<<"\nEnter the Destination vertex again: ";
        cin>>dest;}

    if(source == dest)
        {
          cout << "\n\n\tSource and Destination vertices CAN NOT be the same!!!\n\n\n";
          goto Retry;}
        system("cls");
}

void Dijkstra::initialize()
{
    for(int i=0;i<numOfVertices;i++)
        {
        mark[i] = false;
        predecessor[i] = -1;
        distance[i] = INFINITY;
    }
    distance[source]= 0;
}
int Dijkstra::getClosestUnmarkedNode(){
    int minDistance = INFINITY;
    int closestUnmarkedNode;
    for(int i=0;i<numOfVertices;i++) {
        if((!mark[i]) && ( minDistance >= distance[i])) {
            minDistance = distance[i];
            closestUnmarkedNode = i;
        }
    }
    return closestUnmarkedNode;
}



void Dijkstra::calculateDistance(){
    initialize();
    int minDistance = INFINITY;
    int closestUnmarkedNode;
    int count = 0;
    while(count < numOfVertices)
    {
        closestUnmarkedNode = getClosestUnmarkedNode();
        mark[closestUnmarkedNode] = true;
        for(int i=0;i<numOfVertices;i++)
            {
            if((!mark[i]) && (adjMatrix[closestUnmarkedNode][i]>0) )
             {
                if(distance[i] > distance[closestUnmarkedNode]+adjMatrix[closestUnmarkedNode][i])
                {
                    distance[i] = distance[closestUnmarkedNode]+adjMatrix[closestUnmarkedNode][i];
                    temp[i]=distance[i];
                    predecessor[i] = closestUnmarkedNode;
                 }
            }
        }
        count++;
    }
}

void Dijkstra::printPath(int node){
    if(node == source)
        {src = node;
        temp[0]=node;
        cout<< node <<"..";}
    else {
        printPath(predecessor[node]);
        temp[o] = node;
        o++;
        cout<< node <<"..";

        ///if the corresponding node is visited change its color to blue///////

        if( node == 0 ) {n0 = 1;}
        else if( node == 1 ) {n1 = 1;}
        else if( node == 2 ) {n2 = 1;}
        else if( node == 3 ) {n3 = 1;}
        else if( node == 4 ) {n4 = 1;}
        else if( node == 5 ) {n5 = 1;}
        else if( node == 6 ) {n6 = 1;}
        else if( node == 7 ) {n7 = 1;}
        else if( node == 8 ) {n8 = 1;}
        else if( node == 9 ) {n9 = 1;}
        else if( node == 10 ) {n10 = 1;}
        else if( node == 11 ) {n11 = 1;}
        else if( node == 12 ) {n12 = 1;}
        else if( node == 13 ) {n13 = 1;}
        else if( node == 14 ) {n14 = 1;}
        else if( node == 15 ) {n15 = 1;}
        else if( node == 16 ) {n16 = 1;}
        else if( node == 17 ) {n17 = 1;}
        else if( node == 18 ) {n18 = 1;}
        else if( node == 19 ) {n19 = 1;}

        if( source == 0 ) {n0 = 1;}
        else if( source == 1 ) {n1 = 1;}
        else if( source == 2 ) {n2 = 1;}
        else if( source == 3 ) {n3 = 1;}
        else if( source == 4 ) {n4 = 1;}
        else if( source == 5 ) {n5 = 1;}
        else if( source == 6 ) {n6 = 1;}
        else if( source == 7 ) {n7 = 1;}
        else if( source == 8 ) {n8 = 1;}
        else if( source == 9 ) {n9 = 1;}
        else if( source == 10 ) {n10 = 1;}
        else if( source == 11 ) {n11 = 1;}
        else if( source == 12 ) {n12 = 1;}
        else if( source == 13 ) {n13 = 1;}
        else if( source == 14 ) {n14 = 1;}
        else if( source == 15 ) {n15 = 1;}
        else if( source == 16 ) {n16 = 1;}
        else if( source == 17 ) {n17 = 1;}
        else if( source == 18 ) {n18 = 1;}
        else if( source == 19 ) {n19 = 1;}
    }
}
void Dijkstra::output(){

            system("cls");
            cout <<"\nSource: "<<source<< "           Destination: "<<dest <<endl;
            cout << "\n\n\nPath from Source to Destination : ";
            printPath(dest);
       cout<<"\n\nTotal Distance: "<<distance[dest]<<endl;

      int count; int first;
      first = temp[0];
      int k;
      int x =1;

      int k1;
      k1 = adjMatrix[source][first];
      while(x < o)
      {
              k = adjMatrix[first][temp[x]];
              first = temp[x];
               if(n0 == 1 && n1 == 1){l1 = 10;}
      if(n1 == 1 && n2 == 1){l3 = 10;}
      if(n2 == 1 && n3 == 1){l5 = 10;}
      if(n3 == 1 && n4 == 1){l7 = 10;}

      if(n0 == 1 && n5 == 1 && (k == 5 || k1 == 5)){l2 = 10;}
      if(n1 == 1 && n6 == 1 && (k ==  8 || k1 == 8)){l4 = 10;}
      if(n2 == 1 && n7 == 1 && (k == 12 || k1 == 12)){l6 = 10;}
      if(n3 == 1 && n8 == 1 && (k == 13 || k1 == 13)){l8 = 10;}
      if(n4 == 1 && n9 == 1  && (k == 7 || k1 == 7)){l9 = 10;}

      if(n5 == 1 && n6 == 1){al1 = 10;}
      if(n6 == 1 && n7 == 1){bl2 = 10;}
      if(n7 == 1 && n8 == 1){bl4 = 10;}
      if(n8 == 1 && n9 == 1){bl6 = 10;}

      if(n5 == 1 && n10 == 1 && (k == 3 || k1 == 3)){bl1 = 10;}
      if(n6 == 1 && n11 == 1 && (k == 6 || k1 == 6)){bl3 = 10;}
      if(n7 == 1 && n12 == 1 && (k == 8 || k1 == 8)){bl5 = 10;}
      if(n8 == 1 && n13 == 1 && (k == 9 || k1 == 9)){bl7 = 10;}
      if(n9 == 1 && n14 == 1 && (k == 10 || k1 == 10)){bl8 = 10;}

      if(n10 == 1 && n11 == 1){cl1 = 10;}
      if(n11 == 1 && n12 == 1){dl1 = 10;}
      if(n12 == 1 && n13 == 1){dl3 = 10;}
      if(n13 == 1 && n14 == 1){dl5 = 10;}

      if(n10 == 1 && n15 == 1 && (k == 12 || k1 == 12)){cl2 = 10;}
      if(n11 == 1 && n16 == 1 && (k == 5 || k1 == 5)){dl2 = 10;}
      if(n12 == 1 && n17 == 1 && (k == 7 || k1 == 7)){dl4 = 10;}
      if(n13 == 1 && n18 == 1 && (k == 6 || k1 == 6)){dl6 = 10;}
      if(n14 == 1 && n19 == 1 && (k == 10 || k1 == 10)){dl7 = 10;}

      if(n15 == 1 && n16 == 1){el1 = 10;}
      if(n16 == 1 && n17 == 1){el2 = 10;}
      if(n17 == 1 && n18 == 1){fl1 = 10;}
      if(n18 == 1 && n19 == 1){fl2 = 10;}
      x++;
              }
      cout << "\n\n\tWait for Graph to be Updated.....\n\n";
      /*for(int h=0;h<o;h++)
        cout<<temp[h]<<" ";*/
      Sleep(750);
}

int main(){
   Dijkstra G;
   G.read();
   G.calculateDistance();
   G.output();
    graph(n0, n1,n2, n3, n4, n5, n6, n7, n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,
          n18,n19,l1,l2,l3,l4,l5,l6,l7,l8,l9,al1,bl1,bl2,bl3,bl4,bl5,
           bl6, bl7,bl8,cl1,cl2,dl1,dl2,dl3,dl4,dl5,dl6,
           dl7,el1,el2,fl1,fl2);
    system("pause");
}
int graph(int n0, int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8,int n9,int n10,int n11,int n12,int n13,int n14,int n15,int n16,int n17,int n18,int n19,
          int l1,int l2,int l3,int l4,int l5,int l6,int l7,int l8,int l9,
          int al1,
          int bl1,int bl2,int bl3,int bl4,int bl5,int bl6,int bl7,int bl8,
          int cl1,int cl2,
          int dl1,int dl2,int dl3,int dl4,int dl5,int dl6,
          int dl7,
          int el1,int el2,
          int fl1,int fl2)
{
   int gd = DETECT, gm, midx, midy;
   initwindow(550, 480, "Dijkstra project");
   midx = getmaxx()/12;
   midy = getmaxy()/12;
   ////////////row 1///////////////////////////////////////////////////
//------------------------0--1---0--5------------------------------
   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n0);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"2");
   outtextxy(midx+5,midy+25,"5");

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"0");
   midx = midx + 100;
//------------------------1--2---1--6------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n1);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"4");
   outtextxy(midx+5,midy+25,"8");

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"1");
   midx = midx + 100;
//------------------------2--3---2--7------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n2);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"6");
   outtextxy(midx+5,midy+25,"12");

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"2");

   midx = midx + 100;
//------------------------3--4---3--8------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n3);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"5");
   outtextxy(midx+5,midy+25,"13");

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"3");

   midx = midx + 100;
//------------------------4--9---------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n4);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+5,midy+25,"7");

   setcolor(WHITE);
   outtextxy(midx-4,midy-9,"4");

   ////////////////////////////////////////////////////////////////
   ////////////////////row 2//////////////////////////////////////
   midx = getmaxx()/12;
   midy = midy + 60;
   //------------------------5--6---5--10------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n5);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"5");
   outtextxy(midx+5,midy+25,"3");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"5");

   midx = midx + 100;
//------------------------6--7---6--11------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n6);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"7");
   outtextxy(midx+5,midy+25,"6");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"6");

   midx = midx + 100;
//------------------------7--8---7--12------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n7);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"8");
   outtextxy(midx+5,midy+25,"8");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"7");

   midx = midx + 100;
//------------------------8--9---8--13------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n8);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"10");
   outtextxy(midx+5,midy+25,"9");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"8");

   midx = midx + 100;
//------------------------9--10---------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n9);
   floodfill(midx, midy,WHITE);

   setcolor(11);

   outtextxy(midx+5,midy+25,"10");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"9");

   midx = getmaxx()/12;
   midy = midy + 60;
//------------------------10--11---10--15------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n10);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"2");
   outtextxy(midx+5,midy+25,"12");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"10");

   midx = midx + 100;
//------------------------11--12---11--16------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n11);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"8");
   outtextxy(midx+5,midy+25,"5");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"11");

   midx = midx + 100;
//------------------------12--13---12--17------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n12);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"10");

outtextxy(midx+5,midy+25,"7");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"12");

   midx = midx + 100;
//------------------------13--14---13--18------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n13);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"3");
   outtextxy(midx+5,midy+25,"6");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"13");

   midx = midx + 100;
//------------------------14--19--------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n14);
   floodfill(midx, midy,WHITE);

   setcolor(11);

   outtextxy(midx+5,midy+25,"10");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"14");
//------------------------15--16-------------------------------

   midx = getmaxx()/12;
   midy = midy + 60;
   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n15);
   floodfill(midx, midy,WHITE);

   setcolor(11);

   outtextxy(midx+45,midy,"3");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"15");

   midx = midx + 100;
//------------------------16--17--------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n16);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"5");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"16");

   midx = midx + 100;
//------------------------17--18------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n17);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"7");

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"17");

   midx = midx + 100;
//------------------------18--19---------------------------------

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n18);
   floodfill(midx, midy,WHITE);

   setcolor(11);
   outtextxy(midx+45,midy,"8");

   setcolor(11);

   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"18");

   midx = midx + 100;

   rectangle(midx+15,midy-10,midx-15,midy+10);
   setfillstyle(SOLID_FILL,n19);
   floodfill(midx, midy,WHITE);

   setcolor(11);


   setcolor(WHITE);
   outtextxy(midx-7,midy-9,"19");


   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);
   midx = getmaxx()/12;
   midy = getmaxy()/12;

for(int h=0;h<o-1;h++)
{
    midx = getmaxx()/12;
   midy = getmaxy()/12;
   int p=midx;
//-----------------------------0--1-------------------------------
if(temp[h]==0 && temp[h+1]==1)
{if(n0 == 1 && n1 == 1)
   {setcolor(l1);
   delay(750);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);}
}
p=p+100;
if(temp[h]==1 && temp[h+1]==0)
{if(n0 == 1 && n1 == 1)
   {setcolor(l1);
   delay(750);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);}
}
//--------------------------0--5----------------------------------
if(temp[h]==0 && temp[h+1]==5)
{
   if(n0 == 1 && n5 == 1)
    {setcolor(l2);
    delay(750);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);}
}

if(temp[h]==5 && temp[h+1]==0)
{
   if(n0 == 1 && n5 == 1)
    {setcolor(l2);
    delay(750);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);}
}
midx=midx+100;
//---------------------------1--2---------------------------------
if(temp[h]==1 && temp[h+1]==2)
{
if(n1==1 && n2==1)
   {setcolor(l3);
   delay(750);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);
   }
}
p=p+100;
if(temp[h]==2 && temp[h+1]==1)
{
if(n1==1 && n2==1)
   {setcolor(l3);
   delay(750);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);
   }
}
//-----------------------1--6---------------------------
if((temp[h]==1 && temp[h+1]==6)||(temp[h]==6 && temp[h+1]==1))
{
    if(n1==1 && n6==1)
    {setcolor(l4);
    delay(750);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
    }
}

midx = midx + 100;
//----------------------2--3-----------------------------
if(temp[h]==2 && temp[h+1]==3)
{
if(n2==1 && n3==1)
   {
       delay(750);
       setcolor(l5);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);
   }
}
p=p+100;
if(temp[h]==3 && temp[h+1]==2)
{
if(n2==1 && n3==1)
   {
       delay(750);
       setcolor(l5);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);
   }
}
//----------------------2--7-------------------------------
if((temp[h]==2 && temp[h+1]==7)||(temp[h]==7 && temp[h+1]==2))
{
    if(n2==1 && n7==1)
   {
       delay(750);
       setcolor(l6);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
   }
}
midx = midx + 100;
//---------------------3--4----------------------------------
if(temp[h]==3 && temp[h+1]==4)
{
if(n3==1 && n4==1)
   {
       delay(750);
       setcolor(l7);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);}
}
p=p+100;
if(temp[h]==4 && temp[h+1]==3)
{
if(n3==1 && n4==1)
   {
       delay(750);
       setcolor(l7);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);}
}
//---------------------3--8------------------------------------
if((temp[h]==3 && temp[h+1]==8)||(temp[h]==8 && temp[h+1]==3))
{
    if(n3==1 && n8==1)
   {
       delay(750);
       setcolor(l8);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);}
}
midx = midx + 100;
//---------------------4--9-----------------------------------
if((temp[h]==4 && temp[h+1]==9)||(temp[h]==9 && temp[h+1]==4))
{
if(n4==1 && n9==1)
   {
       delay(750);
       setcolor(l9);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
   }
}
//------------------------------------------------------------
midx = getmaxx()/12;
midy = midy + 60;
p=midx;
//--------------------5--6-------------------------------------
if(temp[h]==5 && temp[h+1]==6)
{
if(n5==1 && n6==1)
   {
       delay(750);
       setcolor(al1);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);}
}
p=p+100;
if(temp[h]==6 && temp[h+1]==5)
{
if(n5==1 && n6==1)
   {
       delay(750);
       setcolor(al1);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);}
}
//--------------------5--10---------------------------------------
if((temp[h]==5 && temp[h+1]==10)||(temp[h]==10 && temp[h+1]==5))
{
    if(n5==1 && n10==1)
   {
       setcolor(bl1);
       delay(750);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
   }
}
midx = midx + 100;
//-------------------6--7-----------------------------------------
if(temp[h]==6 && temp[h+1]==7)
{
if(n6==1 && n7==1)
  {
      delay(750);
      setcolor(bl2);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);}
}
p=p+100;
if(temp[h]==7 && temp[h+1]==6)
{
if(n6==1 && n7==1)
  {
      delay(750);
      setcolor(bl2);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);}
}
//----------------------6--11-------------------------------------
if((temp[h]==6 && temp[h+1]==11)||(temp[h]==11 && temp[h+1]==6))
{
    if(n6==1 && n11==1)
   {
       setcolor(bl3);
       delay(750);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
   }
}
midx = midx + 100;
//-------------------------7--8-----------------------------------
if(temp[h]==7 && temp[h+1]==8)
{
if(n7==1 && n8==1)
  {
      delay(750);
      setcolor(bl4);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);
  }
}
p=p+100;
if(temp[h]==8 && temp[h+1]==7)
{
if(n7==1 && n8==1)
  {
      delay(750);
      setcolor(bl4);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);
  }
}
//--------------------------7--12----------------------------------
if((temp[h]==7 && temp[h+1]==12)||(temp[h]==12 && temp[h+1]==7))
{
    if(n7==1 && n12==1)
   {
       delay(750);
       setcolor(bl5);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);}
}
midx = midx + 100;
//---------------------------8--9----------------------------------
if(temp[h]==8 && temp[h+1]==9)
{
if(n8==1 && n9==1)
  {
      delay(750);
      setcolor(bl6);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);}
}
p=p+100;
if(temp[h]==9 && temp[h+1]==8)
{
if(n8==1 && n9==1)
  {
      delay(750);
      setcolor(bl6);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);}
}
//----------------------------8--13--------------------------------
if((temp[h]==8 && temp[h+1]==13)||(temp[h]==13 && temp[h+1]==8))
{
   if(n8==1 && n13==1)
   {
       delay(750);
       setcolor(bl7);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
   }
}
midx = midx + 100;
//----------------------------9--14-------------------------------
if((temp[h]==9 && temp[h+1]==14)||(temp[h]==14 && temp[h+1]==9))
{
if(n9==1 && n14==1)
   {
       delay(750);
       setcolor(bl8);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
   }
}
midx = getmaxx()/12;
midy = midy + 60;
p=midx;
//-----------------------------10--11------------------------------
if(temp[h]==10 && temp[h+1]==11)
{
if(n10==1 && n11==1)
  {
      delay(750);
      setcolor(cl1);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);
  }
}
p=p+100;
if(temp[h]==11 && temp[h+1]==10)
{
if(n10==1 && n11==1)
  {
      delay(750);
      setcolor(cl1);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);
  }
}
//------------------------------10--15------------------------------
if((temp[h]==10 && temp[h+1]==15)||(temp[h]==15 && temp[h+1]==10))
{
  if(n10==1 && n15==1)
   {
       delay(750);
       setcolor(cl2);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
   }
}
midx = midx + 100;
//------------------------------11--12-------------------------------
if(temp[h]==11 && temp[h+1]==12)
{
if(n11==1 && n12==1)
  {
      delay(750);
      setcolor(dl1);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);
  }
}
p=p+100;
if(temp[h]==12 && temp[h+1]==11)
{
if(n11==1 && n12==1)
  {
      delay(750);
      setcolor(dl1);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);
  }
}
//-------------------------------11--16---------------------------------
if((temp[h]==11 && temp[h+1]==16)||(temp[h]==16 && temp[h+1]==11))
{
  if(n11==1 && n16==1)
   {
       delay(750);
       setcolor(dl2);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);}
}
midx = midx + 100;
//----------------------------------12--13------------------------------
if(temp[h]==12 && temp[h+1]==13)
{
if(n12==1 && n13==1)
  {
      delay(750);
      setcolor(dl3);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);}
}
p=p+100;
if(temp[h]==13 && temp[h+1]==12)
{
if(n12==1 && n13==1)
  {
      delay(750);
      setcolor(dl3);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);}
}
//-------------------------------12--17---------------------------------
if((temp[h]==12 && temp[h+1]==17)||(temp[h]==17 && temp[h+1]==12))
{
   if(n12==1 && n17==1)
   {
       delay(750);
       setcolor(dl4);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);}
}
midx = midx + 100;
//---------------------------------13--14---------------------------------
if(temp[h]==13 && temp[h+1]==14)
{
if(n13==1 && n14==1)
  {
      delay(750);
      setcolor(dl5);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);
  }
}
p=p+100;
if(temp[h]==14 && temp[h+1]==13)
{
if(n13==1 && n14==1)
  {
      delay(750);
      setcolor(dl5);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);
  }
}
//---------------------------------13--18----------------------------------
if((temp[h]==13 && temp[h+1]==18)||(temp[h]==18 && temp[h+1]==13))
{
  if(n13==1 && n18==1)
   {
       delay(750);
       setcolor(dl6);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
   }
}
midx = midx + 100;
//---------------------------------14--19----------------------------------
if((temp[h]==14 && temp[h+1]==19)||(temp[h]==19 && temp[h+1]==14))
{
if(n14==1 && n19==1)
   {
       delay(750);
       setcolor(dl7);
   line(midx,midy+50,midx,midy+10);
   delay(750);
   setcolor(15);
   }
}
midx = getmaxx()/12;
midy = midy + 60;
p=midx;
//---------------------------------15--16-----------------------------------
if(temp[h]==15 && temp[h+1]==16)
{
if(n15==1 && n16==1)
  {
      delay(750);
      setcolor(el1);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);
  }
}
p=p+100;
if(temp[h]==16 && temp[h+1]==15)
{
if(n15==1 && n16==1)
  {
      delay(750);
      setcolor(el1);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);
  }
}
midx = midx + 100;
//--------------------------------16--17---------------------------------------
if(temp[h]==16 && temp[h+1]==17)
{
if(n16==1 && n17==1)
  {
      delay(750);
      setcolor(el2);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);
  }
}
p=p+100;
if(temp[h]==17 && temp[h+1]==16)
{
if(n16==1 && n17==1)
  {
      delay(750);
      setcolor(el2);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);
  }
}
midx = midx + 100;
//-------------------------------17--18-------------------------------------------
if(temp[h]==17 && temp[h+1]==18)
{
if(n17==1 && n18==1)
  {
      delay(750);
      setcolor(fl1);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);
  }
}
p=p+100;
if(temp[h]==18 && temp[h+1]==17)
{
if(n17==1 && n18==1)
  {
      delay(750);
      setcolor(fl1);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);
  }
}
midx = midx + 100;
//-------------------------------18--19-------------------------------------------
if(temp[h]==18 && temp[h+1]==19)
{
if(n18==1 && n19==1)
  {
      delay(750);
      setcolor(fl2);
   line(midx+15,midy,midx+85,midy);
   delay(750);
   setcolor(15);}
}
p=p+100;
if(temp[h]==19 && temp[h+1]==18)
{
if(n18==1 && n19==1)
  {
      delay(750);
      setcolor(fl2);
   line(p-15,midy,p-85,midy);
   delay(750);
   setcolor(15);}
}
midx = midx + 100;
}
//-----------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------
   midx = (getmaxx()/12);
   midy = (getmaxy()/12) + 250;
   outtextxy(midx-15,midy+50,"- Blue Nodes Represent Visited Nodes");

   midx = getmaxx()/12;
   outtextxy(midx-15,midy+80,"- Green Paths Represent Followed Paths");
}
