// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2011-2012 Litecoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of // Checkpoint 0 hash == Genesis block hash.
        (         0, uint256("0xc0e3904169011c8e4557ff3af19b1337a4fd576b7936a5bc037f9133f6dc055f"))
        (         1, uint256("0X260a96b25a79f09eec27faadbdc37bd971b1677cd5c5e0630667c94be49038d4"))
        (       100, uint256("0xd38637f07bb9fe3ec58f655f862d4ddee8e284f7dd4975cce9cdb7216dfb729e"))
        (       117, uint256("0x921e449ed0f4040cc77be79799fa1e169ae23285adebf2fc7b8c32e6025309e8"))
       // (         4, uint256("0x4874a8c31eb017cf60df2d38acfbe57ed58863b284bc52854056214da6af4667"))
        //(         5, uint256("0x981ee4705232b56276ab51e972966914d402bc0ee4db0cb8535f15434e1541b0"))
       // (         6, uint256("0xd327553bdad96946715b9728f06afa4181ee15e5e6b06880fa4d2f50fe6f1904"))
      //  (         7, uint256("0x5bea6f961bd8ed766546a8b197d9a8e2549e34342071c06f608a5ddd20dbdf68"))
      //  (         8, uint256("0x64fd2cf35c9c87d807f1c5cf872ffad6b347346177ae203bc176a62c55f0a231"))
      //  (         9, uint256("0x48991f8ba4141abbca60f68478183ff7b17635d2263314752ed74a57ad41aadf"))
      //  (         10, uint256("0xaf65f2182e09963290b3a5a12c912812ebd16318333cdbdcdb6aa304bb89ea9f"))
      //  (         11, uint256("0x527ac32490b36ed13522eb904e5912c0d3581b4a314ce04c85544973c067ba9a"))
     //   (         12, uint256("0x51d3ea174d541384da88c423eeaac0cc0892fee39bc476d42add596c3c08759e"))
      //  (         13, uint256("0x9977bf051201171872f38eb51bd65bc8aa3ba2cbf3f98a94e2481d7a10f912b4"))
     //   (         14, uint256("0xb42aaf49c7f127007518a9542766b7444e2261723cad55fd13ce758cc8ced719"))
      //  (         15, uint256("0x70aac9d5f75a3f5e9cd790523b047128175c71366c71b560854108300b45fac2"))
      //  (         16, uint256("0x71918af3c09fcdcff5760e6d213aeacab86ea368752970c9b85a35a6f2b8344b"))
      //  (         17, uint256("0x27bf388dccc1d4fa57a7b4b582dac789c1b6c4c91f387842848f942aa3c478d0"))
       // (         18, uint256("0xa3d147a9fd6cdea0d16fae29da1ef63f02b5188837b8872747f42e0addbe0d67"))
      //  (         19, uint256("0x59537c0b91f6a30c7fc5fc1f529b0e6bfc0beb53979c686a0f5534b53b9161e1"))
      //  (         20, uint256("0x71bf0711d3150be432c700d91a3e5ad3b2d16239c0d7b4e4e99f59079dc4df15"))
      //  (         21, uint256("0x5526c9fbebcc920824a5d14439ecffd729882a03104101636ddc118e90f0ce8a"))
      //  (         22, uint256("0x37abeb802b3fd36a57d2d678ad38dcf0c3ee2ffdf71ae09d9a93ecb8609ff22a"))
      //  (         23, uint256("0x8b4352556bf3d66cb7528b41f6464cc6d453cc0d15e9ea08e46bbe1546409bc4"))
      //  (         24, uint256("0x0c0b637d88408f75344003bccf7776c0db2649772983b7adbe469b4e38b24b56"))
      //  (         25, uint256("0x6299c08fc1ffcfd045eb96c0624304dbd1ac1c5b4b2d6180a2e54682fba583ef"))
      //  (         26, uint256("0xda39ee46e7dacbbe68843a53a56df361e128ce57cd3351c166a9eac2fe4978d0"))
     //   (         27, uint256("0x19c08e2990fe9ebf8366e3bc3b7559b26dadf5206a058ad457904148e5f193d4"))
     //   (         28, uint256("0x53efb02bbf746aa59b3894ad70b41bded9196a652223ef80f48cb5ff2a86b169"))
     //   (         29, uint256("0x9b1c19f225103d5a096baeecbc64a6fe3db4757ffd6d7c6f914690f88ac6e9ad"))
     //   (         30, uint256("0xe70315d043952cbc0c9fb59e654c13ba1f9706664cf0c06f14d3422c20366fc6"))
      //  (         40, uint256("0xdd30a155587ab68d72f4a0216a405900442f150550277ef3df66cb57c65b2e4d"))
     //   (         50, uint256("0x3a0ea3cce117e6b8f971aa12ab5e0b49495a0b5d8f06ce70593d9b27a0ad7a22"))
      //  (         60, uint256("0x822adc4da8d411c0cd053be7ff2967ccb2368f0fcc8eb73d62296bac14759e8d"))
     //   (         70, uint256("0xb280924e985a479829296c68702b20b3e5cd08e6b98291ca297494e06c9c448c"))
     //   (         80, uint256("0x425f4c22acf8117dfff1b87a9b0b5a2472f45e9f69258928850fc668dbdecfc3"))
     //   (         90, uint256("0xa5cae53fca690905839b70810e9f475ef474562e25967059a53170ca870fbcbd"))
      //  (         100, uint256("0x0f9ac2c7081a0441ed7d96b6ccbf23f35ac4c620e1ee7c8b4a9d36352b1c2533"))
    //    (         110, uint256("0xc6f290e5d5423e427dea963e7ca64fa5e72cc54fdbfcc2cd6bedb2b97e454205"))
     //   (         120, uint256("0x4b6d2513f1ba003345fcac67dbbd4e4c3059c44f16dbbfea098e15e4bcc5d31a"))
     //   (         130, uint256("0xe99900e4066048785c89e56ffb94a395d3ab5baa209fd8403a6cf1204ace09bc"))
     //   (         140, uint256("0xd67dacc6090c2edd834e41724c8bc645c0cf9262fc662295a452058368ccc7e8"))
     //   (         150, uint256("0x8bd69dd2c3d08e02bbcda5c9d536c801b44f46ae7d85d2f8768a74806fce7736"))
     //   (         160, uint256("0x4daa7c5218fc1ce2569f4623900b7f24442ef447674d08d5bd0e1d32a8ea536b"))
     //   (         170, uint256("0xc1d036caa083e3b66e6ec2bc31076e00ede73becd02eb056f7a59dbb9b9f2902"))
      //  (         180, uint256("0x381bf23dee48f17fd176def90115f5d7c2025967de2e02d67c01d123a009a210"))
     //   (         190, uint256("0xa52244d92da1699d40bf9ed5b1c1b6d635d558675e5475c9dd7d19c0a30e1d68"))
      //  (         200, uint256("0x04b2f7a4515801edecc3e0b9bd5ba46e4e3e039f9ec8d025e2528b7959d11e25"))
     //   (         210, uint256("0xe0d9c302f939a00c83f6e9a6adb97f18a25ecfbce0b48eec45daa9163d8e1eb0"))
     //   (         220, uint256("0xd0f7ae09e654563561a807d99932534bebe2c44ef0795c38d083127df98077e7"))
     //   (         230, uint256("0xb0fad651ab87f7b7db550df072123f2b5be44b3f07e7267ac16fc37e63ec2e72"))
     //   (         240, uint256("0xa2976e5390e69fafd54353971d4ea2889e8acc484aa59cee8ad34fcb0ac613b1"))
     //   (         250, uint256("0x335201c5412063f897ec5b5991221925bf9039849ef4fd9ffc572f211c7afe80"))
      //  (         260, uint256("0xab32c020c345cbfe3dd6ee9e4de111cc9b6f7341a175441e3ec61edca83f44d0"))
     //   (         270, uint256("0x8fca2710b00a38ee04a9dbfe8617577d868c350baa28df5b4f95f4cb012115f1"))
     //   (         280, uint256("0x2f383d84f5999225f973d318eb6f4f9122f0b07850ce6a9beddd186ad2435f70"))
     //   (         290, uint256("0xa3f9b88517961869b5b29a9ddaf0928106364d6a682ab44763a561689fa3aaab"))
     //   (         300, uint256("0xb34c5cb883bf87c8e3c49da0109664f42b3f3095be6601bfc5ffb8cd12e0e576"))
     //   (         310, uint256("0x0e7c8bf085354e66852b01f674d16ba699b4dcb9837eb1c881ee6d5cbc4d7a80"))
      //  (         320, uint256("0xdf3d97c67977699bfa0d3247c444cd3735745fb7ebe2212e50b0934e0e1887b2"))
        
        ;

    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (fTestNet) return true; // Testnet has no checkpoints

        MapCheckpoints::const_iterator i = mapCheckpoints.find(nHeight);
        if (i == mapCheckpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        if (fTestNet) return 0;
        return 0;
        return mapCheckpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (fTestNet) return NULL;

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }
}
