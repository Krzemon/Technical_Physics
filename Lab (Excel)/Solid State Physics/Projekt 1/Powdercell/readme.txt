Dear PowderCell user,


we hope that you found this short and uncomplete description of the actual version of PowderCell. It should inform about the most important news or changes of the program. Please consider that we don't like to actualize a log file so that you will find of course 
some small changes which we have forgotten in the current descriprion. This short comment shall enable to use the refinement procedures 
implemented in the actual version 2.1 of PowderCell. Therefore only two structure files and three experimental data files have been compressed. The example files are phase mixtures of anatase und rutile. The fractions are 20:80 (pep20.raw), 15:85 (pep15.raw) and 10:90 (pep10.raw) in mass% (rutile:anatase). 
To calculate the diffractograms please load at first the two structure files anatase.cel and rutile.cel. Please notice that PowderCell enables the fade out of structure as well as powder pattern representation using the buttons characterized by a small light diode. In principle you don't need the structure pictures so that you can switch off the structure representation. In this case the diffraction window will be enlarged. Now activate the main menue "Diffraction" and load a powder pattern (e.g. pep20.raw). Because of the fact that the range of measurement must not be equal to the selected one in the program a message will be given on screen if you like to take the same range for the powder pattern calculation. We recommend to say NO. You can do this later (question of running time)! So the imported diffractogram and the calculated patterns will be displayed. However it is possible to fade out or fade in the difference curve. This you should do using the right menue bar (we assume that you will find the correct button - it represents a difference plot curve. Furthermore a descrotion of the buttons will be shown if the mouse cursor is located over the bar.). 
Now you are ready to the refinement wich can be started using the entry in the main menue but also the last two buttons in the tool bar on the top of the screen (except the "end" button). The first of this two buttons shows an edit window where the refinement parameters can be selected. The last starts the refinement. Please notice that the used algorithm gets problems if the theoretic reflections are broader than the experimental. In our given example this is correct. Furthermore notice that the experiments has been carried out using variable slits (this you will find in the dialog box "Diffraction options"! There also the reflection profiles, the character of preferred orientation given etc. can and must be defined. Please start with the standard setting (Lorenzian, no preferred orientation). At least a small hint: it is possible to change between mass and volume fraction shown on the screen. This must be set in the phase options. Also there the representation options of the measurement can be changed. As standard setting we defined points but you can adapt this for you own imaginations.
The refinement has been set on 3 iteration (but this is variable in the refinement parameters window - left bottom). Now start the refinement. After the first three iterations the difference curve shows a relative good agreement between experiment an refinement. The fraction is 75:25. Using other profile functions (Pseudo-Voigt 1) or preferred orientations: the best agreement results for 77:33. This is quiet possible because the used anatase powder contained also a small part of rest rutile.

In the actual version the calculation range of the reflections has been defined variable: in times of FWHM. We assumed as standard value 15. However this is dependend from the experimental conditions and can be changed also during the refinement procedure if it should be recommended.

The results can be seen using the result screen (contained in the refinement parameter screen).

Please inform us about errors and how we can reproduce these (send us initial data etc.)
Furthermore it would be very nice if you would inform us about the download of the program (gert.nolze@bam.de or w.kraus@bam.de). So we have a good overview about the user and a good argumentation for continuous developments. For the actualization of a reference list we need the name of institution, the departement, city and country. Of course, we are interested in to get some information about your work why you like to use the program etc.

With best regards


G.Nolze and W.Kraus

19.07.99

