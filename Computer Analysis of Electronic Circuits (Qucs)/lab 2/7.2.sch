<Qucs Schematic 0.0.19>
<Properties>
  <View=0,-150,2007,1092,1,14,74>
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
  <Lib OP1 1 380 460 -20 64 0 0 "OpAmps" 0 "ua741(mod)" 0>
  <Vdc V3 1 420 360 -64 -26 0 3 "15 V" 1>
  <GND * 1 480 330 0 0 0 0>
  <GND * 1 420 650 0 0 0 0>
  <Vdc V4 1 420 570 18 -26 1 3 "15 V" 1>
  <.TR TR1 1 260 110 0 63 0 0 "lin" 1 "0" 1 "4 ms" 1 "500" 1 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
  <Vrect V5 1 160 570 18 -26 0 1 "U" 1 "1 ms" 1 "1 ms" 1 "1 ns" 0 "1 ns" 0 "0 ns" 0>
  <.SW SW1 1 90 110 0 67 0 0 "TR1" 1 "list" 1 "U" 1 "5 V" 0 "25 V" 0 "[5 ;10;15;20;25 ]" 1>
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
</Diagrams>
<Paintings>
</Paintings>
