<Qucs Schematic 0.0.19>
<Properties>
  <View=0,150,1453,1208,1,0,180>
  <Grid=10,10,1>
  <DataSet=zad4.dat>
  <DataDisplay=zad4.dpl>
  <OpenDisplay=1>
  <Script=zad4.m>
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
  <Vrect V1 1 180 250 18 -26 0 1 "1 V" 1 "5 ms" 1 "5 ms" 1 "1 ns" 0 "1 ns" 0 "0 ns" 0>
  <GND * 1 180 340 0 0 0 0>
  <GND * 1 400 340 0 0 0 0>
  <C C1 1 400 250 17 -26 0 1 "1 nF" 1 "" 0 "neutral" 0>
  <.TR TR1 1 140 420 0 63 0 0 "lin" 1 "0" 1 "20 ms" 1 "20" 1 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
  <.SW SW1 1 280 420 0 63 0 0 "TR1" 1 "lin" 1 "tau" 1 "1 ms" 1 "5 ms" 1 "5" 1>
  <R R1 1 310 200 -26 15 0 0 "R1" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <Eqn Eqn1 1 490 430 -34 16 0 0 "R1=tau/C1.C" 1 "yes" 0>
</Components>
<Wires>
  <180 200 280 200 "Uin" 130 170 28 "">
  <180 200 180 220 "" 0 0 0 "">
  <180 280 180 340 "" 0 0 0 "">
  <340 200 400 200 "" 0 0 0 "">
  <400 200 400 220 "" 0 0 0 "">
  <400 200 460 200 "" 0 0 0 "">
  <400 280 400 340 "" 0 0 0 "">
  <460 200 460 200 "Uout" 500 170 0 "">
</Wires>
<Diagrams>
  <Rect 600 638 667 468 3 #c0c0c0 1 00 1 0 0.2 1 1 -0.1 0.5 1.1 1 -0.1 0.5 1.1 315 0 225 "" "" "">
	<"Uin.Vt" #0000ff 0 3 0 0 0>
	  <Mkr 0.0157895/0.001 707 -459 3 0 0>
	<"Uout.Vt" #ff0000 0 3 0 0 0>
	  <Mkr 0.0189474/0.005 702 -376 3 0 0>
	  <Mkr 0.0189474/0.004 702 -291 3 0 0>
	  <Mkr 0.02/0.003 697 -211 3 0 0>
	  <Mkr 0.0189474/0.002 702 -129 3 0 0>
	  <Mkr 0.0178947/0.001 697 -50 3 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>
