!INTERFILE  :=
; use crazy trick to refer to the header file which prevents
; use from having to create a new file (but STIR will refuse
; to read the data from this file of course).
; This is sufficient to act as a template
name of data file := scatter_template.hs
originating system := unknown
!GENERAL DATA :=
!GENERAL IMAGE DATA :=
!type of data := PET
imagedata byte order := LITTLEENDIAN
!PET STUDY (General) :=
!PET data type := Emission
applied corrections := {None}
!number format := float
!number of bytes per pixel := 4
number of dimensions := 4
matrix axis label [4] := segment
!matrix size [4] := 1
matrix axis label [3] := view
!matrix size [3] := 32
matrix axis label [2] := axial coordinate
!matrix size [2] := { 8}
matrix axis label [1] := tangential coordinate
!matrix size [1] := 35
minimum ring difference per segment := { 0}
maximum ring difference per segment := { 0}
Scanner parameters:= 
Scanner type := unknown
Energy resolution := 0.145
Reference energy (in keV) := 511
number of energy windows := 1
energy window lower level[1] := 430
energy window upper level[1] := 610

Number of rings                          := 8
Number of detectors per ring             := 64
Inner ring diameter (cm)                 := 65.6
Average depth of interaction (cm)        := 0.7
Distance between rings (cm)              := 3.25
View offset (degrees)                    := 0
end scanner parameters:=
!END OF INTERFILE :=
