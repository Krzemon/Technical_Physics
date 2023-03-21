<Qucs Schematic 0.0.19>
<Properties>
  <View=0,-150,2007,1152,1,14,134>
  <Grid=10,10,1>
  <DataSet=7.1.dat>
  <DataDisplay=7.1.dpl>
  <OpenDisplay=1>
  <Script=7.1.m>
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
  <GND * 1 160 650 0 0 0 0>
  <Vac V1 1 160 570 18 -26 0 1 "1V" 1 "1 GHz" 0 "0" 0 "0" 0>
  <Lib OP1 1 380 460 -20 64 0 0 "OpAmps" 0 "ua741(mod)" 0>
  <Vdc V3 1 420 360 -64 -26 0 3 "Vg" 1>
  <GND * 1 480 330 0 0 0 0>
  <GND * 1 420 650 0 0 0 0>
  <.SW SW1 1 110 150 0 67 0 0 "AC1" 1 "lin" 1 "Vg" 1 "1" 1 "15" 1 "20" 1>
  <Eqn Eqn1 1 410 140 -34 16 0 0 "k=dB(Vo.v/Vi.v)" 1 "yes" 0>
  <.DC DC1 1 110 70 0 41 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <.AC AC1 1 110 370 0 41 0 0 "log" 1 "1 Hz" 1 "10 GHz" 1 "71" 1 "no" 0>
  <Vdc V4 1 420 570 18 -26 1 3 "Vg" 1>
</Components>
<Wires>
  <160 600 160 650 "" 0 0 0 "">
  <160 520 160 540 "" 0 0 0 "">
  <160 520 330 520 "Vi" 220 490 40 "">
  <330 500 330 520 "" 0 0 0 "">
  <330 500 340 500 "" 0 0 0 "">
  <420 600 420 650 "" 0 0 0 "">
  <420 500 420 540 "" 0 0 0 "">
  <420 390 420 420 "" 0 0 0 "">
  <420 330 480 330 "" 0 0 0 "">
  <260 420 340 420 "" 0 0 0 "">
  <260 280 260 420 "" 0 0 0 "">
  <260 280 570 280 "" 0 0 0 "">
  <570 280 570 460 "Vo" 490 420 171 "">
  <470 460 570 460 "" 0 0 0 "">
</Wires>
<Diagrams>
  <Rect 660 691 484 531 3 #c0c0c0 1 00 1 1 2 15 1 -6.26768e-05 0.0001 0.000769343 1 -1 0.2 1 315 0 225 "" "" "">
	<"Vo.V" #0000ff 0 3 0 0 0>
	  <Mkr 8.36842 287 -419 3 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>
