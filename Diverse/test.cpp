 0 1 2 3 4 5  n
0
1
2
3
4
5

m


if(x>0 && y>0){
  if(mat[x-1][y-1]!=0)
    fill(x,y);
}
if(x>0){
  if(mat[x-1][y]!=0)
    fill(x-1,y);
}
if(x>0 && y<n-1){
  if(mat[x-1][y+1]!=0)
    fill(x-1,y+1);

}
if(y<n-1){
  if(mat[x][y+1]!=0);
    fill(x,y+1);
}
if(x<n-1 && y<n-1){
  if(mat[x+1][y+1]!=0)
    fill(x+1,y+1);
}
if(x<n-1){
  if(mat[x+1][y]!=0)
    fill(x+1,y);
}
if(x<n-1 && y>0){
  if(mat[x+1][y-1]!=0)
    fill(x+1,y-1);
}
if(y>0){
  if(mat[x][y-1]!=0)
    fill(x,y-1);
}

  //int x1, y1;
 //   for(int i=0; i < 8; i++ ){

  //       x1=x+dx[i];

  //       y1=y+dy[i];
        

    // if( x1 < 0 || y1 < 0 || x1 > n || y1 > n || mat[x1][y1]==0 ) /*daca coordonatele sunt invalide sau M[x1][y1] este 0 */
  //           continue;  //merg mai departe
        
  //       mat[x1][y1]=0; //marchez ca am fost pe aici 
  //       Afisare() ;
  //       cout << '\n';
  //       fill( x1, y1 ); // apelez functia din nou pt. identificarea elementelor din "insula" ca sa le marchez cu 0

  //   }



