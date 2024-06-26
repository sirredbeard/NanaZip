﻿/*
 * PROJECT:   NanaZip
 * FILE:      NanaZip.Codecs.h
 * PURPOSE:   Definition for NanaZip.Codecs
 *
 * LICENSE:   The MIT License
 *
 * MAINTAINER: MouriNaruto (Kenji.Mouri@outlook.com)
 */

#ifndef NANAZIP_CODECS
#define NANAZIP_CODECS

#include <Windows.h>

#include <NanaZip.Specification.SevenZip.h>

/**
 * Definition of NanaZip interface constants
 * 
 * I had mentioned one of the reasons that I call this project NanaZip because
 * Nana is the romaji of なな which means seven in Japanese. But I had not
 * mentioned the way I confirm that: I had recalled one of the Japanese VTubers
 * called Kagura Nana when I waiting my elder sister for dinner at Taiyanggong
 * subway station, Beijing. For playing more puns, NanaZip uses the K7 prefix in
 * some definitions. (K -> Kagura, 7 -> Nana)
 */

namespace NanaZip::Codecs
{
    /**
     * @brief The ID base value of NanaZip Hash Provider.
     * @remark 0x4823374B is big-endian representation of K7#H (H -> Hash)
     */
    const UINT64 HashProviderIdBase = 0x4823374B00000000;
}

namespace NanaZip::Codecs::Hash
{
    IHasher* CreateBlake3();
    IHasher* CreateSm3();
    IHasher* CreateMd2();
    IHasher* CreateAich();
    IHasher* CreateBlake2b();
    IHasher* CreateEd2k();
    IHasher* CreateEdonR224();
    IHasher* CreateEdonR256();
    IHasher* CreateEdonR384();
    IHasher* CreateEdonR512();
    IHasher* CreateGost94();
    IHasher* CreateGost94CryptoPro();
    IHasher* CreateGost12256();
    IHasher* CreateGost12512();
    IHasher* CreateHas160();
    IHasher* CreateMd4();
    IHasher* CreateMd5();
    IHasher* CreateRipemd160();
    IHasher* CreateSha224();
    IHasher* CreateSha384();
    IHasher* CreateSha512();
    IHasher* CreateSha3224();
    IHasher* CreateSha3256();
    IHasher* CreateSha3384();
    IHasher* CreateSha3512();
    IHasher* CreateSnefru128();
    IHasher* CreateSnefru256();
    IHasher* CreateTiger();
    IHasher* CreateTiger2();
    IHasher* CreateTorrent();
    IHasher* CreateTth();
    IHasher* CreateWhirlpool();
    IHasher* CreateXxh32();
    IHasher* CreateXxh64();
    IHasher* CreateXxh364();
    IHasher* CreateXxh3128();
}

#endif // !NANAZIP_CODECS
