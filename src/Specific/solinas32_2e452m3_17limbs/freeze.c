static void freeze(uint32_t out[17], const uint32_t in1[17]) {
  { const uint32_t x31 = in1[16];
  { const uint32_t x32 = in1[15];
  { const uint32_t x30 = in1[14];
  { const uint32_t x28 = in1[13];
  { const uint32_t x26 = in1[12];
  { const uint32_t x24 = in1[11];
  { const uint32_t x22 = in1[10];
  { const uint32_t x20 = in1[9];
  { const uint32_t x18 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x34, uint8_t/*bool*/ x35 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (0x0, Return x2, 0x7fffffd);
  { uint32_t x37, uint8_t/*bool*/ x38 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x35, Return x4, 0x7ffffff);
  { uint32_t x40; uint8_t/*bool*/ x41 = _subborrow_u26(x38, x6, 0x3ffffff, &x40);
  { uint32_t x43, uint8_t/*bool*/ x44 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x41, Return x8, 0x7ffffff);
  { uint32_t x46; uint8_t/*bool*/ x47 = _subborrow_u26(x44, x10, 0x3ffffff, &x46);
  { uint32_t x49, uint8_t/*bool*/ x50 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x47, Return x12, 0x7ffffff);
  { uint32_t x52, uint8_t/*bool*/ x53 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x50, Return x14, 0x7ffffff);
  { uint32_t x55; uint8_t/*bool*/ x56 = _subborrow_u26(x53, x16, 0x3ffffff, &x55);
  { uint32_t x58, uint8_t/*bool*/ x59 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x56, Return x18, 0x7ffffff);
  { uint32_t x61; uint8_t/*bool*/ x62 = _subborrow_u26(x59, x20, 0x3ffffff, &x61);
  { uint32_t x64, uint8_t/*bool*/ x65 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x62, Return x22, 0x7ffffff);
  { uint32_t x67, uint8_t/*bool*/ x68 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x65, Return x24, 0x7ffffff);
  { uint32_t x70; uint8_t/*bool*/ x71 = _subborrow_u26(x68, x26, 0x3ffffff, &x70);
  { uint32_t x73, uint8_t/*bool*/ x74 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x71, Return x28, 0x7ffffff);
  { uint32_t x76; uint8_t/*bool*/ x77 = _subborrow_u26(x74, x30, 0x3ffffff, &x76);
  { uint32_t x79, uint8_t/*bool*/ x80 = Op (Syntax.SubWithGetBorrow 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x77, Return x32, 0x7ffffff);
  { uint32_t x82; uint8_t/*bool*/ x83 = _subborrow_u26(x80, x31, 0x3ffffff, &x82);
  { uint32_t x84 = cmovznz32(x83, 0x0, 0xffffffff);
  { uint32_t x85 = (x84 & 0x7fffffd);
  { uint32_t x87, uint8_t/*bool*/ x88 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (0x0, Return x34, Return x85);
  { uint32_t x89 = (x84 & 0x7ffffff);
  { uint32_t x91, uint8_t/*bool*/ x92 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x88, Return x37, Return x89);
  { uint32_t x93 = (x84 & 0x3ffffff);
  { uint32_t x95; uint8_t/*bool*/ x96 = _addcarryx_u26(x92, x40, x93, &x95);
  { uint32_t x97 = (x84 & 0x7ffffff);
  { uint32_t x99, uint8_t/*bool*/ x100 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x96, Return x43, Return x97);
  { uint32_t x101 = (x84 & 0x3ffffff);
  { uint32_t x103; uint8_t/*bool*/ x104 = _addcarryx_u26(x100, x46, x101, &x103);
  { uint32_t x105 = (x84 & 0x7ffffff);
  { uint32_t x107, uint8_t/*bool*/ x108 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x104, Return x49, Return x105);
  { uint32_t x109 = (x84 & 0x7ffffff);
  { uint32_t x111, uint8_t/*bool*/ x112 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x108, Return x52, Return x109);
  { uint32_t x113 = (x84 & 0x3ffffff);
  { uint32_t x115; uint8_t/*bool*/ x116 = _addcarryx_u26(x112, x55, x113, &x115);
  { uint32_t x117 = (x84 & 0x7ffffff);
  { uint32_t x119, uint8_t/*bool*/ x120 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x116, Return x58, Return x117);
  { uint32_t x121 = (x84 & 0x3ffffff);
  { uint32_t x123; uint8_t/*bool*/ x124 = _addcarryx_u26(x120, x61, x121, &x123);
  { uint32_t x125 = (x84 & 0x7ffffff);
  { uint32_t x127, uint8_t/*bool*/ x128 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x124, Return x64, Return x125);
  { uint32_t x129 = (x84 & 0x7ffffff);
  { uint32_t x131, uint8_t/*bool*/ x132 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x128, Return x67, Return x129);
  { uint32_t x133 = (x84 & 0x3ffffff);
  { uint32_t x135; uint8_t/*bool*/ x136 = _addcarryx_u26(x132, x70, x133, &x135);
  { uint32_t x137 = (x84 & 0x7ffffff);
  { uint32_t x139, uint8_t/*bool*/ x140 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x136, Return x73, Return x137);
  { uint32_t x141 = (x84 & 0x3ffffff);
  { uint32_t x143; uint8_t/*bool*/ x144 = _addcarryx_u26(x140, x76, x141, &x143);
  { uint32_t x145 = (x84 & 0x7ffffff);
  { uint32_t x147, uint8_t/*bool*/ x148 = Op (Syntax.AddWithGetCarry 27 (Syntax.TWord 0) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 0)) (Return x144, Return x79, Return x145);
  { uint32_t x149 = (x84 & 0x3ffffff);
  { uint32_t x151; uint8_t/*bool*/ _ = _addcarryx_u26(x148, x82, x149, &x151);
  out[0] = x87;
  out[1] = x91;
  out[2] = x95;
  out[3] = x99;
  out[4] = x103;
  out[5] = x107;
  out[6] = x111;
  out[7] = x115;
  out[8] = x119;
  out[9] = x123;
  out[10] = x127;
  out[11] = x131;
  out[12] = x135;
  out[13] = x139;
  out[14] = x143;
  out[15] = x147;
  out[16] = x151;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}