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
        (       200, uint256("0xd0bbb2c917e58ab283e28f58b5229c185785d41318c0a59d59cdc4a04fa3829c"))
        (       208, uint256("0x891177b469e50bb1bfb94ce4a4383393201769c2303aa398332b4c1d2810a2a6"))
        (       220, uint256("0x0df46f1fa3686f35f27de87978a44f8902e63e2c91a82a3820c8084a6b364d4f"))
        (       282, uint256("0x1ea98e024740bab41b31519e2ac22da40c655b5961d9f9cc91ab8219365d5fb4"))
        (       300, uint256("0x1b69378f6e880d2b67bdbc239c3241088060751fd891bccf37be9f9338b7113e"))
        (       309, uint256("0x0907a383e4cf846a83fcb7caaa798d59c2e675255f97a27bb7118ec8604aeccc"))
        (       339, uint256("0x4628b2968d84a97d772df4fe2f431598135069783895fee64aa9599e9f5aeca0"))
        (       341, uint256("0xf5774face1962526d57ede2e2b88245ea1fce4d36d675d52e3e86d98835f43ac"))
        (       350, uint256("0x0f2ba80341baa16e91c4fc270efb39f292ca00c6a492bc9fce429b91330d8db6"))
        (       853, uint256("0xc13ec9de297007f89c2652d5d6a9cad6bd6189f5e956d093c740d61d4ffff2f6"))
        (       855, uint256("0xcd9e5ff2db4bfed5507f09dccd44d2a5a0af311cdcdb0d1b0099d2cd650c66a7"))
        (       860, uint256("0xd0d0eb71418dbba125e868ac4e6e643828d0a1c24cd96e8fad92d5f61fb5ea5d"))
        (       930, uint256("0xa2ae91102475f89943cfc7ee8555d5f85c301f02d9c0306d2d97ff4d31c347ab"))
        (       980, uint256("0x185cfdb4cb81b7c169b95d94cf2c67382eb94246d252b5c9193715a7909b5ecf"))
        (       997, uint256("0x1102219df9321e542b3b58467c9550fafe23d14659eb317bcee19ca7b6dd4f9a"))
        (      1000, uint256("0xc6cfc608857f2cad30297a4df4da2c49c13180ae5389f22f7b6f0e512a5951df"))
        (      1010, uint256("0x7dfef939edb33cc8303cbd9e12f580340689bb19584b1576bba5d1c8e9ae7b69"))
        (      1181, uint256("0xe5220a31d2ba1b365d45024821034e3817937e5380496ec2477eea2c8f918d23"))
        (      1193, uint256("0x28da0fa3c5ac49fa9585ebc88b5d8b5d179ce99208b64ac41c545c2d6bf74e0e"))
        (      1200, uint256("0x759955475a71809f2761dbfab526c3533613398b31b361308d10fdeba509142f"))
        (      1312, uint256("0xf064ac9935b2b93e004b1a8049d3513b8dc0ff581b679e6d99b5604ab6b96d60"))
        (      1371, uint256("0x724be42e8f563b34257361f2a997f9427bfe540d6228d6700b17a30a38926a0c"))
        (      1400, uint256("0x32ae20555bac32e0f20324d9ce6942e52e81bc42546f57904e990fbb00666ee8"))
        (      1420, uint256("0x7b9582bb8722ac965fd7cc3ce2bd378f2213350a97a35c8853107abb8b48ebb5"))
        (      1433, uint256("0x385a4f6a9b37e3392e51f6a661fadb78a85a7da8545eed14a569e5c43f9e1d56"))
        (      1442, uint256("0x6f3ae205ef2370b3e04480f447d2f3f029f27165852755c18db31dd0778b5b63"))
        (      1443, uint256("0x8f6cf35e010797f563e084963d5e6a3a2316fc5132d9ddbd578f402ecd965219"))
        (      1600, uint256("0xb621a2d4e5756d345ae3660b23b33ce5aad1570369e6297ab8599fc86960200b"))
        (      1610, uint256("0x71f1a33a4cddd99ec4476c1459a179b25f0a83e5eaf4799b7bc116a46e69b134"))
        (      1616, uint256("0x0b2577be9e46e21496f86e0012e341bf9c868d44d6d75058208c2b24c2ae7441"))
        (      1632, uint256("0x84408326a8df6dc61b9cef19689c4db8d18b1c3c65e32da5766c96758bd76468"))
        (      1658, uint256("0x70dd4a23941f275181d5fa888e85f7ee4401fbd252e2d24d50bd2f8939bed4ff"))
        (      1700, uint256("0x37d1ff5420078aad9d05af0a939cf8b8a74c76f2e21e738a3e7e510617663d26"))
        (      1750, uint256("0xa042cc49d3fb8caf812e4129285be61fc0a6d335c2d16c4f81f32f5293094e5c"))
        (      1753, uint256("0xbdcc442640dcbe084f912f9195813b4844dfe977a55ddc9fc3e369f583de2908"))
        (      1973, uint256("0x4c422e99ec2c8df17fddf2bf69b76407c3ab7ab0e4556a76cd495a05b8bb93a2"))
        (      1999, uint256("0x718793485a0cfc4b845cf158692d45ca804d491dc59ca45f1fc3dcfd5dd87078"))
        (      2100, uint256("0x4e9791fdde6dc6b2a1d8e1d516cd7789cee7664b3875b58e997fd780600a6bb7"))
        (      2155, uint256("0x63d5905c7f34be66a3cd3110aca2b10beb9db197d33f1cd9e003eddc6d9d49b9"))
        (      2200, uint256("0xb6ee868cbcbb2d4256de5e6a96d43145fb30e7abebb1dea44d632ff0434b8465"))
        (      2212, uint256("0xc3c4e4f7f803c0bd4f7f3f527c788d1db4635998fbcf11c67ed1733e915e1ab9"))
        (      2220, uint256("0x2e18767eddfaad889fb7379306c23fd2c266f072c537b751bb555d8cf5383453"))
        (      2230, uint256("0x1d8f7e4e538ddc4c286bb5bba92efd5b125b2aade726d7175c5c738d2fd3a1f6"))
        (      2240, uint256("0xbc7e98bc5e5ee2a418e4cfb0f3be1292680d608c2fb5aad0b0391ca9d612f46f"))
        (      2244, uint256("0x2bcacdb962180c1dd3ba7d2c7f9cec4963f2e923b603592510b70dd35479c7a5"))
        (      2339, uint256("0xf51c28e4ccbc4901329ef40b85b867a30a03c449114deb1e5ed67b7080f70085"))
        (      2430, uint256("0x45925bdd5cc11cee2dc504924fa8a9c584b237a3318f45a75d9b3935072481ec"))
        (      2500, uint256("0xafc0a9f8a833633ce5e45ad7309fb01cc1977b6ad544336f49e870bda39bc001"))
        (      2501, uint256("0x7c3932213a15749021633016242a776a17068f1b94256342afea9b79735ed317"))
        (      2503, uint256("0x644d344d9dc531a1145ebd8b4eeeb867d7ef332ba4dc147a97ec17bbe2246cf2"))
        (      2509, uint256("0x886d0715cada44b194458051c43a170a2c8e595a00e4bb4da2ec1f1eabe88de5"))
        (      2600, uint256("0xcce96d50582c7f88382bed634cbea56d79e88b345f04bf1caf6bde79c584f90a"))
        (      2649, uint256("0x463fb8c8788323afedae949605d51af2b6531b1a61727c44a85188d0296b75a1"))
        (      2848, uint256("0x23cfab738f9e2a169c6dcc28b574ea3966ae77c46fb84b853cbb5a1f71f85a25"))
        (      2883, uint256("0x6df234082a093c2b3b3c91e1aa839d862d7a4ad23164f276d91ebcc396e6a48d"))
        (      2930, uint256("0x82f5eb535df5a5b8842882a3e94f67a9c6e2b8b26990cddf54f4f10bfc3e86de"))
        (      3000, uint256("0x27efe5180fd99a325b03dae6b99764ac90fc2b8151289e84f462ce4c94f05b16"))
        (      3100, uint256("0xbe54d6dd28242d5fe96d63e8e6bc495ba6668bfead41a42163c47fe1efb2d73e"))
        (      3200, uint256("0x07d1e7efb42b5bc3dc1b2d94c9316bbeb0f0dab3c3d83346e826113da6885a56"))
        (      3300, uint256("0x010677544a3b807f09e91a05a63c86a49400ad6a1815d80758c8e85247c5833a"))
        (      3421, uint256("0xd87f8c9f195fa072b4c007fcdc4e1495522266a5473d36fe201cff4bb3251e2a"))
        (      3425, uint256("0xb4dba5f58948c9df95ca60589d1984f5d5c7361d59dc3aa9b428733acd5e4d94"))
        (      3440, uint256("0x913a97c424ebe5fdfaecbe25e98904f91f0c210001cb70f5fc7d434e4730a723"))
        (      3504, uint256("0x87ed6a12f5ddb90f204ff08923f6dab31e705c5fa3f219670ba52ac230d15d3b"))
        (      3582, uint256("0x08ec4b26df9e2bfe9df1b391b99408f217590101c3ae392d3bb7092dde42f024"))
        (      3688, uint256("0xe3dfcf3356a00a578e93a6d75f4692dc23d5a029d18e583cf82a11187be78c9a"))
        (      3691, uint256("0xb08c5438155f4e7076d53dd9334e8978b3728c1b84b8b8d9c7b8b3c55678f805"))
        (      3694, uint256("0x84f99b7b1f18ca906f77de8c7b855738a17d3a4df56a26d48e3a41bfcd6206d7"))
        (      3700, uint256("0x9c16a7fbe4f09345e07247dbfafa635fee25e6107ffa564a06e95eab78a73a97"))
        (      3902, uint256("0x5570b331d27ec219b500edde73acd785be33ef00246a615dd1ae983660a43d0f"))
        (      3982, uint256("0x195cdeaea172e744ea312a498415804e0be348ab5dd81441759f20a1692e0d60"))
        (      4000, uint256("0xa34c4d20d164c813f65d1ed3c56eb8d662843f474f80036c3e7b5fe73d4edb02"))
        (      4125, uint256("0xd06d07e00ee3de01fe18589110eed6e6912e081d77099d22ced01a50f4274d6b"))
        (      4220, uint256("0xccbc09b4f876af4130f9a3683a9307fcb7e2473d9a648808516dc9b2050873b6"))
        (      4254, uint256("0x23c0e9edca7c32d61563a93db89ec0aa96c2aca6a82f99743f40e67778a0181b"))
        (      4290, uint256("0xc23a220c068bc9aaa6104dd8e598f73ba38067c0c1976b2057c01f85d050d7ac"))
        (      4559, uint256("0x0529e89cf8a353bf0aa3528a1a7707fc77c2b4be277794fdead7dfc079e06f1a"))
        (      4561, uint256("0x6e85f408a4e75277244d744ce6ef7d56b6d3500dd6d1aa84b25dea11623e21ac"))
        (      4632, uint256("0x61e59bb44c115853d5734c2180526a4955472ca3b11038429dcb770a6ede1193"))
        (      4640, uint256("0x10be637c6f21eb06e9a7a34c9bfb2925f4c5eca6ecfa731ea1466baf71a84262"))
        (      4770, uint256("0xe1848ff64d383bd0210df19911cc8494b5e1624eba4eefe74247793d4051a0b8"))
        (      4807, uint256("0x97767f1a519c5586d92898aa9a61c10ba547bee7055b08554e51ed158d88c17e"))
        (      4834, uint256("0x3a96894ee6f6cd8b3b92bb91f9ee83a970c1dc4a86ec613fdd8cc6c083fce1a9"))
        (      5000, uint256("0xcf690c54df91a51cbced4a65e6681c01348d7fae2deefb40c6e1eb89160c9911"))
        (      5032, uint256("0x0dcc0f8daef70bb4b73e40eb1b864380cf0f8cce03b975eebc6138b7a913036f"))
        (      5068, uint256("0xc5d4e21ebeae901112f9982119b02f5b3ad75e2e2c90e2700fd846d13a0b24ff"))
        (      5159, uint256("0x067e8645f851c2efade6bc5b22b506bd4db3a2716eb013b368d29f6aedeecbdc"))
        (      5204, uint256("0x3805fe94d5529b3f4fb0168f7f39904d2c7aa4ff0d03620a3c37f91d2087b8e0"))
        (      5239, uint256("0xeef255c90e67bbab62dc624c3757a91e0ccdf0a05746f30d68ca78ccfcf9ce87"))
        (      5282, uint256("0x683a849ce7d0c65396c8556610d7fe1b487c9567d169cd21a2ee277b32e29880"))
        (      5428, uint256("0x3cd69e157366566a8041c6cbaba1ad71844e18484245ae7973b1f77c3877a1b8"))
        (      5482, uint256("0xf9ba03696a903707a4865507645c7b4db146453e989a3ca4ab58eebb8c1ebda0"))
        (      5585, uint256("0xe7cb9e6d8e2234a5bb99d900078fa3f3a05015135812c2becd0357b71c5e7bc2"))
        (      5600, uint256("0xfdbb9c36c057de7bf6f968955e37f5dbe40c6d11a611d0c8d00d512f4029475a"))
        (      6000, uint256("0xa59b87577940b886b1ad3a0f611d9140cb1987ae67f965a2058b76017d616669"))
        (      6130, uint256("0xff0e656fd8448e2156a18622f2947ce830d13b71f5a3f52a5088ee40b138398a"))
        (      6421, uint256("0xc68e7befcba00997f679cc004a4f472bd5e4c24b5f59fff57d566ff03ede9024"))
        (      6877, uint256("0xe245c40a05eea312d19bc4b1a898c9cab11c4a486f3b2ea4675f84fdd3e47f22"))
        (      7000, uint256("0xa1fe5a075c35127372889d449560e9a3cc4ac78c353128545357027623e420a3"))
        (      7066, uint256("0x7d341a9eb4248b697b6e712e7d62ee8f8532c4f66752ce2e40741191feff7aef"))
        (      7396, uint256("0x767a3fe123bc82977b732eff326985dd3819103ade3b50706f90926bdb52a190"))
        (      7569, uint256("0xa079ed6f7f683435b126e5b4816076928dccbdc113228b4fd151434540088800"))
        (      7641, uint256("0x4d27c6e4ec5b157d6684a6f7c7a555c4e515df560550fa9b794414eaf87e2713"))
        (      7734, uint256("0x4986f38c35159a1b355fd6d91dfb95558b98c0519474d853b9173b392f5742d0"))
        (      8024, uint256("0x835664dcc340da2efb54276e8c77c5d4673983bc960ad1e64750fa1d8ac8a188"))
        (      8405, uint256("0x7db8f2727c1b4cb654af7ae82a15a3a4b3c7702a644940b2a07bd7f7b6d3e49b"))
        (      8523, uint256("0xf7a9b54f487148f5ff810d0f3c2cd0dd8ed0f3e88a167da7bec3448bc0e55807"))
        (      8742, uint256("0x30a0fea6c1bdfffcd4dfe1aee1632c3724e75983e773f88b507f8402cb7fd093"))
        (      8878, uint256("0x5504369091ebe1da9f29f8501f11678e039ae8333c46f05fd4da07b4bd968d26"))
        (      9472, uint256("0xcdb08ffe2cd1a59804f11ab124ae5c5a2cc0fcb82f4dfe38074cfcec69b40e6e"))
        (      9498, uint256("0xca4c407adc3b10d5998acf24ff15fff31a669108bd268e54f42c2478b42b0dba"))
        (      9701, uint256("0x4cf489f227d2cafe7218fee685b0f90c83eb5fe303cd3219e4dc0d860c4766a8"))
        (      9823, uint256("0x8d30bc8c92fb86d4d3e075060e542cde6d8941e869e7e257275a78b437e07a64"))
        (      9875, uint256("0xffdefd2fdf38e640e2510e3d435228acce85d4d6548d732e059e75c6c39b7a8a"))
        (     10000, uint256("0xa688b508cac6b7596ab8f06fc9a40e1a80ccb61644fac02dd03eb8e0a14a37f5"))
        (     10085, uint256("0x16bfbba659dcda27628b5c6840d28709986098afbc04e8c864339c30f7497256"))
        (     10166, uint256("0x378771f5e0e66832eda48217254f416aaf513e5ba6301f9c60b2a62fa69fc636"))
        (     10362, uint256("0x542da45bf21930770174c2141c0f261fef14da7350568cc02d52507fe1463a6a"))
        (     10475, uint256("0xb6298d737da6f3c62e7d1908e906e83c655800f6a9fdf0ec8ee06aac9054201d"))
        (     10675, uint256("0xa8b9e4b6031316fad5a47cd50f663c93e24c11c83906439b4ee7d7bd5bab3abc"))
        (     10676, uint256("0xb13d749d1eea734458f0fc43bab7085eef005fd302370bf20e9cf700d68aa2f3"))
        (     10754, uint256("0xaa0e8469cc505b4b10c66502fcc8ef1b5398ace5faff47dd9e6b72348dcb02ed"))
        (     10844, uint256("0x3ee2c10ee946e48dcb0a9ee8bc1cf8b49a7b13c561446002cd3a5127d5f8f559"))
        (     10908, uint256("0x1a2392c4a2f679395683269b6699170edddeadc55cbeaa9bd02cd04dc0598f36"))
        (     11293, uint256("0x9cbb5100119b1b493911086cd6d0996be62df2355bed7f793ccc392817276c3a"))
        (     11377, uint256("0x64cc579a9f4b70aaa17d272e7a27490619daea44fa2c7c7ca13d3ac020fc1da4"))
        (     11456, uint256("0xe0a8d70262b2be9b348e5595bd09b5c3cde4bdc94bfdd7e6acd2daa1e2d8e38a"))
        (     11551, uint256("0xf0269d1b5dbcf53d97a399c3ffdf357907072f08d95903f4a788b3cdeae37af9"))
        (     11893, uint256("0xe0178b261f5c191d191d0a77a3ae5c65d90898d611a4ba5082f53b6ce717c61a"))
        (     12126, uint256("0xf41f3426d4e292b04bf5a691378c4820cde4cc894da72830c46a66648851bbcd"))
        (     12362, uint256("0xba94e29fde2d87109230735c5010d1de32dc1d6af0fe6e340b395252ee3d71b8"))
        (     12519, uint256("0xdfcc47c54bfa563940bb567acc8f98eab2adc18fe339635b47817d89a6a8a7e4"))
        (     12708, uint256("0xfdefed86162af2997041692ed8559317318e5c5e681e94c7e42f902e05ef7d39"))
        (     12947, uint256("0x0f7224bf351600c2e426b55465108d7729999cb0501743a0f53f035482fc6424"))
        (     13064, uint256("0x58b5904b6e58f30293e9ff017f6a0eb621ab0ecdca41d9e742bd51143ea553e9"))
        (     13239, uint256("0x03b1560e68ead3f75d13326fbfea7ec11a4cc106a5e0d540a3c16f471440ca8f"))
        (     13243, uint256("0xa925b7d64fa99d151f96054c49c4c5411787eb6e402bc6230ad8fad3c5bd824d"))
        (     13500, uint256("0x8f1ce634b34b3ef974cc6ee45490bb28c24866adab40e7ec2c25c088bbe5d17d"))
        (     13600, uint256("0x86db60c31e156eb3129389d66eeb992b90b486107d8492865db5ae32cc6718b3"))
        (     13695, uint256("0xeb685447bf4858618984643ab3ca11b7962f1dbacf5426a1c9168fcc2229e862"))
        (     13714, uint256("0x262578118b40ce49ec1525f2d81f1a55302526de3b5602516fcec6c2c74f29fc"))
        (     13767, uint256("0xd4a69080bea90c0d1aa7b8ae7b80029741341a0184973185c64c49b70a5c40a8"))
        (     14500, uint256("0x4321a242febc3e518497e338fe6ff43d47b7c6a60cd216f0fd92310e7a17132e"))
        (     14780, uint256("0x6275a28c1a228e0190b0cde057ef04b7dc2a4f5f5432cf44cd274c0b90b182c3"))
        (     14965, uint256("0xa710bcebeba0235ef3199d1d8b3106242cbc3460fd3162aa82152b7284030899"))
        (     15147, uint256("0xaeff6661ce7f4fc740dee4bf45775adcd35bcfccf006b940ee09705d2f49cc50"))
        (     15302, uint256("0xe518c65da7407d623714e1e1dff6a4298f08f713f2e350965488271f6197e667"))
        (     15328, uint256("0x0307747904e26cdae398c9bdfab74143cb4e9c992a7ee0a79013b8ea344cf092"))
        (     15505, uint256("0x905ae2f8a72ab5359cd2433144c176fdf90cfd81954bf59e6400aa444a845227"))
        (     15615, uint256("0x3afe11c1acff33cf3f840065d5af3386fa5fbb7eef02d96569eb9c486d1e74d7"))
        (     15725, uint256("0x9e82544d0068697524cc02619c5cb9232b45a0df02d59531094c912877ab16dc"))
        (     15839, uint256("0xe9675cd643e57827e36cb84213abcb79160c635a6b4bba5f6ce19cca4cd592da"))
        (     16013, uint256("0xe0fb246ebae10f4f54a743d0703fa091c9b41f2e4dca1fe4734b9cc49bc04f7d"))
        (     16173, uint256("0xc9ade122cdc0dcab3838265dbf0687f62c840862bf0f7f3169cf748259ede75e"))
        (     16290, uint256("0x0bd60776415c5cd6b4ff760c6352e1aaa632b14e23dd1d18d7089ea7e4457a95"))
        (     16546, uint256("0x778ed997a80e575d0105d21e9b1b4c6c2ea6bf37fc23153a031571eb1f6f718d"))
        (     16646, uint256("0x6b6dead93992ff9075c0c09c5d73dcdb3592b74bbc463e63b66860d136e1b28a"))
        (     16966, uint256("0x854c2f762bca4b02c83608edb74895fbab3b3c10f3176eac9582357bf7c051f7"))
        (     17213, uint256("0x212954f0bc8da489a39b33468fcc06bcf2c5448e65cee2f465d40f0d3047db41"))
        (     17366, uint256("0xdfd3da79a41da358c145e578aab1bd6f0be24b9a1ab69547e815a4219a9b8a10"))
        (     17762, uint256("0xc587bcebd9be0cfc549f317825e19f6f6058526d1cbf9316b851356cf7e21c85"))
        (     17852, uint256("0xfed48027439b3fdbeb22213b0795c3ef6295517f849f418864b1affc8b0bf9a8"))
        (     17965, uint256("0x2a7f136a02ade5754121b78fe564392ba948f5ad7b82e5bdcf9c7ac417f12ff6"))
        (     18011, uint256("0xb5b2cbffda69f3fb3459151b9558e50063d2f0b5605dfc8b05ba945cb502d02f"))
        (     18097, uint256("0xda2ebcd3ea4b1d1d3b8bccc8ac11a72ccd494c673d8838766925969a84b3f23e"))
        (     18497, uint256("0x3407704ea6bdbe838e996d306d27c4126a0cee387a7be617911923ab59f3c72a"))
        (     18770, uint256("0x719874f60ed8216fbb774632559e2eed843b3baedc841407eaf4775bbb669236"))
        (     19087, uint256("0xa8c895d440fcffa5cbbf77fd7d5136d58b6a0db6182b1d333297f64170e578a8"))
        (     19164, uint256("0xbeca2d879a0f4c234155cd14d9a0df3c0ab4f0613e95f634234a7032b042c218"))
        (     19376, uint256("0x2f99f504c61470d4c0b3f935c1cc91ca761a6f1b567a00656d55a2be5fd6a5a8"))
        (     19769, uint256("0x17651b891378310f4374239dc6d92a224aaec676d4662ba4cd98af7c137018fa"))
        (     19853, uint256("0xc10c9ed7b6b7a2691279368f8b075afb1fe7828f8221d5e9080c1d5952a7dc32"))
        (     19994, uint256("0x74dc7bb1a7560f38f5c30f353fd9c47120ed4895ebc41b687589b0b5d0e99f90"))
        (     20062, uint256("0x2bf75eafd56a269c3ece2be570078aaa410f28d6ab0a933e690cc8f81a2fb41c"))
        (     21000, uint256("0x83c99fbd2e928013bcc09432c75268df2c7c744203c4a719068d1274f5fe5869"))
        (     21350, uint256("0x07939a4ce262dcea7171359a423fa2904781300c188668608a1a3df9fbdf065b"))
        (     22185, uint256("0xd8a0326fc897e679014a00778f4f65d4703ec4e14663582c9dcf99e9177661f6"))
        (     22298, uint256("0xcb6f6337996ea4f17bbe54ce6c2a279243a157ea04d9bee2425646cef866eadd"))
        (     22609, uint256("0x5380ed359a753256dae7c5c7b98c032c785d05420fa7c096131d813e3a7ccbd7"))
        (     22698, uint256("0xde6785e96c743bb11524470d8607590f2066d7e40b51cb62590716af3bd5efab"))
        (     23107, uint256("0x5693a6cbc4406a28ad930de066aa137296e01f7e80e7e4a552a9f7f90df3aac1"))
        (     23544, uint256("0x143d80913a478b741ec30fc839bc73959809e074b2b344519fd125c7f6fb4a57"))
        (     23561, uint256("0xc44cf416a6f38639e9880800869e73dca9cc238b3581362c5f35df7e5ab6ebab"))
        (     24117, uint256("0x220ac07bc93bf7cedb2cec02ca1e7fe2ae88bfc4cfe9c4af75c6fee802f6c2f8"))
        (     24176, uint256("0x5a05770000e1fde583a6d07f4a262626e6d4b758e59ae8a7572e91080d64690f"))
        (     24236, uint256("0xabef04796e39d77ad263cff4601c931ccb78092c5e425c151becc0e64aec8926"))
        (     24501, uint256("0xdb23b7b24de2e7263fd95ce34df1173652ee2678e6b33892b302e232e460b3e3"))
        (     24682, uint256("0x29991e005e08629f323cea52e29398c6aa97920e7d7682e5a10088b35a5257e5"))
        (     24945, uint256("0xd8425fa0fc678abc45601435e3d1f4c6cde9d56ecf1acd41380588700f745108"))
        (     25336, uint256("0x70b6c67d9883af4cbc9112b1e4d79cf540b0d9d1e1a791e4d6154a5ec4e34968"))
        (     25500, uint256("0x252a0b1b0ce2d483629c261cb5ba59031f26ff4db72c76a72eea6e26dbe0d4e7"))
        (     25838, uint256("0xe2b90bccbb3d3609265c6a1aeeef9dc9aeb1b4195d13565c51e4087142505678"))
        (     26216, uint256("0x7e2afd7d0920f90ac67eb254ce65b67dc51af4fe68b68b7cf15cc6216ca13ff3"))
        (     26338, uint256("0x5e90a6503b48d920f768bebbc6fca1fb460ee7c20fc37828a3dcd3ed5c89c16c"))
        (     26556, uint256("0x5c392d81fbd7357492893dc36bbe64c9acaeed001c01e562ddc3b54e6402fba2"))
        (     26938, uint256("0xf9f675c3a297d750abd31f5806fcc27d3b3195883a3258badb5098ac71554149"))
        (     27128, uint256("0xa52081521ba3403d636d87f7645d381a90e560afe8e3596e6967ad92736622bb"))
        (     27388, uint256("0xd54a626eb513bafbf79bb406c70ec5667e1e21b33d9b1921932b2222904c41e1"))
        (     27543, uint256("0x2a42a183167aa8bcae6c5f87030c3a9bc5a70efb6d630d181bcc318db6066110"))
        (     27544, uint256("0x4c52a75d828463deeef0bee8694d10722acc0d5497fe5d82822ac5d2af920e83"))
        (     27944, uint256("0xac93c3db5c188cc06878ea5f339b85c191ce7290a6bcf9ffa8c2f8c5ebb5a7df"))
        (     28300, uint256("0xdaf6df8bcacb2881537150a36097a1fadd48e19e4fc6265c5787153323aefe73"))
        
        
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
