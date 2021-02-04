void setu()
{

  
 bottonB=digitalRead(botton2);         
 if (bottonB==1)                        
 {delay(250);
  
   y++;

  if (y==1)
  {
    h1=0;
    h2=1;
  }

  if (y==2)
  {
    h1=0;
    h2=2;
  }

  if (y==3)
  {
    h1=0;
    h2=3;
  }

  if (y==4)
  {
    h1=0;
    h2=4;
  }

  if (y==5)
  {
    h1=0;
    h2=5;
  }

  if (y==6)
  {
    h1=0;
    h2=6;
  }

  if (y==7)
  {
    h1=0;
    h2=7;
  }


  if (y==8)
  {
    h1=0;
    h2=8;
  }

  if (y==9)
  {
    h1=0;
    h2=9;
  }


  if (y==10)
  {
    h1=1;
    h2=0;
  }


  if (y==11)
  {
    h1=1;
    h2=1;
  }


  if (y==12)
  {
    h1=1;
    h2=2;
  }



  if (y>12)
  {
    y=1;
    h1=0;
    h2=1;
  }
 }

 

 bottonC=digitalRead(botton3);         
 if (bottonC==1)                        
 {delay(200);
  m2++;
 }
 
 pantalla();
}
