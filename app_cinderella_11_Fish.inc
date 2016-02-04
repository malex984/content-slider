<div class="app">

 <script id='app_cinderella_11_down' type='cindyscript'>
                       feed=mouse().x<10;
</script>

               <script id='app_cinderella_11_csmouseup' type='cindyscript'>
               feed=false;
        </script>

               <script id='app_cinderella_11_csinit' type='cindyscript'>
             //  playanimation();
                              feed=false;

               pts=allmasses()--[K,L,J];
pts=select(pts,(#.size)<9);
apply(pts,#:"vold"=#.v);

      sizes=apply(pts,random()*.6+.5);
      colors=apply(pts,random());



pause():=(
  pauseanimation();
);
resume():=(
  playanimation();
);
        </script>

<script id='app_cinderella_11_csmove' type='cindyscript'>
err("FISH");


          x=S.x;
          if(x<S1.x,x=S1.x);
          if(x>S2.x,x=S2.x);
          S.xy=(x,S1.y);

          x=R.x;
          if(x<R1.x,x=R1.x);
          if(x>R2.x,x=R2.x);
          R.xy=(x,R1.y);

          x=T.x;
          if(x<T1.x,x=T1.x);
          if(x>T2.x,x=T2.x);
          T.xy=(x,T1.y);

          x=U.x;
          if(x<U1.x,x=U1.x);
          if(x>U2.x,x=U2.x);
          U.xy=(x,U1.y);

others=|S,S1|/|S1,S2|;
dirothers=|R,R1|/|R1,R2|;
anz=round(|T,T1|/|T1,T2|*14)+1;

mspeed=|U,U1|/|U1,U2|;

pts=allmasses();
pts=select(pts,(#.size)<9);

n=10;
nn=anz;
s1=others*1;
s2=dirothers*1;
s=sum(pts,#.xy);
forall(pts,m,
   vold=m.v;
   sorted=sort(pts,abs(m.xy-#.xy));

   near=sorted_(2..(nn));
   numb=length(near);
  // if(Text0.pressed,
  //   apply(near,draw(#,m,color->(1,1,0)));
  // );
   if(numb!=0,
     mid=sum(near,#.xy)/(numb);
     speed=sum(near,#.v)/(numb),
     mid=m.xy;
     speed=(0,0);
   );

  // if((isreal(speed_1)&isreal(speed_2)),
   if(true,
     m.v=m.v+s1*(mid-m.xy);
     m.v=m.v+s2*speed;
     middir=(B+C+D+E)/4-m.xy;
     m.v=m.v+middir*0.02;
     if(feed,
       m.v=m.v+(mouse().xy-m.xy);

     );
     m.color=hue(|m.v|);
     m.v=m.v/|m.v|*mspeed*3;
  );
//vold=m:"vold";

//   if(true,
//    vold=vold/|vold|;
//    errc(vold);
//    vnew=m.v;
//    l=((vnew*vold+1)/2)^2;
//    l=max(l,.3);
//    vv= l*vnew+(1-l)*vold;
//    m.v=vv/|vv|;
//   );
//m:"vold"=m.v;
);



nn=length(pts);
forall(1..nn,p=pts_#;
ang=arctan2(p.vx,-p.vy);
drawimage(p,"fishr",angle->ang,scale->sizes_#*.3*2,alpha->colors_#);
drawimage(p,"fishb",angle->ang,scale->sizes_#*.3*2,alpha->1-colors_#);
//draw(p,p-p.v,color->(0,0,0));
//fillcircle(p,.3,color->hue(|p.v|*.2));
//drawcircle(p,.3,color->(0,0,0));
);
//X.xy=[4,3];
//Y.xy=[-5,4];
//Z.xy=[5,-4];
K.v=(0,0);
J.v=(0,0);
L.v=(0,0);

drawtext(S1+(.0,-.5),"Zur Position der Nachbarn",size->22,color->(1,1,1));
drawtext(S+(0,.7),format(others,2),size->24,color->(1,1,1));

drawtext(R1+(.0,-.5),"Wie Richtung der Nachbarn",size->22,color->(1,1,1));
drawtext(R+(0,.7),format(dirothers,2),size->24,color->(1,1,1));

drawtext(T1+(.0,-.5),"Anzahl Nachbarn",size->22,color->(1,1,1));
drawtext(T+(0,.7),format(anz,0),size->24,color->(1,1,1));

drawtext(U1+(.0,-.5),"Geschwindigkeit",size->22,color->(1,1,1));


        </script>




        <script type="text/javascript">

            (function(){

        var uid = 'app_cinderella_11_CSCanvas_' + new Date().getTime() + '_' + Math.floor((Math.random() * 100) + 1);
        document.write( "<canvas id=\"" + uid + "\" width=\"1560\" height=\"1170\"></canvas>" );

            var nn=30;
            var b=10;
            var gslp=[
                      {name:"B", type:"Free", pos:[-b,b],color:[0,0,0],size:3,pinned:true},
                      {name:"C", type:"Free", pos:[-b,-b],color:[0,0,0],size:3,pinned:true},
                      {name:"D", type:"Free", pos:[b,-b],color:[0,0,0],size:3,pinned:true},
                      {name:"E", type:"Free", pos:[b,b],color:[0,0,0],size:3,pinned:true},
                      {name:"K", type:"Free", pos:[-6,-2],color:[.7,.7,1],size:13},
                      {name:"J", type:"Free", pos:[4,3],color:[.7,.7,1],size:13},
                      {name:"L", type:"Free", pos:[-2,7],color:[.7,.7,1],size:13},



    {name:"S1", type:"Free", pos:[10.5,6],color:[0,0,0],pinned:true,size:2},
    {name:"S2", type:"Free", pos:[16,6],color:[0,0,0],pinned:true,size:2},
    {name:"S", type:"Free", pos:[12.5,6],color:[1,0.5,0.5],pinned:false,size:6},
    {name:"l", type:"Segment", args:["S1","S2"],color:[1,1,1],pinned:false,size:4},
   {name:"R1", type:"Free", pos:[10.5,4],color:[0,0,0],pinned:true,size:2},
    {name:"R2", type:"Free", pos:[16,4],color:[0,0,0],pinned:true,size:2},
    {name:"R", type:"Free", pos:[11.5,4],color:[1,1,1],pinned:false,size:6},
    {name:"m", type:"Segment", args:["R1","R2"],color:[1,1,1],pinned:false,size:4},
   {name:"T1", type:"Free", pos:[10.5,0],color:[0,0,0],pinned:true,size:2},
    {name:"T2", type:"Free", pos:[16,0],color:[0,0,0],pinned:true,size:2},
    {name:"T", type:"Free", pos:[13,0],color:[0.5,0.5,1],pinned:false,size:6},
    {name:"o", type:"Segment", args:["T1","T2"],color:[1,1,1],pinned:false,size:4},

   {name:"U1", type:"Free", pos:[10.5,-2],color:[0,0,0],pinned:true,size:2},
    {name:"U2", type:"Free", pos:[16,-2],color:[0,0,0],pinned:true,size:2},
    {name:"U", type:"Free", pos:[12,-2],color:[0.5,0.5,1],pinned:false,size:6},
    {name:"r", type:"Segment", args:["U1","U2"],color:[1,1,1],pinned:false,size:4},

                      {name:"a", type:"Segment", args:["B","C"],color:[1,1,1],size:1 },
                      {name:"b", type:"Segment", args:["C","D"],color:[1,1,1],size:1 },
                      {name:"c", type:"Segment", args:["D","E"],color:[1,1,1],size:1 },
                      {name:"d", type:"Segment", args:["E","B"],color:[1,1,1],size:1 }



                    ];

    for(var i=0;i<nn;i++){
    gslp.push(
              {name:"A"+i, type:"Free",
              pos:[(Math.random()-.5)*14,(Math.random()-.5)*14],
              color:[1,.5,.5],size:.1}
              )

};
            var physics=[
                       {behavior:{type:"Environment",gravity:0,
                       accuracy:10,deltat:0.2,
                       balls:false,charges:true,friction:0}},

                       {name:"a", behavior:{type:"Bouncer"}},
                       {name:"b", behavior:{type:"Bouncer"}},
                       {name:"c", behavior:{type:"Bouncer"}},
                       {name:"d", behavior:{type:"Bouncer"}},
                       {name:"K", behavior:{type:"Mass",charge:1,fixed:true}},
                       {name:"L", behavior:{type:"Mass",charge:1,fixed:true}},
                       {name:"J", behavior:{type:"Mass",charge:1,fixed:true}},
                       ];


for(var i=0;i<nn;i++){
    physics.push(
              {name:"A"+i, behavior:{
              type:"Mass",
              vx:Math.random()-.5,
              vy:Math.random()-.5,
              charge:1.2},
              }
              )

};
            var cdy11=createCindy({
            	//canvasname:"CSCanvas",
                        scripts:"app_cinderella_11_cs*",
                        geometry:gslp,
                        behavior:physics,
            			//transform: [{visibleRect: [-10, 10, 16.7, -10]}],
                        images:{fishr:"app_cinderella_11/fishr.png",fishb:"app_cinderella_11/fishb.png"},
                       // background: "rgba(0,0,0,0)",
 ports: [{
            id: uid,
            background: "rgba(0,0,0,1)",
            transform: [{visibleRect: [-10, 10, 16.7, -10]}]
          }]

                        }
                        );

 current_content_slides.push(
             new function () {
                 return {
                    pause: function() {
                        console.log( 'pause fish' );
                        cdy11.evokeCS('pause();');
                    },
                    resume: function() {
                        console.log( 'resume fish' );
                        cdy11.evokeCS('resume();');
                    },
                    restart: function( pause_after_restart ) {
                        if(!pause)
                            cdy11.evokeCS('resume();');
                        console.log( 'restart fish' );
                    }
                 }
             }
         );

    })();

        </script>



	</div>