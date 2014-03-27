//
//  MagicNumbers.h
//  JFresh
//
//  Created by Christian on 12/27/13.
//  Copyright (c) 2013 Christian Daley. All rights reserved.
//

#ifndef JFresh_MagicNumbers_h
#define JFresh_MagicNumbers_h

#include  <stdint.h>

typedef uint64_t MagicNumber;

static const MagicNumber magicNumbersRook[64] = {
    0x0880008040012050ULL, 0x0040100220004000ULL, 0x0080200080500008ULL, 0x0080100006800800ULL,
    0x0a00083002002075ULL, 0x0200900200040048ULL, 0x8300041900208200ULL, 0x0080005100002480ULL,
    0x09008000c00280a2ULL, 0x0000402001401001ULL, 0x8180802002811000ULL, 0x4005001000a10308ULL,
    0x100a001020a80600ULL, 0x4200800400020080ULL, 0x0002000502000804ULL, 0x0808800100014180ULL,
    0x0010208010400080ULL, 0x0030004040002004ULL, 0x9860410051002000ULL, 0x00a2808010000802ULL,
    0x040080800c000801ULL, 0x0004808004010200ULL, 0xa620040010110208ULL, 0x0009020000508403ULL,
    0x8203400880028020ULL, 0x0002200080804000ULL, 0x1010a00100401100ULL, 0x0010001080800800ULL,
    0x0082002200080410ULL, 0xa000020080040080ULL, 0xc220040101000200ULL, 0x4000110200009054ULL,
    0x0000204000800482ULL, 0x0211804000802000ULL, 0x4582100080806000ULL, 0x010422004200100aULL,
    0x0041802800802401ULL, 0x4020801400800a00ULL, 0x000200010200280cULL, 0x0002048112000044ULL,
    0x8040842140008000ULL, 0x0082200150004001ULL, 0x0090002000808010ULL, 0x000010000d010020ULL,
    0x2c00050018010010ULL, 0x3114000201004040ULL, 0x8808030802040010ULL, 0x10000408b0420005ULL,
    0xc008400080023680ULL, 0x6000810030400100ULL, 0x0000100020008080ULL, 0x000d008810002100ULL,
    0x0200040080080080ULL, 0x8002020004008080ULL, 0x1408821815902400ULL, 0x0020040128508600ULL,
    0x0005801100420022ULL, 0x820a620100c0801aULL, 0x0200182000750041ULL, 0x0011005000220409ULL,
    0x818100500800040bULL, 0x0221000882540011ULL, 0x8001000402004083ULL, 0x00220040812c0102ULL};

static const MagicNumber magicNumbersBishop[64] = {
    0x0040010a02020820ULL, 0x00a0011403054400ULL, 0x2010ac0480a10800ULL, 0x00080a0020002000ULL,
    0x00c2021000805040ULL, 0x1002020a200a8080ULL, 0x0401041004040202ULL, 0x0000440208022a20ULL,
    0x208088588801840aULL, 0x0102200886334040ULL, 0x00000808012d2008ULL, 0xc000082240420000ULL,
    0x2814420210088800ULL, 0x0018024820042004ULL, 0x0402c212010c4028ULL, 0x800000c124012000ULL,
    0x0014000808900400ULL, 0x841800200e0410c0ULL, 0x8050058204041224ULL, 0x0802102022004009ULL,
    0x6008102501401100ULL, 0x0302000101012100ULL, 0x0000800404011800ULL, 0x210608810080a400ULL,
    0x402004040829c800ULL, 0x00012100040c0404ULL, 0x2141920450040192ULL, 0xc90108000c024030ULL,
    0x0001840002802001ULL, 0x001040800500a000ULL, 0x0082022204008200ULL, 0x00110044290402a8ULL,
    0x2028080d22082010ULL, 0x0004022100020401ULL, 0x5000209001081021ULL, 0x6140180800220a00ULL,
    0x1820058400050410ULL, 0x0020082840008048ULL, 0x40881a01d0040534ULL, 0x000a02890a020040ULL,
    0x01880c028800a002ULL, 0x0002829048081002ULL, 0xa002004208010180ULL, 0x1000612011000800ULL,
    0x0800080100401404ULL, 0x1081021186018100ULL, 0x0842500400800100ULL, 0x0811080600802040ULL,
    0x2058820120209880ULL, 0x44020100d8040012ULL, 0x0001010861100004ULL, 0x8004000020980004ULL,
    0x42230190120e0120ULL, 0x08120810010a0088ULL, 0x012024501c831022ULL, 0x0418080800a02800ULL,
    0x82084201841d4000ULL, 0x0024444400ac1004ULL, 0x0000080024020818ULL, 0x12800000020a0204ULL,
    0x5000020040282a00ULL, 0x4010044002140100ULL, 0x4440400212840109ULL, 0x2408012104040084ULL};

static const unsigned int magicBitshiftsRook[64] = {
    52, 53, 53, 53, 53, 53, 53, 52,
    53, 54, 54, 54, 54, 54, 54, 53,
    53, 54, 54, 54, 54, 54, 54, 53,
    53, 54, 54, 54, 54, 54, 54, 53,
    53, 54, 54, 54, 54, 54, 54, 53,
    53, 54, 54, 54, 54, 54, 54, 53,
    53, 54, 54, 54, 54, 54, 54, 53,
    52, 53, 53, 53, 53, 53, 53, 52};

static const unsigned int magicBitshiftsBishop[64] = {
    58, 59, 59, 59, 59, 59, 59, 58,
    59, 59, 59, 59, 59, 59, 59, 59,
    59, 59, 57, 57, 57, 57, 59, 59,
    59, 59, 57, 55, 55, 57, 59, 59,
    59, 59, 57, 55, 55, 57, 59, 59,
    59, 59, 57, 57, 57, 57, 59, 59,
    59, 59, 59, 59, 59, 59, 59, 59,
    58, 59, 59, 59, 59, 59, 59, 58};

#endif