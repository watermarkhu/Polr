/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_sobel_info.c
 *
 * Code generation for function '_coder_sobel_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sobel.h"
#include "_coder_sobel_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("sobel"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.1.0.441655 (R2016b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[34] = {
    "789ced5d4b6c2bd971ed17cf8c6dd833990089ff76fc12c0b033f123257e44cd2210c96efec44f53a4444acf6ff8fa734936d93ff6871f2140944d3259d93010"
    "c42bc3c8c28837d9640224db6495453689036413789355764616c9264078f991f8ee6bbd4b75379b2d7713a0a89254b7ab4a75baead6ad7b9b7852ac10f3d77b",
    "f3f70ffe9720de997f7e66fefe3562f97a7b453f99bf8babcfe5cfdf22de5dd1df9fbf394536c0d458fe52662440ac5fbc220932231bcd990a080de88a3806fc"
    "e2375d41044d410265658328087342ca6dfcea9680bf82df67fb801b364c89d0fafaed6508719358e87343dce9f396853ee50d7dde5fd1cfa917e48791731d68",
    "7a64c21840eb44a3d108a970a60464438fe405a360b2115a11b508a7f040e381a47400df031d1e18803304458ee80a0bc467d25a8e28468e4fbd22c7a7084614"
    "177c290cdfa711f9212d2a3d816396fc530c3f85f043fa79b1dca65e643f8cd09ad2d318e99bd0e07aa4926e96d399c8d961f420c9460c451159651a01921811",
    "0536223186c8b01145d52373d9178aa3f2bf6371fd271bd7ffeceae7f3ffda8f325ffeb7b47dfee5cb0ffc058cfdbf80d81fd29747da882b55f9714698328789"
    "3273a9c4f9ec72bc6f6f8cf7c4623c62e3d3cedfefdb5f68ccf57f1bb93ea417187c26cc6f3e9acc88cf043d630aa25194ab73bc6a02e70a8e3ec6f0b711feb6",
    "1dbbc0f7070b6d221facd589a0ea3c931cf8e527effdf3cf038b2b52140e9814d9cbc5d96333c5d7642999a10bc1c015ce5e5f44ae0f690457f3e16a5a5a9e6d"
    "15cfde7a65bcb708aecf68dbc4631a9183b663074b1cadc577829f9b1f06252efd16f27f8074ab503aa8a999c4658d3d4d9d0ec79cd22b25086ff0738391771f",
    "7eb36d1c1174303299edf2b977107e48f38ac98a603b3b9c22fca776ecb0711f01e2fc9bc84a83653aeb24affbe5bffcfebf06023f96f187bc2c5d8e9b09369f"
    "a628814c1ef5dbe745d21ff8f1ca6f4e3072bc8fc801dff3a13bab913a9ca2013770f4030cff0b84ffc5ca1eb43383a89a309ecf2823a84a0ee74bc42ffff4af",
    "821197ac702508b50c59899555e58a2d1d7083b3aea95e78345ff2ab1fe1ecf825442e4823f99ecc683d41e6fa435cbeb77e6d8eb7ad7dbe87f07d8f78e07d47"
    "9f2796805fd661565f5f0be1b79adcd5636cc6af3ffaf65970e74fb3e9a478cce4babd4494ab514a6390338f26943f70e6073fb292eb6d442e48774545d1b6e4",
    "779a0f1611fee243edf2daeda76bca918506aba8eec81f7f76f2ade0c6add4e8a8d61c89646298e937ebf9863122492ee78f7cd02bbfd957bd0f87ab8f31fc61"
    "bdcffff8da67bdef0623af5ff0f555440e4823f8d2394664b467eba8855fcf5abfacf2411caece11be733b76b1c4d5074b3d366c14d601ede18aed27e9b62c1a",
    "7c439128532ec4582a53ca070b572f31727c079103d2683d5d55c55963e19439535eac1a17655a6438b0719d13cc757e1db90ea4bbabd13a7d46e6e7010d8ef3"
    "23cc382c320e6bc76ed6f5d37bd55c1bd4811f5ffd22165c1cc6e5733921c427519d6928ec0434872986f4a89ee8777fda55dcdb755e19c63fffe3cecff1cfab",
    "75b036468edf45e48034822f4e9175a3aac80d41ee89c0506452b05e5fb2d3afb1f37ad1bd76b252cb71dd313078b35a776e9b47b5e35c9e2953ad44a120b5a8"
    "e8414925fc8137affa07edd419e79e383edc92df699dd1edf5439e311898792f7470bcee4cfc7990f1c38eeb47e58172104d5c1fd2b1c2a15e4af026e10ffc78",
    "e53738bb85eb61e17ad843f3403faf875d22f242da455c3d65f4797833e455c5fd4eaeb09e1fd6f37785b77dd6f371fee3cabcfd0d78838d1e9bf91cce7e5bf4"
    "f3aa9ac2ebc235f0243fdcddbc74ad86235cfdcffb54707165b4b20dba77dd15e25d938f02aa3b2856cf028aab138c3c56f576c83f4fbb54a01bdaa1c063d7c7",
    "9e10f7f7c7e3e2fa47c8f53f221cf693ad0db2ee2843948119a283fc3030f32e2b5c958ef8ae504df758a93294e59a38a91d90399fe0aa85c80b693771b5f894"
    "155907aa5bf16a59bfa67a8f3c5eadd57014afdefff75a707155cbe7b3a378ada18b07add628c9b3ba50173ceaf7bdc1c8eb95df9c60e478179103d282be9aaf",
    "19701bb63775c11ac25fb3630f789fe90a53c0abcadc1c9157f49807a8b02e680f47f9d870d618f50431dbcc0ecf46995e73784ef9643fca3eeebf56727c0691"
    "03d282de15e661afef057e4a087fc98e1d5ec3cf527e17fa2f02831fabbafa78042875cce9c7ed494c5168bd7110bbbc22fc91dfedae9e75879fa75d41d38dae",
    "b04dddef1b883c905e6c5e918d4e57d14445513bca18685d5199743878b887b33e43dc3cea25c2f7d28e7d36fbc496e67a833e8ef61dff4550706615a794ec74"
    "54ef56aed27d4d2135aa6cb426952b8ff2bdbfc3c8fb2788bc90deb51f3d7df31f74fa40548186c7cf13e2f53a048c0d2ecdd7049907d3a26c2ce4c09d7f9043",
    "c6cbd9b52312e79cd52f8213dfac70471f36a3d7f44c6e4f4783d8ac5418341bec55c11bdceddb5f4e30d7df767e65b70e7883e10be755fec5cd3ee7558f3d5e"
    "d9994fcd879698e96ef1e6da3cecd5f3111692bb300f0b747e284e9357203aa845cf854cb439b93e60e2a257ebc241c59b203f56bc097288b73b7e3b784b142b",
    "4375580553a35069f4e8fc299d8f8a9960d63decceaf9cd60df79d1f8779e1e39a4fe170e3f57af009469ecf23f2401a8e21778673380271add783f1271ba96d"
    "ea83cf91eb3f2776d067b156c6f9b96a81c195551d5ecef0e6a0aa977b265fea254b67a09dab36097ff4e1be44e485f40efde869eebc5c0efb98c23ea6fbf8ed",
    "c4ad7df631f90d5f8d74850af115e2eb3efec7862fdc3efe3e222fa47789af1e303a5c471424c1d0b75957fe0a221fa4add6a148612cf0e04eef5def276920fc"
    "0dc2b5fd2477ea38df17f907ffa707b7effd2877a5ea8343b69beacdaafaf880ebb526058ff6f1fb1d77387b6eb15f72e1a8b468ea5ee0ad8ef0d70957f106d5",
    "70e3bcc340e3add028b4db8d58ad65e499da70503cadf41293106f5bc5b92f23f241da0a6f154136d7cf40f202776708ff19e12aee16eab850af0f34ee065222"
    "436566f52b208d45230eaab9d8b1e951bd1e873b80c80be95de20eddefb52bdce1fe4f0fed9f0a7178f7f2037f8843777118e69b61be19a47c73df780bf3cd30",
    "ce8571ce7fb80bf7c984fb64ece26e9ffb64fc8e3bb7f34bafe77761bee97ffc85f9e6eef34df80cf85fe13acb42bd30ffbce3b78343e9922bc79274235f564b"
    "473c59198d95563f17e2701b7bfe06221fa4217f4664f4665f037a5f11f90d7dbdce3b5db5d32b4a39ca3b23ef06f85cc66baac71d6b2359acd24db3993c3b3b",
    "1cc88247fbddfc8e3717e21e3bf7d2675366aace36f47ebcfd2b1f407d220b7d9cf7af7cee6618dcf9dec571f1b4701abbb8cc8af1568a4c1d4b628ef568bee7"
    "37ff71a14f6c813341160519dce96937bee1ecd344f89a2edb67a987d3f3bd896ffcf74d70e35a8665d27aa61aa7c762aa2e1b46aa351c8d3c9acf3d367c6d71",
    "aef7025fa60e3a1ae8c2ef779a3fba72fef91becb3a1871b759340e34c4b57e28d74375be3285d1f3017c5fe3129f9a46ec921f2427a07387bca025800375e99"
    "616d83bbaf23f241da0a779b23e370f784b87fdf01eebee4ca3ec237d8cbb89bae39f1d76cf41f839b3756f88be35a3565e67325be3a526af439791da38219d7",
    "70f60bcf257e905f86e712efe95c62bfe10a17b7be86c803690457ebf4eab6f4e145dde302e1bf70cf4e2b7dee4ce5c04f937f1ce0bac751f6e0d2a49b17daf8"
    "8c65cf2613e6b890b8f6c9f9235efb8f1dfbbdf6bc25e67c4eec663ded06339e2be7d8ddf3dca5855a8ef2c49baf07795e0686147766341243899e91ed5894ca",
    "a4cf073e89675ee32cec970cfb257785b37df64b3e369c85fd91617fa45d9cedb33ff2b1e16cdb7abea0574d51a424d598b912cff65dd7dfd0c78dbafe4fff30"
    "20f334cbe7635498eb9a1aaf03a3323d938eb4367391f5ea5c2ebfe10d67bf707f5b98373e349eedb3dff8571d5fb8f1c2fefe106f7ec2db235c375bf55b193b",
    "edb3da1daed67d56860bb8baf9af4ffe321879a215ae9a17ad164fc6b9da3943cac2a02453dc51c3235ce1e61b5788bc907e5e6c67b7751fbdcf68808f2c9d67"
    "e542cb0f6aba742412a8607e8b96b9d9661dad8d91eb7710b9208de06b5951c8ce7fd8037281917998fbadc7c7e58f9f46c687b4290f6565226f65b70ec2df21",
    "96b8dbda701616bbc39e856acf5427f8fbe8c7ff195cfcd1f561f232af32d7655e4c251aa749b679a1fb24aeddf7fcf7adfd0873ffce94d38db4ba38d6de611e"
    "f93a9ebdc0d9beee4f3671d6fba73f0b46fe68550f6925c42863f66b3d41b8aa52a39951d30a22e10dce7e82917780c80b69f7eed7a562b361aaaaa21980b7f0",
    "2bf54ece30ee85712f8c7bdec7bd971879be8bc8036904776f0639e10efe7e82e1f7cb7dcc261e5f04058f56f131451606202f57e254af3e30e849b7de6e6884"
    "3ff0e8751d01b73ef755441e485bd5575638bf1d77577516afef5736fdf3e39ffe6d30f065b9feadb407158a8e36467de6ba9f388d72d146cda37dda76f326b7",
    "f7d97060cc889d654bf13638dba24f7981335db8061dd5d0d6faee0a673b5c5759d869ad87c3fee440ef67538b072d3d59ab1d68d7c9dca05f3e14e3c9d342b0"
    "7166271f4070c67538463788edf2c8b791f1203d1f29b63e97018733c77d936fcc2397aa84f9e21dbf1d9c4553e651a572a849ad6c4f9a0e454e8a9d26c278f6",
    "46b9c2beaeb0af6b93dfce7d799f7d5d7ec51dce8ee13ed207f967b88f744ffb486f30f296117921fd9c7a417e1839d781a64726ccdc0d3ad16834422a9c2901"
    "d9d02379c128986c8456c45542c40349e900be073a3c300067088a1cd11576fd205cdcfce909f1faf904fa4833dcc0cd14c35f40f821edecb9f4f0303128bd23",
    "bcfcece45bc1c54b3c4f75fbd1647150a3624583aecbf2384b7a34dfdab7bfb850bf107452911841a6344db9ad5f9c60c6b57abee95cb205963bfde5a29b93ba"
    "a11bfb3f37d4725a37fc874680f1d53c6a5dc80a07d4d391a018f93adf3a3bd33dda9fb66f7ce1ecf59bc8f5218de00b6ce2eaa1716d7deece0d86af82c851b1",
    "63074b1c0117f073f31f34082e7ecc3875de3e344fa77ab5af672a8346524f8080e007179fb638977139a17806c7bcd36b57f5f51d9ecbb8d463659bb53c36f1"
    "f4c320efe32c5f037a965549554b2be7997a45559a204905034f2f31d7ff0e727d4823786254559c3516ce985b656c459916190e6ce87982b9ceb6f91fee7c3d",
    "161987b5632f4bbcddafa60be7155cfd22165cfcc5e5733921c427519d6928ec0434872986f4a8eeee777fc2c5bb2dce6b347540335a57d1b28a7cbbde65376f"
    "c4c5bbddad27bfaa86b3f5e49b6ffef5ef05176f06cb930c97cad433d96ba936d3b428187a15effce63f38fb6db1cff376e05de691bbeb17bb15df8d75accf5f",
    "7c3fb8b83a1a19f509d58febb366a2914ed3a39c2c347df2bc26bfc7b1f01c9ef01c1ebbb8f3f3730afd8e3bbbf5925d9f1712d64dfc8fbb7dd64d6e30f27ab5"
    "ae8cb39bd5f3cf601c900cf864be4e1f882ad036f4da55fee8ca790e1bf14c51f5c86b7a387efed2cdcfffe6ef838ba7abde69372d5c5380ee91d4715daa97a2",
    "7ade27f92383c80be91df8cf534e9124455e66449be79abad08728e81953108da25c9de35d13b8ade298d5fe3151e909f318b215eeda087fdb8eddee598f7e55"
    "1d47fd1e9fbc17e0e70d92a270c0a4c85e2ece1e9b29be264bc90c5d0871b74fdc39cd1f43dc85b8bbefefff1ff34db696",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 63648U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_sobel_info.c) */