<Qucs Schematic 0.0.19>
<Properties>
  <View=0,-167,1417,841,1,0,0>
  <Grid=10,10,1>
  <DataSet=zad2.dat>
  <DataDisplay=zad2.dpl>
  <OpenDisplay=1>
  <Script=zad2.m>
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
  <Vdc V1 1 120 250 18 -26 0 1 "220 V" 1>
  <R R3 1 360 280 15 -26 0 1 "50 Ohm" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <GND * 1 120 330 0 0 0 0>
  <R R1 1 220 190 15 -26 0 1 "R1" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <R R2 1 220 280 15 -26 0 1 "R2" 1 "26.85" 0 "0.0" 0 "0.0" 0 "26.85" 0 "european" 0>
  <.DC DC 1 290 90 0 39 0 0 "26.85" 0 "0.001" 0 "1 pA" 0 "1 uV" 0 "no" 0 "150" 0 "no" 0 "none" 0 "CroutLU" 0>
  <Eqn Eqn1 5 160 110 -34 16 0 0 "R1=100-R2" 1 "yes" 0>
  <.SW SW1 5 470 130 0 64 0 0 "DC" 1 "lin" 1 "R2" 1 "1 Ohm" 1 "99 Ohm" 1 "99" 1>
</Components>
<Wires>
  <120 330 220 330 "" 0 0 0 "">
  <120 280 120 330 "" 0 0 0 "">
  <120 160 120 220 "" 0 0 0 "">
  <120 160 220 160 "" 0 0 0 "">
  <220 220 220 240 "" 0 0 0 "">
  <220 240 220 250 "" 0 0 0 "">
  <220 310 220 330 "" 0 0 0 "">
  <220 240 360 240 "" 0 0 0 "">
  <360 240 360 250 "" 0 0 0 "">
  <220 330 360 330 "" 0 0 0 "">
  <360 310 360 330 "" 0 0 0 "">
  <360 240 360 240 "U2" 320 190 0 "">
</Wires>
<Diagrams>
  <Tab 680 290 300 200 3 #c0c0c0 1 00 1 0 1 1 1 0 1 1 1 0 1 99 315 0 225 "" "" "">
	<"R1" #0000ff 0 3 1 0 0>
	<"R2" #0000ff 0 3 1 0 0>
	<"U2.V" #0000ff 0 3 1 0 0>
  </Tab>
  <Rect 1039 286 261 196 3 #c0c0c0 1 00 1 0 0.2 1 1 -0.1 0.5 1.1 1 -0.1 0.5 1.1 315 0 225 "" "" "">
	<"U2.V" #0000ff 0 3 0 0 0>
  </Rect>
</Diagrams>
<Paintings>
</Paintings>
