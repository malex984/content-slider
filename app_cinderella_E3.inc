<div class="app">
 <script id="app_cinderella_E3_csdraw" type="text/x-cindyscript">
 Dummy.xy=0;
 fillpoly(button1,color->gray(if(pressed1,.3,.5)));
drawpoly(button1,color->gray(.8),size->4);
fillpoly(button2,color->gray(if(pressed2,.3,.5)));
drawpoly(button2,color->gray(.8),size->4);
drawtext(button1_1+(2,.5),if(pressed1,"Stop","Start"),color->(1,1,1),size->34);
drawtext(button2_1+(2,.5),"Spur",color->(1,1,1),size->34);
draw(F,G, arrow->true,size->7,color->(1,1,1));

if(pressed2,
n=300;
l=[C.xy]++l;

if(length(l)>n,
l=apply(1..(length(l)-1),l_#);
);

forall(reverse(1..length(l)),
r=exp(-#*.01)*0.4;
fillcircle(l_#,r,alpha->(1-#/n)/1.5,color->(1,1,0));
drawcircle(l_#,r,alpha->(1-#/n)/1.5,color->(0,0,0));
),
l=[];
);




;
</script>
<script id="app_cinderella_E3_csmousedown" type="text/x-cindyscript">
mpo=mouse().xy;
if(mpo.x>button1_1_1 & mpo.x<button1_2_1 & mpo.y>button1_1_2 & mpo.y<button1_3_2,
if(pressed1,stopanimation(),playanimation());
pressed1=!pressed1);
if(mpo.x>button2_1_1 & mpo.x<button2_2_1 & mpo.y>button2_1_2 & mpo.y<button2_3_2,pressed2=!pressed2);

;
</script>
<script id="app_cinderella_E3_csinit" type="text/x-cindyscript">
l=[];
button1=[[14+9,7],[20+9,7],[20+9,8.7],[14+9,8.7]];
button2=[[14+9,4],[20+9,4],[20+9,5.7],[14+9,5.7]];
pressed1=false;
pressed2=false;






;
</script>

 <script type="text/javascript">
    (function(){
        var uid = 'app_cinderella_B3_CSCanvas_' + new Date().getTime() + '_' + Math.floor((Math.random() * 100) + 1);
        document.write( "<canvas id=\"" + uid + "\" width=\"1560\" height=\"1170\"></canvas>" );

        var cdy = createCindy({
        scripts: "app_cinderella_E3_cs*",
        defaultAppearance: {},
        ports: [{
         id: uid,
         background: "#000000",
         transform: [{visibleRect: [-11.125, 11.916666666666666, 31.541666666666668, -20.083333333333332]}]
        }],
        geometry: [
         {name: "A", type: "Free", pos: [4, -2.4074074074074074, 0.46296296296296297], pinned: true, color: [1, 1, 1], alpha: 0.8999999761581421},
         {name: "B", type: "Free", pos: [8, 4, 1], narrow: true, tracedim: 0.46153846153846156, size: 11, textsize: 17, color: [1, 0.5, 0.5], alpha: 0.8999999761581421},
         {name: "a", type: "Segment", args: ["A", "B"], pos: [-0.400381942958006, 0.10398077170054389, 4], lineborder: true, size: 8, color: [0.098039225, 0.61960787, 0.30588236], alpha: 0.8999999761581421},
         {name: "C", type: "Free", pos: [9, 7, 1], narrow: true, tracelength: 163, size: 11, color: [0.5, 1, 0.5], alpha: 0.8999999761581421},
         {name: "b", type: "Segment", args: ["B", "C"], pos: [-0.6558559754947599, -0.014400127426873377, 4], lineborder: true, size: 8, color: [0.098039225, 0.61960787, 0.30588236], alpha: 0.8999999761581421},
         {name: "F", type: "Free", pos: [3.4, -4, -0.5], narrow: true, size: 0, color: [1, 0, 0], alpha: 0.8999999761581421},
         {name: "G", type: "Free", pos: [4, -2.1882352941176473, -0.5882352941176471], narrow: true, size: 0, color: [1, 0, 0], alpha: 0.8999999761581421},
         {name: "c", type: "Segment", args: ["F", "G"], pos: [0.5882352941176472, 0, 4], overlap: 4, size: 3, color: [1, 1, 1]},
         {name: "Dummy", type: "Free", pos: [0, 0.355889724310776, -0.2506265664160401], pinned: false, color: [1, 0, 0], visible: false}
        ],
        behavior: [
         {behavior: {type: "Environment", gravity: 0, deltat: 0.5, accuracy: 60}},
         {name: "B", behavior: {type: "Mass", mass: 1, friction: 0}},
         {name: "C", behavior: {type: "Mass", mass: 0.2, friction: 0}},
         {name: "a", behavior: {type: "Spring", stype: 0, strength: 110}},
         {name: "b", behavior: {type: "Spring", stype: 0, strength: 110}},
         {name: "c", behavior: {type: "Gravity", strength: 0.01}}
        ]
        });
    })();
</script>
</div>
<div class="app_description">Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum.</div>
<div class="app_name">Cindy_E3</div>
<div class="app_credits"></div>