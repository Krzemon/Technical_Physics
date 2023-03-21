<Qucs Schematic 0.0.19>
<Properties>
  <View=0,-321,1665,798,0.826446,0,0>
  <Grid=10,10,1>
  <DataSet=5.2.dat>
  <DataDisplay=5.2.dpl>
  <OpenDisplay=1>
  <Script=5.2.m>
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
  <GND * 1 200 420 0 0 0 0>
  <Vac V1 1 200 320 18 -26 0 1 "U" 1 "1 GHz" 0 "0" 0 "0" 0>
  <OpAmp OP1 1 350 230 -26 -98 1 0 "1M" 1 "15 V" 1>
  <.TR TR1 1 120 -110 0 65 0 0 "lin" 1 "0" 1 "3 ms" 1 "200" 1 "Trapezoidal" 0 "2" 0 "1 ns" 0 "1e-16" 0 "150" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "26.85" 0 "1e-3" 0 "1e-6" 0 "1" 0 "CroutLU" 0 "no" 0 "yes" 0 "0" 0>
  <.SW SW1 1 290 -110 0 65 0 0 "TR1" 1 "list" 1 "U" 1 "1" 0 "10e9" 0 "[1;5;10;15;20;25]" 1>
</Components>
<Wires>
  <200 350 200 420 "" 0 0 0 "">
  <200 250 200 290 "" 0 0 0 "">
  <200 250 320 250 "" 0 0 0 "">
  <290 210 320 210 "" 0 0 0 "">
  <390 230 440 230 "Uout" 460 200 42 "">
  <290 130 290 210 "" 0 0 0 "">
  <290 130 440 130 "" 0 0 0 "">
  <440 130 440 230 "" 0 0 0 "">
  <200 250 200 250 "Uin" 140 230 0 "">
</Wires>
<Diagrams>
</Diagrams>
<Paintings>
</Paintings>
