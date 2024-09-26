// BITWISE
// 2 PANGKAT

00100110
// cuma ada nol dan satu
// BIT -> DECIMAL ANGKA BIASA
0 0 0 0 0 0 0 1
0 = FALSE & 1 = TRUE
7 6 5 4 3 2 1 0

0 0 0 0 0 0 0 1 -> 2^0 = 1 VALUE DECIMAL NY 1
0 0 0 0 0 0 1 1 -> 2^0 + 2^1 = 1 + 2 = 3
0 0 0 1 0 0 1 0 -> 2^4 + 2^1 = 16 + 2 = 18


0 0 0 0 0 0 0 0 -> false smua -> 0

// DECIMAL TO BIT
30
// CONTEKAN PANGKAT 2
128 64 32 16 8 4 2 1
30 - 16 = 14
0 0 0 1 0 0 0 0
14 - 8 = 6
0 0 0 1 1 0 0 0
6 - 4 = 2
0 0 0 1 1 1 0 0
2 - 2 = 0
0 0 0 1 1 1 1 0 -> 30


17
// CONTEKAN PANGKAT 2
128 64 32 16 8 4 2 1
17 - 16 = 1 -> ANGA TERDEKAT KE 17 TAPI HARUS LEBIH KECIL ATAU SAMA DENGAN
0 0 0 1 0 0 0 0
1 - 1 = 0
0 0 0 1 0 0 0 1 -> 17

4 - 4 = 0
0 0 0 0 0 1 0 0

11001
43210 // CONTEKAN KITA
2^4 + 2^3 + 2^0 = 16 + 8 + 1 = 25

001 -> 1
210


& = AND
| = OR
^ = NOR
<< = SHIFT LEFT
>> = SHIFT RIGHT

AND
RULES UTK JD TRUE -> 22NYA HARUS TRUE
1 = TRUE 0 = FALSE
0 0 0 0 0 0 0 1 -> 1
0 0 0 0 0 0 1 1 -> 3
----------------AND
0 0 0 0 0 0 0 1 -> 1

OR
RULES NY -> SALAH SATU TRUE MAKA TRUE
0 0 0 0 0 0 0 1 -> 1
0 0 0 0 0 0 1 1 -> 3
----------------OR
0 0 0 0 0 0 1 1 -> 3

XOR
RULES NY -> BOOL NY SAMA -> FALSE TP KLO BOOLNY BEDA DIA HASILNY TRUE
01 = 1
10 = 1
11 = 0
00 = 0

0 0 0 0 0 0 0 1 -> 1
0 0 0 0 0 0 1 1 -> 3
----------------XOR
0 0 0 0 0 0 1 0 -> 2


0 0 0 0 0 0 1 1 ASLINYA
<< SHIFT LEFT
0 0 0 0 0 1 1 0 -> SHIFT LEFT SEKALI = 6
0 0 0 0 1 1 0 0 -> SHIFT LEFT dua kali = 12

>> SHIFT RIGHT
0 0 0 0 0 0 0 1 -> SHIFT KANAN SEKALI = 1

-10 -> BINER? GABISAAA

AND &
0 0 0 0 0 1 0 1 = 5
0 0 0 0 0 1 1 1 = 7
0 0 0 0 0 1 0 1 = 5

OR |
0 0 0 0 0 1 0 1 = 5
0 0 0 0 0 1 1 1 = 7
0 0 0 0 0 1 1 1 

0 0 0 0 0 1 0 1 = 5
>> SHIFT RIGHT 2 KALI
0 0 0 0 0 0 0 1 = 1
MAX 8 BIT

0 0 0 1 0 1 0 0


