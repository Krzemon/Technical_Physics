<Qucs Schematic 0.0.19>
<Properties>
  <View=0,-120,1230,818,1,0,60>
  <Grid=10,10,1>
  <DataSet=zad4.2.dat>
  <DataDisplay=zad4.2.dpl>
  <OpenDisplay=1>
  <Script=zad4.2.m>
  <RunScript=0>
  <showFrame=0>
  <FrameText0=Title>
  <FrameText1=Drawn By:>
  <FrameText2=Date:>
  <FrameText3=Revision:>
</Properties>
<Symbol>
</Symbol>
<Components>
  <GND * 1 270 490 0 0 0 0>
  <GND * 1 560 500 0 0 0 0>
  <R R1 1 420 350 -26 15 0 0 "R1" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <C C1 1 560 430 17 -26 0 1 "C1" 1 "" 0 "neutral" 0>
  <Vac V1 1 270 410 18 -26 0 1 "1 V" 1 "f" 1 "0" 0 "0" 0>
  <Eqn Eqn1 1 300 570 -34 16 0 0 "R1=10000" 1 "t=0.001" 1 "f=1/(2*pi*t)" 1 "C1=t/R1" 1 "T=2/f" 1 "yes" 0>
  <.TR TR1 1 410 560 0 63 0 0 "lin" 1 "0" 1 "T" 1 "100" 0 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
</Components>
<Wires>
  <450 350 560 350 "" 0 0 0 "">
  <270 350 390 350 "Uin" 270 300 12 "">
  <270 350 270 380 "" 0 0 0 "">
  <270 440 270 490 "" 0 0 0 "">
  <560 460 560 500 "" 0 0 0 "">
  <560 350 560 400 "" 0 0 0 "">
  <560 350 640 350 "" 0 0 0 "">
  <640 350 640 350 "Uout" 630 310 0 "">
</Wires>
<Diagrams>
  <Rect 660 630 493 284 3 #c0c0c0 1 00 1 0 0.2 1 1 -0.1 0.5 1.1 1 -0.1 0.5 1.1 315 0 225 "" "" "">
	<"Uin.Vt" #0000ff 0 3 0 0 0>
	<"Uout.Vt" #ff0000 0 3 0 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>
