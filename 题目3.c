void reverse(int a[])
 {
     int i;
     for(i=0;i<sizeof(a)/2;i++){
       a[i]=a[i]^a[sizeof(a)-i];
       a[sizeof(a)-i]=a[i]^a[sizeof(a)-i];
       a[i]=a[i]^a[sizeof(a)-i];
     }

 }
