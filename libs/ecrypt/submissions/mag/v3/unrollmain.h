#define UNROLLMAIN \
ctx->carry ^= ctx->cell[1]; \
if(ctx->cell[2] > ctx->cell[3]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[0] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[0] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[2]; \
if(ctx->cell[3] > ctx->cell[4]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[1] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[1] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[3]; \
if(ctx->cell[4] > ctx->cell[5]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[2] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[2] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[4]; \
if(ctx->cell[5] > ctx->cell[6]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[3] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[3] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[5]; \
if(ctx->cell[6] > ctx->cell[7]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[4] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[4] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[6]; \
if(ctx->cell[7] > ctx->cell[8]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[5] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[5] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[7]; \
if(ctx->cell[8] > ctx->cell[9]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[6] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[6] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[8]; \
if(ctx->cell[9] > ctx->cell[10]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[7] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[7] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[9]; \
if(ctx->cell[10] > ctx->cell[11]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[8] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[8] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[10]; \
if(ctx->cell[11] > ctx->cell[12]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[9] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[9] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[11]; \
if(ctx->cell[12] > ctx->cell[13]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[10] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[10] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[12]; \
if(ctx->cell[13] > ctx->cell[14]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[11] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[11] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[13]; \
if(ctx->cell[14] > ctx->cell[15]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[12] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[12] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[14]; \
if(ctx->cell[15] > ctx->cell[16]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[13] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[13] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[15]; \
if(ctx->cell[16] > ctx->cell[17]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[14] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[14] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[16]; \
if(ctx->cell[17] > ctx->cell[18]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[15] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[15] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[17]; \
if(ctx->cell[18] > ctx->cell[19]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[16] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[16] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[18]; \
if(ctx->cell[19] > ctx->cell[20]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[17] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[17] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[19]; \
if(ctx->cell[20] > ctx->cell[21]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[18] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[18] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[20]; \
if(ctx->cell[21] > ctx->cell[22]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[19] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[19] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[21]; \
if(ctx->cell[22] > ctx->cell[23]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[20] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[20] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[22]; \
if(ctx->cell[23] > ctx->cell[24]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[21] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[21] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[23]; \
if(ctx->cell[24] > ctx->cell[25]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[22] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[22] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[24]; \
if(ctx->cell[25] > ctx->cell[26]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[23] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[23] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[25]; \
if(ctx->cell[26] > ctx->cell[27]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[24] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[24] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[26]; \
if(ctx->cell[27] > ctx->cell[28]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[25] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[25] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[27]; \
if(ctx->cell[28] > ctx->cell[29]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[26] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[26] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[28]; \
if(ctx->cell[29] > ctx->cell[30]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[27] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[27] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[29]; \
if(ctx->cell[30] > ctx->cell[31]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[28] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[28] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[30]; \
if(ctx->cell[31] > ctx->cell[32]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[29] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[29] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[31]; \
if(ctx->cell[32] > ctx->cell[33]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[30] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[30] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[32]; \
if(ctx->cell[33] > ctx->cell[34]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[31] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[31] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[33]; \
if(ctx->cell[34] > ctx->cell[35]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[32] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[32] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[34]; \
if(ctx->cell[35] > ctx->cell[36]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[33] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[33] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[35]; \
if(ctx->cell[36] > ctx->cell[37]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[34] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[34] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[36]; \
if(ctx->cell[37] > ctx->cell[38]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[35] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[35] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[37]; \
if(ctx->cell[38] > ctx->cell[39]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[36] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[36] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[38]; \
if(ctx->cell[39] > ctx->cell[40]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[37] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[37] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[39]; \
if(ctx->cell[40] > ctx->cell[41]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[38] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[38] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[40]; \
if(ctx->cell[41] > ctx->cell[42]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[39] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[39] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[41]; \
if(ctx->cell[42] > ctx->cell[43]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[40] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[40] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[42]; \
if(ctx->cell[43] > ctx->cell[44]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[41] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[41] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[43]; \
if(ctx->cell[44] > ctx->cell[45]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[42] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[42] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[44]; \
if(ctx->cell[45] > ctx->cell[46]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[43] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[43] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[45]; \
if(ctx->cell[46] > ctx->cell[47]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[44] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[44] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[46]; \
if(ctx->cell[47] > ctx->cell[48]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[45] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[45] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[47]; \
if(ctx->cell[48] > ctx->cell[49]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[46] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[46] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[48]; \
if(ctx->cell[49] > ctx->cell[50]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[47] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[47] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[49]; \
if(ctx->cell[50] > ctx->cell[51]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[48] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[48] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[50]; \
if(ctx->cell[51] > ctx->cell[52]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[49] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[49] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[51]; \
if(ctx->cell[52] > ctx->cell[53]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[50] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[50] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[52]; \
if(ctx->cell[53] > ctx->cell[54]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[51] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[51] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[53]; \
if(ctx->cell[54] > ctx->cell[55]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[52] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[52] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[54]; \
if(ctx->cell[55] > ctx->cell[56]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[53] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[53] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[55]; \
if(ctx->cell[56] > ctx->cell[57]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[54] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[54] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[56]; \
if(ctx->cell[57] > ctx->cell[58]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[55] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[55] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[57]; \
if(ctx->cell[58] > ctx->cell[59]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[56] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[56] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[58]; \
if(ctx->cell[59] > ctx->cell[60]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[57] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[57] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[59]; \
if(ctx->cell[60] > ctx->cell[61]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[58] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[58] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[60]; \
if(ctx->cell[61] > ctx->cell[62]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[59] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[59] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[61]; \
if(ctx->cell[62] > ctx->cell[63]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[60] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[60] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[62]; \
if(ctx->cell[63] > ctx->cell[64]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[61] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[61] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[63]; \
if(ctx->cell[64] > ctx->cell[65]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[62] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[62] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[64]; \
if(ctx->cell[65] > ctx->cell[66]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[63] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[63] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[65]; \
if(ctx->cell[66] > ctx->cell[67]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[64] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[64] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[66]; \
if(ctx->cell[67] > ctx->cell[68]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[65] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[65] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[67]; \
if(ctx->cell[68] > ctx->cell[69]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[66] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[66] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[68]; \
if(ctx->cell[69] > ctx->cell[70]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[67] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[67] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[69]; \
if(ctx->cell[70] > ctx->cell[71]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[68] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[68] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[70]; \
if(ctx->cell[71] > ctx->cell[72]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[69] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[69] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[71]; \
if(ctx->cell[72] > ctx->cell[73]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[70] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[70] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[72]; \
if(ctx->cell[73] > ctx->cell[74]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[71] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[71] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[73]; \
if(ctx->cell[74] > ctx->cell[75]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[72] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[72] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[74]; \
if(ctx->cell[75] > ctx->cell[76]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[73] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[73] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[75]; \
if(ctx->cell[76] > ctx->cell[77]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[74] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[74] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[76]; \
if(ctx->cell[77] > ctx->cell[78]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[75] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[75] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[77]; \
if(ctx->cell[78] > ctx->cell[79]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[76] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[76] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[78]; \
if(ctx->cell[79] > ctx->cell[80]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[77] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[77] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[79]; \
if(ctx->cell[80] > ctx->cell[81]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[78] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[78] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[80]; \
if(ctx->cell[81] > ctx->cell[82]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[79] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[79] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[81]; \
if(ctx->cell[82] > ctx->cell[83]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[80] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[80] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[82]; \
if(ctx->cell[83] > ctx->cell[84]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[81] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[81] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[83]; \
if(ctx->cell[84] > ctx->cell[85]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[82] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[82] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[84]; \
if(ctx->cell[85] > ctx->cell[86]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[83] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[83] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[85]; \
if(ctx->cell[86] > ctx->cell[87]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[84] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[84] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[86]; \
if(ctx->cell[87] > ctx->cell[88]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[85] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[85] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[87]; \
if(ctx->cell[88] > ctx->cell[89]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[86] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[86] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[88]; \
if(ctx->cell[89] > ctx->cell[90]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[87] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[87] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[89]; \
if(ctx->cell[90] > ctx->cell[91]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[88] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[88] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[90]; \
if(ctx->cell[91] > ctx->cell[92]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[89] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[89] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[91]; \
if(ctx->cell[92] > ctx->cell[93]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[90] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[90] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[92]; \
if(ctx->cell[93] > ctx->cell[94]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[91] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[91] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[93]; \
if(ctx->cell[94] > ctx->cell[95]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[92] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[92] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[94]; \
if(ctx->cell[95] > ctx->cell[96]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[93] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[93] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[95]; \
if(ctx->cell[96] > ctx->cell[97]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[94] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[94] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[96]; \
if(ctx->cell[97] > ctx->cell[98]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[95] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[95] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[97]; \
if(ctx->cell[98] > ctx->cell[99]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[96] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[96] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[98]; \
if(ctx->cell[99] > ctx->cell[100]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[97] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[97] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[99]; \
if(ctx->cell[100] > ctx->cell[101]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[98] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[98] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[100]; \
if(ctx->cell[101] > ctx->cell[102]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[99] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[99] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[101]; \
if(ctx->cell[102] > ctx->cell[103]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[100] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[100] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[102]; \
if(ctx->cell[103] > ctx->cell[104]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[101] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[101] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[103]; \
if(ctx->cell[104] > ctx->cell[105]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[102] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[102] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[104]; \
if(ctx->cell[105] > ctx->cell[106]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[103] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[103] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[105]; \
if(ctx->cell[106] > ctx->cell[107]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[104] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[104] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[106]; \
if(ctx->cell[107] > ctx->cell[108]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[105] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[105] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[107]; \
if(ctx->cell[108] > ctx->cell[109]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[106] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[106] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[108]; \
if(ctx->cell[109] > ctx->cell[110]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[107] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[107] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[109]; \
if(ctx->cell[110] > ctx->cell[111]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[108] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[108] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[110]; \
if(ctx->cell[111] > ctx->cell[112]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[109] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[109] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[111]; \
if(ctx->cell[112] > ctx->cell[113]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[110] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[110] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[112]; \
if(ctx->cell[113] > ctx->cell[114]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[111] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[111] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[113]; \
if(ctx->cell[114] > ctx->cell[115]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[112] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[112] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[114]; \
if(ctx->cell[115] > ctx->cell[116]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[113] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[113] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[115]; \
if(ctx->cell[116] > ctx->cell[117]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[114] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[114] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[116]; \
if(ctx->cell[117] > ctx->cell[118]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[115] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[115] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[117]; \
if(ctx->cell[118] > ctx->cell[119]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[116] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[116] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[118]; \
if(ctx->cell[119] > ctx->cell[120]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[117] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[117] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[119]; \
if(ctx->cell[120] > ctx->cell[121]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[118] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[118] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[120]; \
if(ctx->cell[121] > ctx->cell[122]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[119] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[119] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[121]; \
if(ctx->cell[122] > ctx->cell[123]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[120] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[120] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[122]; \
if(ctx->cell[123] > ctx->cell[124]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[121] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[121] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[123]; \
if(ctx->cell[124] > ctx->cell[125]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[122] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[122] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[124]; \
if(ctx->cell[125] > ctx->cell[126]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[123] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[123] ^ ctx->mask[3]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[125]; \
if(ctx->cell[126] > ctx->cell[127]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[124] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[124] ^ ctx->mask[0]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[126]; \
if(ctx->cell[127] > ctx->cell[0]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[125] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[125] ^ ctx->mask[1]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[127]; \
if(ctx->cell[0] > ctx->cell[1]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[126] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[126] ^ ctx->mask[2]; \
input += 8, output += 8; \
ctx->carry ^= ctx->cell[0]; \
if(ctx->cell[1] > ctx->cell[2]) \
 ctx->carry = (~ctx->carry); \
ctx->cell[127] ^= ctx->carry; \
((u64*)output)[0] = ((u64*)input)[0] ^ ctx->cell[127] ^ ctx->mask[3]; \
input += 8, output += 8;

