/** Mondomatic */

#include "Heavy_DimensionIV.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_DimensionIV *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_DimensionIV_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_DimensionIV));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_DimensionIV(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_DimensionIV_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_DimensionIV));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_DimensionIV(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_DimensionIV_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_DimensionIV();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_DimensionIV::Heavy_DimensionIV(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sRPole_init(&sRPole_Hk1DVyaL);
  numBytes += sDel1_init(&sDel1_ecu2I6e6);
  numBytes += sTabwrite_init(&sTabwrite_osnL14wT, &hTable_iZIXfHM1);
  numBytes += sRPole_init(&sRPole_UDRPfgrI);
  numBytes += sDel1_init(&sDel1_JmPWqZNp);
  numBytes += sTabwrite_init(&sTabwrite_TTFR6QQt, &hTable_RQ7zKeXD);
  numBytes += sPhasor_k_init(&sPhasor_gv9TBkJY, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_OYGwvcDu);
  numBytes += sLine_init(&sLine_Gv3740XN);
  numBytes += sLine_init(&sLine_hQegFPGC);
  numBytes += sTabhead_init(&sTabhead_vpFjmoPF, &hTable_iZIXfHM1);
  numBytes += sTabread_init(&sTabread_NeaOEtLe, &hTable_iZIXfHM1, false);
  numBytes += sTabread_init(&sTabread_Jqe5Lwba, &hTable_iZIXfHM1, false);
  numBytes += sRPole_init(&sRPole_CjQRcB0O);
  numBytes += sDel1_init(&sDel1_yWx5oFNM);
  numBytes += sRPole_init(&sRPole_jl78uaLX);
  numBytes += sDel1_init(&sDel1_wpTlAdY8);
  numBytes += sRPole_init(&sRPole_tECQyfVf);
  numBytes += sLine_init(&sLine_JUHr2gZn);
  numBytes += sTabhead_init(&sTabhead_QRbfvIIY, &hTable_RQ7zKeXD);
  numBytes += sTabread_init(&sTabread_RQIQH0Bh, &hTable_RQ7zKeXD, false);
  numBytes += sTabread_init(&sTabread_bZQveiTj, &hTable_RQ7zKeXD, false);
  numBytes += sRPole_init(&sRPole_lbiyLXRr);
  numBytes += sDel1_init(&sDel1_Hm6cPLbC);
  numBytes += sRPole_init(&sRPole_1DnlGnG2);
  numBytes += sDel1_init(&sDel1_Y7zY6zYU);
  numBytes += sRPole_init(&sRPole_1LVZ9Rxa);
  numBytes += sLine_init(&sLine_EwF9vw9C);
  numBytes += sLine_init(&sLine_3Cjtbgf1);
  numBytes += sLine_init(&sLine_aKLKX3ve);
  numBytes += sLine_init(&sLine_KBBCAjPC);
  numBytes += sLine_init(&sLine_Razmq9WL);
  numBytes += sBiquad_init(&sBiquad_s_GTk7YBj7);
  numBytes += sRPole_init(&sRPole_Y0WQo5kd);
  numBytes += sDel1_init(&sDel1_PdgMYJz2);
  numBytes += sLine_init(&sLine_uB7lSxTk);
  numBytes += sLine_init(&sLine_nMRjZB6K);
  numBytes += sLine_init(&sLine_LAlpPhRD);
  numBytes += sLine_init(&sLine_ytn1ADqI);
  numBytes += sLine_init(&sLine_VORyXAyL);
  numBytes += sBiquad_init(&sBiquad_s_oYmMZyZ9);
  numBytes += sRPole_init(&sRPole_FsmMeEWM);
  numBytes += sDel1_init(&sDel1_x3AzL43S);
  numBytes += cDelay_init(this, &cDelay_VPjiJat8, 0.0f);
  numBytes += cDelay_init(this, &cDelay_ZpyZF1v9, 0.0f);
  numBytes += hTable_init(&hTable_iZIXfHM1, 256);
  numBytes += cDelay_init(this, &cDelay_pcErhDAi, 0.0f);
  numBytes += cDelay_init(this, &cDelay_rRLz94Qc, 0.0f);
  numBytes += hTable_init(&hTable_RQ7zKeXD, 256);
  numBytes += cVar_init_s(&cVar_sti6GaYU, "del-1001-LineB");
  numBytes += sVarf_init(&sVarf_wViz1wbt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oXyaisFD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KVsDFI0c, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_Yb5EQpAe, "del-1001-LineA");
  numBytes += sVarf_init(&sVarf_3n7pVHG9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_FwqeyZID, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_L50u10ow, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CcwnwUQR, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_OjkQlAMu, 120.0f);
  numBytes += cBinop_init(&cBinop_uOBC1my8, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_ZMv0FmlB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GXp5qpJM, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_7SJWDBrR, 120.0f);
  numBytes += cBinop_init(&cBinop_wF5wlr0u, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_09kNwRGO, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_UxFVhuSM, 8000.0f);
  numBytes += cBinop_init(&cBinop_jwxx0q4X, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_Q70Whj02, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_aydw2AKi, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NV2y1WIm, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_S0fVuf0F, 120.0f);
  numBytes += cBinop_init(&cBinop_yMkU0XIV, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_JQJD60lr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WZYwd31E, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_fk67sb1Q, 120.0f);
  numBytes += cBinop_init(&cBinop_LZLoLM2n, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_P2sO80us, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_zr7ynmC4, 8000.0f);
  numBytes += cBinop_init(&cBinop_DiRPUGqL, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_fnC1c8KG, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ngFQODQs, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_r8krws8O, 0.0f);
  numBytes += cBinop_init(&cBinop_RO6YyxjL, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_VdNwHDoi, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_OtAPS4G9, 0.0f);
  numBytes += cBinop_init(&cBinop_iSWst8zP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_aStWqT26, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_7fs6XTkl, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_eZTyTlLs, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_EIFIujL2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_0xNfqNaf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_H2xcANb9, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_Fur9h1c3, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_l75mDHNd, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_CfZsUHx3, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_phn5aI2c, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_GTH09YCm, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_NpHbWuNT, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6LIBMKOy, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_EUXrHFlC, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_4vb5885r, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_zBua9ev9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_tf1tI6ww, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_k1WfKdr2, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_4kMxlTVb, 120.0f);
  numBytes += cVar_init_f(&cVar_doQQqY2E, 10.0f);
  numBytes += cVar_init_f(&cVar_SCg9geZA, 1.12f);
  numBytes += cBinop_init(&cBinop_vM9r4vy4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_k3gZDBOF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_DvhMKtZw, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_uqoDXMtC, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_w2xEwFs2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wPCeeOip, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_KuwGwJCS, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_rMpHgdzd, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_R1ijYM2f, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_f9ZSJy6t, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_8TLS8bIu, 0.0f);
  numBytes += cBinop_init(&cBinop_KDYv3ksP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ttmj0JMo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_H845thZj, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_IlZBpyv0, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_4B7ByUza, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PCgPMQla, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_whxQ0lnT, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_Agf9kIP8, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_CxG16bcZ, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_IvYFQ12F, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_zUAgncfB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2VZc7Kd7, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_igbH0AcT, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_fpt04m0J, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_HxoJwutw, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_M68LOt5P, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_38snZw8e, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6cynxSv5, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_vrM2l9kb, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_TXu1f974, 120.0f);
  numBytes += cVar_init_f(&cVar_E2E3ik37, 10.0f);
  numBytes += cVar_init_f(&cVar_6U4XPjTJ, 1.12f);
  numBytes += cBinop_init(&cBinop_z8rdMpDS, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JsdJdQqz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_J0MBdNCq, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_MDOxMBtd, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gTkkBGHb, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_lFGysaKs, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bVUEf1Q2, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_zVfLIPyz, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_kmYpzlIr, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_aKvpDH2A, 3.0f);
  numBytes += cBinop_init(&cBinop_smxZ9sqt, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_O7IW3IV5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CB552tAL, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_pcRzw0aN, 3.0f);
  numBytes += cBinop_init(&cBinop_OXEbEY5T, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_YNxt2fiY, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_m0xkQik8, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_SkvKVzbK, 3.0f);
  numBytes += cBinop_init(&cBinop_WZihE35t, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_xfTVqN0g, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_HeNFq9DE, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_V9qCSXkk, 3.0f);
  numBytes += cBinop_init(&cBinop_CeDGNAms, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_3oQHHloH, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_BXKAoEkA, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_yMnPGSnW, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_OgEA4vqh, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_ZpPlxh3U, 2, 0.0f, 20.0f);
  numBytes += sVarf_init(&sVarf_aKrudoJh, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oDfE8iKF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ERn2j7ia, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RjRI0vfS, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_x3YOyM54, 0.5f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7ZOWhnuL, 0.5f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_BK79nhe5, 0.7f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_weW8q6tL, 0.7f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WfbFurj2, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Jv4ZW79C, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Ue1zoG4Q, 0.8f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kyXbPozG, 0.8f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_DimensionIV::~Heavy_DimensionIV() {
  hTable_free(&hTable_iZIXfHM1);
  hTable_free(&hTable_RQ7zKeXD);
  cPack_free(&cPack_BXKAoEkA);
  cPack_free(&cPack_yMnPGSnW);
  cPack_free(&cPack_OgEA4vqh);
  cPack_free(&cPack_ZpPlxh3U);
}

HvTable *Heavy_DimensionIV::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x89F43834: return &hTable_iZIXfHM1; // del-1001-LineA
    case 0xE753F82B: return &hTable_RQ7zKeXD; // del-1001-LineB
    default: return nullptr;
  }
}

void Heavy_DimensionIV::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0xBA57CCA1: { // LFObase
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DVcQV3J7_sendMessage);
      break;
    }
    case 0xC43489A7: { // LFOchange
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9vxux47J_sendMessage);
      break;
    }
    case 0x9ADF5716: { // 1097-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_K20uXYwn_sendMessage);
      break;
    }
    case 0x6373C1AD: { // 1097-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_g63wBi1T_sendMessage);
      break;
    }
    case 0x7F559C24: { // 1097-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IRfsQqYY_sendMessage);
      break;
    }
    case 0xD372982E: { // 1097-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_tfflU9Xl_sendMessage);
      break;
    }
    case 0x716BD636: { // 1141-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HWa2xwnp_sendMessage);
      break;
    }
    case 0x75C10660: { // 1141-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qsOQV3mp_sendMessage);
      break;
    }
    case 0xFF3BBBD1: { // 1141-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_MyHcGTam_sendMessage);
      break;
    }
    case 0x5E8CFA8A: { // 1141-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Aajuu9tL_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ovv0nud9_sendMessage);
      break;
    }
    case 0xD342C35: { // antiL
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gou6LN7Y_sendMessage);
      break;
    }
    case 0x6365CD33: { // antiR
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Rinu2ipK_sendMessage);
      break;
    }
    case 0x899A1AC4: { // antiphase
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jzkuGO0F_sendMessage);
      break;
    }
    case 0x2A709A4C: { // combo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UTN5CIPR_sendMessage);
      break;
    }
    case 0x4612B591: { // dimension
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_p0tGTyoj_sendMessage);
      break;
    }
    case 0x4FFE8B0E: { // four
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NTPOCoaH_sendMessage);
      break;
    }
    case 0x76F157D3: { // one
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WZfsy0Ji_sendMessage);
      break;
    }
    case 0x97419B4D: { // three
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_yvwNx8L7_sendMessage);
      break;
    }
    case 0x578A346C: { // two
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Ktwz7l2y_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_DimensionIV::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "antiphase";
        info->hash = 0x899A1AC4;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 1: {
        info->name = "dimension";
        info->hash = 0x4612B591;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 1.0f;
        info->maxVal = 4.0f;
        info->defaultVal = 1.0f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 2;
}



/*
 * Send Function Implementations
 */


void Heavy_DimensionIV::cMsg_otaIcHRd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7CMsp53W_sendMessage);
}

void Heavy_DimensionIV::cSystem_7CMsp53W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_pAn0lpqp_sendMessage);
}

void Heavy_DimensionIV::cDelay_VPjiJat8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_VPjiJat8, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZpyZF1v9, 0, m, &cDelay_ZpyZF1v9_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_VPjiJat8, 0, m, &cDelay_VPjiJat8_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_osnL14wT, 1, m, NULL);
}

void Heavy_DimensionIV::cDelay_ZpyZF1v9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ZpyZF1v9, m);
  cMsg_a8U1sbpt_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSwitchcase_InZCEMcQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_OlO6js62_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_DimensionIV::cBinop_o7PcSGJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_28yHJeNi_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::hTable_iZIXfHM1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VSy9Yob2_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_VPjiJat8, 2, m, &cDelay_VPjiJat8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uInmX4DA_sendMessage);
}

void Heavy_DimensionIV::cMsg_28yHJeNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_iZIXfHM1, 0, m, &hTable_iZIXfHM1_sendMessage);
}

void Heavy_DimensionIV::cBinop_pAn0lpqp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 50.0f, 0, m, &cBinop_o7PcSGJV_sendMessage);
}

void Heavy_DimensionIV::cMsg_a8U1sbpt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_iZIXfHM1, 0, m, &hTable_iZIXfHM1_sendMessage);
}

void Heavy_DimensionIV::cCast_uInmX4DA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_VPjiJat8, 0, m, &cDelay_VPjiJat8_sendMessage);
}

void Heavy_DimensionIV::cMsg_VSy9Yob2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_ZpyZF1v9, 2, m, &cDelay_ZpyZF1v9_sendMessage);
}

void Heavy_DimensionIV::cMsg_OlO6js62_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_osnL14wT, 1, m, NULL);
}

void Heavy_DimensionIV::cMsg_RaOUgZM9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CDt6dE2Z_sendMessage);
}

void Heavy_DimensionIV::cSystem_CDt6dE2Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_j9ysJJOf_sendMessage);
}

void Heavy_DimensionIV::cDelay_pcErhDAi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_pcErhDAi, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_rRLz94Qc, 0, m, &cDelay_rRLz94Qc_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_pcErhDAi, 0, m, &cDelay_pcErhDAi_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_TTFR6QQt, 1, m, NULL);
}

void Heavy_DimensionIV::cDelay_rRLz94Qc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_rRLz94Qc, m);
  cMsg_qNoDNLln_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSwitchcase_poKClEwS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_ctB7cfsO_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_DimensionIV::cBinop_9wL35nnc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FhRWmlib_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::hTable_RQ7zKeXD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EscKyqnf_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_pcErhDAi, 2, m, &cDelay_pcErhDAi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sHgWugM1_sendMessage);
}

void Heavy_DimensionIV::cMsg_FhRWmlib_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_RQ7zKeXD, 0, m, &hTable_RQ7zKeXD_sendMessage);
}

void Heavy_DimensionIV::cBinop_j9ysJJOf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 50.0f, 0, m, &cBinop_9wL35nnc_sendMessage);
}

void Heavy_DimensionIV::cMsg_qNoDNLln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_RQ7zKeXD, 0, m, &hTable_RQ7zKeXD_sendMessage);
}

void Heavy_DimensionIV::cCast_sHgWugM1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_pcErhDAi, 0, m, &cDelay_pcErhDAi_sendMessage);
}

void Heavy_DimensionIV::cMsg_EscKyqnf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_rRLz94Qc, 2, m, &cDelay_rRLz94Qc_sendMessage);
}

void Heavy_DimensionIV::cMsg_ctB7cfsO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_TTFR6QQt, 1, m, NULL);
}

void Heavy_DimensionIV::cMsg_s5dCV9jr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_twRrQU6J_sendMessage);
}

void Heavy_DimensionIV::cSystem_twRrQU6J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_xapjYgA4_sendMessage);
}

void Heavy_DimensionIV::cVar_sti6GaYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7Pgs0SwC_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSystem_baC8NGnz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_micPCZE1_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_wViz1wbt, m);
}

void Heavy_DimensionIV::cBinop_xapjYgA4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oXyaisFD, m);
}

void Heavy_DimensionIV::cMsg_7Pgs0SwC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_baC8NGnz_sendMessage);
}

void Heavy_DimensionIV::cBinop_micPCZE1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KVsDFI0c, m);
}

void Heavy_DimensionIV::cMsg_29phxAdB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TKZPz3Ps_sendMessage);
}

void Heavy_DimensionIV::cSystem_TKZPz3Ps_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Pr8BkLwB_sendMessage);
}

void Heavy_DimensionIV::cVar_Yb5EQpAe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VmkMyhPw_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSystem_RUrsWomh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_r3Q7hvmq_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_3n7pVHG9, m);
}

void Heavy_DimensionIV::cBinop_Pr8BkLwB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FwqeyZID, m);
}

void Heavy_DimensionIV::cMsg_VmkMyhPw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RUrsWomh_sendMessage);
}

void Heavy_DimensionIV::cBinop_r3Q7hvmq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_L50u10ow, m);
}

void Heavy_DimensionIV::cBinop_k9WoDmSe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_2qAe2bAo_sendMessage);
}

void Heavy_DimensionIV::cBinop_2qAe2bAo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_8HpEF8lw_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_TMQMweTG_sendMessage);
}

void Heavy_DimensionIV::cVar_OjkQlAMu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_SvyScFHE_sendMessage);
}

void Heavy_DimensionIV::cMsg_74VUfpxo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Drp8cRKS_sendMessage);
}

void Heavy_DimensionIV::cSystem_Drp8cRKS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uOBC1my8, HV_BINOP_DIVIDE, 1, m, &cBinop_uOBC1my8_sendMessage);
}

void Heavy_DimensionIV::cBinop_8HpEF8lw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_HUfqFoud_sendMessage);
}

void Heavy_DimensionIV::cBinop_HUfqFoud_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZMv0FmlB, m);
}

void Heavy_DimensionIV::cMsg_0eKM4Z2Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_7UuzwMvF_sendMessage);
}

void Heavy_DimensionIV::cBinop_7UuzwMvF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_k9WoDmSe_sendMessage);
}

void Heavy_DimensionIV::cBinop_TMQMweTG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CcwnwUQR, m);
}

void Heavy_DimensionIV::cBinop_SvyScFHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_MjzN8FfR_sendMessage);
}

void Heavy_DimensionIV::cBinop_MjzN8FfR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uOBC1my8, HV_BINOP_DIVIDE, 0, m, &cBinop_uOBC1my8_sendMessage);
}

void Heavy_DimensionIV::cBinop_uOBC1my8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0eKM4Z2Z_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_5h51PEpo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_RC0u99eV_sendMessage);
}

void Heavy_DimensionIV::cBinop_RC0u99eV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_4kLN7aU6_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_SoEao9OP_sendMessage);
}

void Heavy_DimensionIV::cVar_7SJWDBrR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_6NO79OtV_sendMessage);
}

void Heavy_DimensionIV::cMsg_5s34BqA8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BnQIW4Tk_sendMessage);
}

void Heavy_DimensionIV::cSystem_BnQIW4Tk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wF5wlr0u, HV_BINOP_DIVIDE, 1, m, &cBinop_wF5wlr0u_sendMessage);
}

void Heavy_DimensionIV::cBinop_4kLN7aU6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_BAwJycCs_sendMessage);
}

void Heavy_DimensionIV::cBinop_BAwJycCs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_09kNwRGO, m);
}

void Heavy_DimensionIV::cMsg_cH5l07R0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_bKNudbyN_sendMessage);
}

void Heavy_DimensionIV::cBinop_bKNudbyN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_5h51PEpo_sendMessage);
}

void Heavy_DimensionIV::cBinop_SoEao9OP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GXp5qpJM, m);
}

void Heavy_DimensionIV::cBinop_6NO79OtV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_tH3Dxbf0_sendMessage);
}

void Heavy_DimensionIV::cBinop_tH3Dxbf0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wF5wlr0u, HV_BINOP_DIVIDE, 0, m, &cBinop_wF5wlr0u_sendMessage);
}

void Heavy_DimensionIV::cBinop_wF5wlr0u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cH5l07R0_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cVar_UxFVhuSM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jwxx0q4X, HV_BINOP_MULTIPLY, 0, m, &cBinop_jwxx0q4X_sendMessage);
}

void Heavy_DimensionIV::cMsg_594jC1RG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SnlCAAuA_sendMessage);
}

void Heavy_DimensionIV::cSystem_SnlCAAuA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4gb6xYE4_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_jwxx0q4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_0g4ELOH0_sendMessage);
}

void Heavy_DimensionIV::cBinop_NQZPwAFj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jwxx0q4X, HV_BINOP_MULTIPLY, 1, m, &cBinop_jwxx0q4X_sendMessage);
}

void Heavy_DimensionIV::cMsg_4gb6xYE4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_NQZPwAFj_sendMessage);
}

void Heavy_DimensionIV::cBinop_0g4ELOH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xBzp6I4a_sendMessage);
}

void Heavy_DimensionIV::cBinop_xBzp6I4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_6EXCPHjX_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_aydw2AKi, m);
}

void Heavy_DimensionIV::cBinop_6EXCPHjX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Q70Whj02, m);
}

void Heavy_DimensionIV::cBinop_pRUguPuN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_YmlLUlBP_sendMessage);
}

void Heavy_DimensionIV::cBinop_YmlLUlBP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_5O9qNz89_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_IPQXDs6F_sendMessage);
}

void Heavy_DimensionIV::cVar_S0fVuf0F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_i8zJRthA_sendMessage);
}

void Heavy_DimensionIV::cMsg_7lzvN3cw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_h3HlDrou_sendMessage);
}

void Heavy_DimensionIV::cSystem_h3HlDrou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yMkU0XIV, HV_BINOP_DIVIDE, 1, m, &cBinop_yMkU0XIV_sendMessage);
}

void Heavy_DimensionIV::cBinop_5O9qNz89_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_6lges8DF_sendMessage);
}

void Heavy_DimensionIV::cBinop_6lges8DF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JQJD60lr, m);
}

void Heavy_DimensionIV::cMsg_wQYXbe2L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9iruH3f4_sendMessage);
}

void Heavy_DimensionIV::cBinop_9iruH3f4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_pRUguPuN_sendMessage);
}

void Heavy_DimensionIV::cBinop_IPQXDs6F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_NV2y1WIm, m);
}

void Heavy_DimensionIV::cBinop_i8zJRthA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_jI9XpLTI_sendMessage);
}

void Heavy_DimensionIV::cBinop_jI9XpLTI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yMkU0XIV, HV_BINOP_DIVIDE, 0, m, &cBinop_yMkU0XIV_sendMessage);
}

void Heavy_DimensionIV::cBinop_yMkU0XIV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wQYXbe2L_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_AIDj3HCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_3qtc65ub_sendMessage);
}

void Heavy_DimensionIV::cBinop_3qtc65ub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_umKHrAKL_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Wp98Qz0G_sendMessage);
}

void Heavy_DimensionIV::cVar_fk67sb1Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_itZ0Emec_sendMessage);
}

void Heavy_DimensionIV::cMsg_7ceqE6XK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cOKn9a2W_sendMessage);
}

void Heavy_DimensionIV::cSystem_cOKn9a2W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LZLoLM2n, HV_BINOP_DIVIDE, 1, m, &cBinop_LZLoLM2n_sendMessage);
}

void Heavy_DimensionIV::cBinop_umKHrAKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_rSEbg7FA_sendMessage);
}

void Heavy_DimensionIV::cBinop_rSEbg7FA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_P2sO80us, m);
}

void Heavy_DimensionIV::cMsg_HtMPmX5U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_qz2cfGcp_sendMessage);
}

void Heavy_DimensionIV::cBinop_qz2cfGcp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_AIDj3HCE_sendMessage);
}

void Heavy_DimensionIV::cBinop_Wp98Qz0G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_WZYwd31E, m);
}

void Heavy_DimensionIV::cBinop_itZ0Emec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_DBFfVJsC_sendMessage);
}

void Heavy_DimensionIV::cBinop_DBFfVJsC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LZLoLM2n, HV_BINOP_DIVIDE, 0, m, &cBinop_LZLoLM2n_sendMessage);
}

void Heavy_DimensionIV::cBinop_LZLoLM2n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HtMPmX5U_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cVar_zr7ynmC4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DiRPUGqL, HV_BINOP_MULTIPLY, 0, m, &cBinop_DiRPUGqL_sendMessage);
}

void Heavy_DimensionIV::cMsg_LSuQrKv8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ARSmKHCs_sendMessage);
}

void Heavy_DimensionIV::cSystem_ARSmKHCs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qSaZrBs0_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_DiRPUGqL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_aPrG8EA9_sendMessage);
}

void Heavy_DimensionIV::cBinop_4W0yZ3QE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DiRPUGqL, HV_BINOP_MULTIPLY, 1, m, &cBinop_DiRPUGqL_sendMessage);
}

void Heavy_DimensionIV::cMsg_qSaZrBs0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_4W0yZ3QE_sendMessage);
}

void Heavy_DimensionIV::cBinop_aPrG8EA9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_5EmPiMXo_sendMessage);
}

void Heavy_DimensionIV::cBinop_5EmPiMXo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_g85sXo2m_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ngFQODQs, m);
}

void Heavy_DimensionIV::cBinop_g85sXo2m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fnC1c8KG, m);
}

void Heavy_DimensionIV::cVar_r8krws8O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ygS1wRce_sendMessage);
}

void Heavy_DimensionIV::cSwitchcase_6pPyPfLg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LT1s9r5Z_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Q8uK8QAs_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_D5tdbeJj_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EFlOhibu_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_DimensionIV::cCast_LT1s9r5Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_VXBPItKk_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_Q8uK8QAs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_GNVapnaB_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_D5tdbeJj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Yiq35WP3_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_EFlOhibu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_3V72UEkq_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_y7D5pZ07_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_EwF9vw9C, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_opxBLxaz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_3Cjtbgf1, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_8uY2pRKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_aKLKX3ve, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_aFQzJkDR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_KBBCAjPC, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_R2fLDs3c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Razmq9WL, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_jZcj8SwX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BiLQ2542_sendMessage);
}

void Heavy_DimensionIV::cSystem_BiLQ2542_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RO6YyxjL, HV_BINOP_DIVIDE, 1, m, &cBinop_RO6YyxjL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YZaF7bDj_sendMessage);
}

void Heavy_DimensionIV::cUnop_yfHALrsN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_FJOMTmUf_sendMessage);
}

void Heavy_DimensionIV::cMsg_ZrriNDsX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_yfHALrsN_sendMessage);
}

void Heavy_DimensionIV::cBinop_FJOMTmUf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RO6YyxjL, HV_BINOP_DIVIDE, 0, m, &cBinop_RO6YyxjL_sendMessage);
}

void Heavy_DimensionIV::cCast_YZaF7bDj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZrriNDsX_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_RO6YyxjL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VdNwHDoi, HV_BINOP_MULTIPLY, 1, m, &cBinop_VdNwHDoi_sendMessage);
}

void Heavy_DimensionIV::cBinop_VdNwHDoi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XtZ2PclQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6z15AVal_sendMessage);
}

void Heavy_DimensionIV::cUnop_3zWSXDzn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_nuVYM7p2_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cUnop_nDN1XjHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_VoedYVdT_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_v5S84HNs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_RDLhQSaR_sendMessage);
}

void Heavy_DimensionIV::cBinop_RDLhQSaR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VdNwHDoi, HV_BINOP_MULTIPLY, 0, m, &cBinop_VdNwHDoi_sendMessage);
}

void Heavy_DimensionIV::cBinop_wdM5nsua_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_DZ64Hhc2_sendMessage);
}

void Heavy_DimensionIV::cBinop_DZ64Hhc2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lOgjBnBk_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cVar_OtAPS4G9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9E7QbmX4_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_gaWkpWU9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Z1MuTuJE_sendMessage);
}

void Heavy_DimensionIV::cBinop_iSWst8zP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7fs6XTkl, HV_BINOP_ADD, 0, m, &cBinop_7fs6XTkl_sendMessage);
}

void Heavy_DimensionIV::cBinop_tiVMRctl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7fs6XTkl, HV_BINOP_ADD, 1, m, &cBinop_7fs6XTkl_sendMessage);
}

void Heavy_DimensionIV::cCast_mt9lxH6K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_tiVMRctl_sendMessage);
}

void Heavy_DimensionIV::cCast_anZp2l9x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_gaWkpWU9_sendMessage);
}

void Heavy_DimensionIV::cCast_gOqfTv1D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aStWqT26, HV_BINOP_MULTIPLY, 1, m, &cBinop_aStWqT26_sendMessage);
}

void Heavy_DimensionIV::cBinop_aStWqT26_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k3gZDBOF, HV_BINOP_MULTIPLY, 1, m, &cBinop_k3gZDBOF_sendMessage);
}

void Heavy_DimensionIV::cBinop_7fs6XTkl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eZTyTlLs, HV_BINOP_ADD, 0, m, &cBinop_eZTyTlLs_sendMessage);
}

void Heavy_DimensionIV::cBinop_Z1MuTuJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iSWst8zP, HV_BINOP_MULTIPLY, 1, m, &cBinop_iSWst8zP_sendMessage);
}

void Heavy_DimensionIV::cBinop_eZTyTlLs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aStWqT26, HV_BINOP_MULTIPLY, 0, m, &cBinop_aStWqT26_sendMessage);
}

void Heavy_DimensionIV::cBinop_unRbukuo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H2xcANb9, HV_BINOP_ADD, 1, m, &cBinop_H2xcANb9_sendMessage);
}

void Heavy_DimensionIV::cBinop_Bzi8EQF5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_QismP9eO_sendMessage);
}

void Heavy_DimensionIV::cBinop_EIFIujL2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H2xcANb9, HV_BINOP_ADD, 0, m, &cBinop_H2xcANb9_sendMessage);
}

void Heavy_DimensionIV::cCast_IxADBQDK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_unRbukuo_sendMessage);
}

void Heavy_DimensionIV::cCast_4wIdumEa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_lN9FlFTP_sendMessage);
}

void Heavy_DimensionIV::cCast_68VBkgnx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Bzi8EQF5_sendMessage);
}

void Heavy_DimensionIV::cBinop_lN9FlFTP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0xNfqNaf, HV_BINOP_MULTIPLY, 1, m, &cBinop_0xNfqNaf_sendMessage);
}

void Heavy_DimensionIV::cBinop_0xNfqNaf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DvhMKtZw, HV_BINOP_MULTIPLY, 1, m, &cBinop_DvhMKtZw_sendMessage);
}

void Heavy_DimensionIV::cBinop_H2xcANb9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0xNfqNaf, HV_BINOP_MULTIPLY, 0, m, &cBinop_0xNfqNaf_sendMessage);
}

void Heavy_DimensionIV::cBinop_QismP9eO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EIFIujL2, HV_BINOP_MULTIPLY, 1, m, &cBinop_EIFIujL2_sendMessage);
}

void Heavy_DimensionIV::cBinop_aJu0QqHY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_cO0A7sFZ_sendMessage);
}

void Heavy_DimensionIV::cBinop_Fur9h1c3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_l75mDHNd, HV_BINOP_ADD, 0, m, &cBinop_l75mDHNd_sendMessage);
}

void Heavy_DimensionIV::cBinop_l75mDHNd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CfZsUHx3, HV_BINOP_SUBTRACT, 0, m, &cBinop_CfZsUHx3_sendMessage);
}

void Heavy_DimensionIV::cBinop_1ytma2Hv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_l75mDHNd, HV_BINOP_ADD, 1, m, &cBinop_l75mDHNd_sendMessage);
}

void Heavy_DimensionIV::cBinop_CfZsUHx3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_phn5aI2c, HV_BINOP_MULTIPLY, 0, m, &cBinop_phn5aI2c_sendMessage);
}

void Heavy_DimensionIV::cCast_7aJHFNQu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_phn5aI2c, HV_BINOP_MULTIPLY, 1, m, &cBinop_phn5aI2c_sendMessage);
}

void Heavy_DimensionIV::cCast_SLuIMgQU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_1ytma2Hv_sendMessage);
}

void Heavy_DimensionIV::cCast_Plmg0UqD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_aJu0QqHY_sendMessage);
}

void Heavy_DimensionIV::cBinop_phn5aI2c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uqoDXMtC, HV_BINOP_MULTIPLY, 1, m, &cBinop_uqoDXMtC_sendMessage);
}

void Heavy_DimensionIV::cBinop_cO0A7sFZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fur9h1c3, HV_BINOP_MULTIPLY, 1, m, &cBinop_Fur9h1c3_sendMessage);
}

void Heavy_DimensionIV::cBinop_0VfOGxgI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GTH09YCm, HV_BINOP_ADD, 1, m, &cBinop_GTH09YCm_sendMessage);
}

void Heavy_DimensionIV::cBinop_GTH09YCm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_2znIalej_sendMessage);
}

void Heavy_DimensionIV::cBinop_jklj9EiS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NpHbWuNT, HV_BINOP_MULTIPLY, 1, m, &cBinop_NpHbWuNT_sendMessage);
}

void Heavy_DimensionIV::cBinop_NpHbWuNT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GTH09YCm, HV_BINOP_ADD, 0, m, &cBinop_GTH09YCm_sendMessage);
}

void Heavy_DimensionIV::cCast_NHwydr0x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_jklj9EiS_sendMessage);
}

void Heavy_DimensionIV::cCast_RdOz7nz9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_0VfOGxgI_sendMessage);
}

void Heavy_DimensionIV::cBinop_2znIalej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_w2xEwFs2, HV_BINOP_MULTIPLY, 1, m, &cBinop_w2xEwFs2_sendMessage);
}

void Heavy_DimensionIV::cBinop_YuNuB0Pz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6LIBMKOy, HV_BINOP_MULTIPLY, 1, m, &cBinop_6LIBMKOy_sendMessage);
}

void Heavy_DimensionIV::cBinop_6LIBMKOy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EUXrHFlC, HV_BINOP_ADD, 0, m, &cBinop_EUXrHFlC_sendMessage);
}

void Heavy_DimensionIV::cBinop_EUXrHFlC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4vb5885r, HV_BINOP_SUBTRACT, 0, m, &cBinop_4vb5885r_sendMessage);
}

void Heavy_DimensionIV::cBinop_Mh6iFSWy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EUXrHFlC, HV_BINOP_ADD, 1, m, &cBinop_EUXrHFlC_sendMessage);
}

void Heavy_DimensionIV::cCast_POainZH6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Mh6iFSWy_sendMessage);
}

void Heavy_DimensionIV::cCast_ohwPfv23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_YuNuB0Pz_sendMessage);
}

void Heavy_DimensionIV::cBinop_4vb5885r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wPCeeOip, HV_BINOP_MULTIPLY, 1, m, &cBinop_wPCeeOip_sendMessage);
}

void Heavy_DimensionIV::cBinop_iXq2AY6c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_QjtYfwsV_sendMessage);
}

void Heavy_DimensionIV::cBinop_QjtYfwsV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_qzXwgHK3_sendMessage);
}

void Heavy_DimensionIV::cBinop_SEdWne0r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zBua9ev9, HV_BINOP_MULTIPLY, 1, m, &cBinop_zBua9ev9_sendMessage);
}

void Heavy_DimensionIV::cBinop_zBua9ev9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tf1tI6ww, HV_BINOP_ADD, 0, m, &cBinop_tf1tI6ww_sendMessage);
}

void Heavy_DimensionIV::cBinop_tf1tI6ww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k1WfKdr2, HV_BINOP_ADD, 0, m, &cBinop_k1WfKdr2_sendMessage);
}

void Heavy_DimensionIV::cBinop_NeEpt8JS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tf1tI6ww, HV_BINOP_ADD, 1, m, &cBinop_tf1tI6ww_sendMessage);
}

void Heavy_DimensionIV::cCast_gR46PKCh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_SEdWne0r_sendMessage);
}

void Heavy_DimensionIV::cCast_WK2F3L2O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_NeEpt8JS_sendMessage);
}

void Heavy_DimensionIV::cBinop_k1WfKdr2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OtAPS4G9, 1, m, &cVar_OtAPS4G9_sendMessage);
}

void Heavy_DimensionIV::cVar_4kMxlTVb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qiJhGkDE_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_v5S84HNs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ItlJZkC7_sendMessage);
}

void Heavy_DimensionIV::cVar_doQQqY2E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_wdM5nsua_sendMessage);
}

void Heavy_DimensionIV::cVar_SCg9geZA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_iXq2AY6c_sendMessage);
}

void Heavy_DimensionIV::cUnop_wZNmzX2A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_lE6LAPKn_sendMessage);
}

void Heavy_DimensionIV::cCast_6z15AVal_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_nDN1XjHQ_sendMessage);
}

void Heavy_DimensionIV::cCast_XtZ2PclQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_3zWSXDzn_sendMessage);
}

void Heavy_DimensionIV::cSend_nuVYM7p2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_tfflU9Xl_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_VoedYVdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IRfsQqYY_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_1RwBZYrO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DimensionIV::cMsg_lOgjBnBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_OBhi97iv_sendMessage);
}

void Heavy_DimensionIV::cBinop_OBhi97iv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vM9r4vy4, HV_BINOP_MULTIPLY, 1, m, &cBinop_vM9r4vy4_sendMessage);
}

void Heavy_DimensionIV::cBinop_vM9r4vy4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_kXRlTEYX_sendMessage);
}

void Heavy_DimensionIV::cBinop_kXRlTEYX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eg2j4pyI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yhkfNPWF_sendMessage);
}

void Heavy_DimensionIV::cMsg_9E7QbmX4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_RX2lBZ6Q_sendMessage);
}

void Heavy_DimensionIV::cBinop_RX2lBZ6Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_I00e4GBm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_x8JHvDEa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_C1sTYqJE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lq9sYKWq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kum5aYIl_sendMessage);
}

void Heavy_DimensionIV::cBinop_k3gZDBOF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_y7D5pZ07_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_DvhMKtZw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_opxBLxaz_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_uqoDXMtC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8uY2pRKy_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_w2xEwFs2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aFQzJkDR_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_wPCeeOip_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_R2fLDs3c_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_ePaf35BN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_doQQqY2E, 1, m, &cVar_doQQqY2E_sendMessage);
}

void Heavy_DimensionIV::cCast_u5dzze08_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4kMxlTVb, 0, m, &cVar_4kMxlTVb_sendMessage);
}

void Heavy_DimensionIV::cCast_ItlJZkC7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OtAPS4G9, 0, m, &cVar_OtAPS4G9_sendMessage);
}

void Heavy_DimensionIV::cCast_qiJhGkDE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_doQQqY2E, 0, m, &cVar_doQQqY2E_sendMessage);
}

void Heavy_DimensionIV::cSend_kzSFKUfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_K20uXYwn_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_qzXwgHK3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rL0Sqayy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pfKAjN9G_sendMessage);
}

void Heavy_DimensionIV::cCast_rL0Sqayy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KuwGwJCS, HV_BINOP_POW, 1, m, &cBinop_KuwGwJCS_sendMessage);
}

void Heavy_DimensionIV::cCast_pfKAjN9G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wymDq3PZ_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_wymDq3PZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_KuwGwJCS, HV_BINOP_POW, 0, m, &cBinop_KuwGwJCS_sendMessage);
}

void Heavy_DimensionIV::cBinop_KuwGwJCS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Qezh7m4Y_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9g3y5xe1_sendMessage);
}

void Heavy_DimensionIV::cCast_D3qRSH4o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SCg9geZA, 0, m, &cVar_SCg9geZA_sendMessage);
}

void Heavy_DimensionIV::cCast_7LYIolrO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4kMxlTVb, 0, m, &cVar_4kMxlTVb_sendMessage);
}

void Heavy_DimensionIV::cCast_mJd38gu3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SCg9geZA, 0, m, &cVar_SCg9geZA_sendMessage);
}

void Heavy_DimensionIV::cCast_RIb8HTdk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4kMxlTVb, 0, m, &cVar_4kMxlTVb_sendMessage);
}

void Heavy_DimensionIV::cBinop_lE6LAPKn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rMpHgdzd, HV_BINOP_MULTIPLY, 1, m, &cBinop_rMpHgdzd_sendMessage);
}

void Heavy_DimensionIV::cBinop_rMpHgdzd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ulpJYuAX_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_eg2j4pyI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_1RwBZYrO_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_yhkfNPWF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rMpHgdzd, HV_BINOP_MULTIPLY, 0, m, &cBinop_rMpHgdzd_sendMessage);
}

void Heavy_DimensionIV::cCast_kum5aYIl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_k3gZDBOF, HV_BINOP_MULTIPLY, 0, m, &cBinop_k3gZDBOF_sendMessage);
}

void Heavy_DimensionIV::cCast_x8JHvDEa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_w2xEwFs2, HV_BINOP_MULTIPLY, 0, m, &cBinop_w2xEwFs2_sendMessage);
}

void Heavy_DimensionIV::cCast_lq9sYKWq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DvhMKtZw, HV_BINOP_MULTIPLY, 0, m, &cBinop_DvhMKtZw_sendMessage);
}

void Heavy_DimensionIV::cCast_C1sTYqJE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uqoDXMtC, HV_BINOP_MULTIPLY, 0, m, &cBinop_uqoDXMtC_sendMessage);
}

void Heavy_DimensionIV::cCast_I00e4GBm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wPCeeOip, HV_BINOP_MULTIPLY, 0, m, &cBinop_wPCeeOip_sendMessage);
}

void Heavy_DimensionIV::cCast_Qezh7m4Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kzSFKUfW_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_9g3y5xe1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_wZNmzX2A_sendMessage);
}

void Heavy_DimensionIV::cSend_ulpJYuAX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_g63wBi1T_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_SXp0wvn1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_uB7lSxTk, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_nvzE9724_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_nMRjZB6K, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_OoHpGV69_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LAlpPhRD, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_XUp9ROoA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ytn1ADqI, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_7rygx0eO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_VORyXAyL, 0, m, NULL);
}

void Heavy_DimensionIV::cMsg_SOfXMYZI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_t4GBrs4w_sendMessage);
}

void Heavy_DimensionIV::cSystem_t4GBrs4w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R1ijYM2f, HV_BINOP_DIVIDE, 1, m, &cBinop_R1ijYM2f_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tTSt8098_sendMessage);
}

void Heavy_DimensionIV::cUnop_qY1adnrs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_ACNN7Bew_sendMessage);
}

void Heavy_DimensionIV::cMsg_opythOtw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_qY1adnrs_sendMessage);
}

void Heavy_DimensionIV::cBinop_ACNN7Bew_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_R1ijYM2f, HV_BINOP_DIVIDE, 0, m, &cBinop_R1ijYM2f_sendMessage);
}

void Heavy_DimensionIV::cCast_tTSt8098_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_opythOtw_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_R1ijYM2f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f9ZSJy6t, HV_BINOP_MULTIPLY, 1, m, &cBinop_f9ZSJy6t_sendMessage);
}

void Heavy_DimensionIV::cBinop_f9ZSJy6t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3oJ1ZVJ2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AYBOESOA_sendMessage);
}

void Heavy_DimensionIV::cUnop_oJmnnLPF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_lK68ydsd_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cUnop_Oszy1WoD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_RCWoz4Ik_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_uH6cicrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_zcy4ZbQN_sendMessage);
}

void Heavy_DimensionIV::cBinop_zcy4ZbQN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f9ZSJy6t, HV_BINOP_MULTIPLY, 0, m, &cBinop_f9ZSJy6t_sendMessage);
}

void Heavy_DimensionIV::cBinop_hamJct9S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_k4ATIory_sendMessage);
}

void Heavy_DimensionIV::cBinop_k4ATIory_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_O4ysQL0i_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cVar_8TLS8bIu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B9gj6mxf_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_ylrTmOgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Std5GclW_sendMessage);
}

void Heavy_DimensionIV::cBinop_KDYv3ksP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H845thZj, HV_BINOP_ADD, 0, m, &cBinop_H845thZj_sendMessage);
}

void Heavy_DimensionIV::cBinop_XSntphCJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H845thZj, HV_BINOP_ADD, 1, m, &cBinop_H845thZj_sendMessage);
}

void Heavy_DimensionIV::cCast_YpCfKFuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ylrTmOgV_sendMessage);
}

void Heavy_DimensionIV::cCast_iFnJq0lQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ttmj0JMo, HV_BINOP_MULTIPLY, 1, m, &cBinop_ttmj0JMo_sendMessage);
}

void Heavy_DimensionIV::cCast_XPCYQQAR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_XSntphCJ_sendMessage);
}

void Heavy_DimensionIV::cBinop_ttmj0JMo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JsdJdQqz, HV_BINOP_MULTIPLY, 1, m, &cBinop_JsdJdQqz_sendMessage);
}

void Heavy_DimensionIV::cBinop_H845thZj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IlZBpyv0, HV_BINOP_ADD, 0, m, &cBinop_IlZBpyv0_sendMessage);
}

void Heavy_DimensionIV::cBinop_Std5GclW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KDYv3ksP, HV_BINOP_MULTIPLY, 1, m, &cBinop_KDYv3ksP_sendMessage);
}

void Heavy_DimensionIV::cBinop_IlZBpyv0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ttmj0JMo, HV_BINOP_MULTIPLY, 0, m, &cBinop_ttmj0JMo_sendMessage);
}

void Heavy_DimensionIV::cBinop_VZUoNcGC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_whxQ0lnT, HV_BINOP_ADD, 1, m, &cBinop_whxQ0lnT_sendMessage);
}

void Heavy_DimensionIV::cBinop_WKhcvasM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_llGPLCZw_sendMessage);
}

void Heavy_DimensionIV::cBinop_4B7ByUza_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_whxQ0lnT, HV_BINOP_ADD, 0, m, &cBinop_whxQ0lnT_sendMessage);
}

void Heavy_DimensionIV::cCast_41ku8fok_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_VZUoNcGC_sendMessage);
}

void Heavy_DimensionIV::cCast_qyEvQfGL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_exE2SYPn_sendMessage);
}

void Heavy_DimensionIV::cCast_JXN0VkGv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_WKhcvasM_sendMessage);
}

void Heavy_DimensionIV::cBinop_exE2SYPn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PCgPMQla, HV_BINOP_MULTIPLY, 1, m, &cBinop_PCgPMQla_sendMessage);
}

void Heavy_DimensionIV::cBinop_PCgPMQla_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J0MBdNCq, HV_BINOP_MULTIPLY, 1, m, &cBinop_J0MBdNCq_sendMessage);
}

void Heavy_DimensionIV::cBinop_whxQ0lnT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PCgPMQla, HV_BINOP_MULTIPLY, 0, m, &cBinop_PCgPMQla_sendMessage);
}

void Heavy_DimensionIV::cBinop_llGPLCZw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4B7ByUza, HV_BINOP_MULTIPLY, 1, m, &cBinop_4B7ByUza_sendMessage);
}

void Heavy_DimensionIV::cBinop_X546aAy9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_nkh42fkf_sendMessage);
}

void Heavy_DimensionIV::cBinop_Agf9kIP8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CxG16bcZ, HV_BINOP_ADD, 0, m, &cBinop_CxG16bcZ_sendMessage);
}

void Heavy_DimensionIV::cBinop_CxG16bcZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IvYFQ12F, HV_BINOP_SUBTRACT, 0, m, &cBinop_IvYFQ12F_sendMessage);
}

void Heavy_DimensionIV::cBinop_M92YnzO7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CxG16bcZ, HV_BINOP_ADD, 1, m, &cBinop_CxG16bcZ_sendMessage);
}

void Heavy_DimensionIV::cBinop_IvYFQ12F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zUAgncfB, HV_BINOP_MULTIPLY, 0, m, &cBinop_zUAgncfB_sendMessage);
}

void Heavy_DimensionIV::cCast_NfhFsdLu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_X546aAy9_sendMessage);
}

void Heavy_DimensionIV::cCast_gCqxspQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zUAgncfB, HV_BINOP_MULTIPLY, 1, m, &cBinop_zUAgncfB_sendMessage);
}

void Heavy_DimensionIV::cCast_wmJ6qprI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_M92YnzO7_sendMessage);
}

void Heavy_DimensionIV::cBinop_zUAgncfB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MDOxMBtd, HV_BINOP_MULTIPLY, 1, m, &cBinop_MDOxMBtd_sendMessage);
}

void Heavy_DimensionIV::cBinop_nkh42fkf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Agf9kIP8, HV_BINOP_MULTIPLY, 1, m, &cBinop_Agf9kIP8_sendMessage);
}

void Heavy_DimensionIV::cBinop_S8lDEzUO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2VZc7Kd7, HV_BINOP_ADD, 1, m, &cBinop_2VZc7Kd7_sendMessage);
}

void Heavy_DimensionIV::cBinop_2VZc7Kd7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_dAFoaYhR_sendMessage);
}

void Heavy_DimensionIV::cBinop_NuHAkzAA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_igbH0AcT, HV_BINOP_MULTIPLY, 1, m, &cBinop_igbH0AcT_sendMessage);
}

void Heavy_DimensionIV::cBinop_igbH0AcT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2VZc7Kd7, HV_BINOP_ADD, 0, m, &cBinop_2VZc7Kd7_sendMessage);
}

void Heavy_DimensionIV::cCast_XaKcsQNh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_S8lDEzUO_sendMessage);
}

void Heavy_DimensionIV::cCast_040mkYWT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_NuHAkzAA_sendMessage);
}

void Heavy_DimensionIV::cBinop_dAFoaYhR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gTkkBGHb, HV_BINOP_MULTIPLY, 1, m, &cBinop_gTkkBGHb_sendMessage);
}

void Heavy_DimensionIV::cBinop_gn4Hez24_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fpt04m0J, HV_BINOP_MULTIPLY, 1, m, &cBinop_fpt04m0J_sendMessage);
}

void Heavy_DimensionIV::cBinop_fpt04m0J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HxoJwutw, HV_BINOP_ADD, 0, m, &cBinop_HxoJwutw_sendMessage);
}

void Heavy_DimensionIV::cBinop_HxoJwutw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_M68LOt5P, HV_BINOP_SUBTRACT, 0, m, &cBinop_M68LOt5P_sendMessage);
}

void Heavy_DimensionIV::cBinop_9xaiJD49_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HxoJwutw, HV_BINOP_ADD, 1, m, &cBinop_HxoJwutw_sendMessage);
}

void Heavy_DimensionIV::cCast_tEyR5JjE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_9xaiJD49_sendMessage);
}

void Heavy_DimensionIV::cCast_y0bIOhwL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_gn4Hez24_sendMessage);
}

void Heavy_DimensionIV::cBinop_M68LOt5P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lFGysaKs, HV_BINOP_MULTIPLY, 1, m, &cBinop_lFGysaKs_sendMessage);
}

void Heavy_DimensionIV::cBinop_Ae1WWGHa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_RAlqYg4q_sendMessage);
}

void Heavy_DimensionIV::cBinop_RAlqYg4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_AiztzaKF_sendMessage);
}

void Heavy_DimensionIV::cBinop_FKlB8K8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_38snZw8e, HV_BINOP_MULTIPLY, 1, m, &cBinop_38snZw8e_sendMessage);
}

void Heavy_DimensionIV::cBinop_38snZw8e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6cynxSv5, HV_BINOP_ADD, 0, m, &cBinop_6cynxSv5_sendMessage);
}

void Heavy_DimensionIV::cBinop_6cynxSv5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vrM2l9kb, HV_BINOP_ADD, 0, m, &cBinop_vrM2l9kb_sendMessage);
}

void Heavy_DimensionIV::cBinop_OCYIWwiK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6cynxSv5, HV_BINOP_ADD, 1, m, &cBinop_6cynxSv5_sendMessage);
}

void Heavy_DimensionIV::cCast_PzwjdJt4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_OCYIWwiK_sendMessage);
}

void Heavy_DimensionIV::cCast_JKhrKaO4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_FKlB8K8E_sendMessage);
}

void Heavy_DimensionIV::cBinop_vrM2l9kb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8TLS8bIu, 1, m, &cVar_8TLS8bIu_sendMessage);
}

void Heavy_DimensionIV::cVar_TXu1f974_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nX8dDL0h_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_uH6cicrl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VNKlb6oN_sendMessage);
}

void Heavy_DimensionIV::cVar_E2E3ik37_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_hamJct9S_sendMessage);
}

void Heavy_DimensionIV::cVar_6U4XPjTJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_Ae1WWGHa_sendMessage);
}

void Heavy_DimensionIV::cUnop_fwjZjvtT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_5a8lqpNP_sendMessage);
}

void Heavy_DimensionIV::cCast_3oJ1ZVJ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_oJmnnLPF_sendMessage);
}

void Heavy_DimensionIV::cCast_AYBOESOA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_Oszy1WoD_sendMessage);
}

void Heavy_DimensionIV::cSend_lK68ydsd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Aajuu9tL_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_RCWoz4Ik_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_MyHcGTam_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_e8wBWbtf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_DimensionIV::cMsg_O4ysQL0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_t7FDr6M5_sendMessage);
}

void Heavy_DimensionIV::cBinop_t7FDr6M5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z8rdMpDS, HV_BINOP_MULTIPLY, 1, m, &cBinop_z8rdMpDS_sendMessage);
}

void Heavy_DimensionIV::cBinop_z8rdMpDS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_kdqry4St_sendMessage);
}

void Heavy_DimensionIV::cBinop_kdqry4St_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_P3nx8JTy_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Lw9pVCdf_sendMessage);
}

void Heavy_DimensionIV::cMsg_B9gj6mxf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Pr201AcF_sendMessage);
}

void Heavy_DimensionIV::cBinop_Pr201AcF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hSpjOMvt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ou4MTFWQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ryAJOlk1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lYJwFrHc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uCaOhXJx_sendMessage);
}

void Heavy_DimensionIV::cBinop_JsdJdQqz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SXp0wvn1_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_J0MBdNCq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nvzE9724_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_MDOxMBtd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OoHpGV69_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_gTkkBGHb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XUp9ROoA_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_lFGysaKs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7rygx0eO_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_0353Gf6y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TXu1f974, 0, m, &cVar_TXu1f974_sendMessage);
}

void Heavy_DimensionIV::cCast_oBvGuyyK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_E2E3ik37, 1, m, &cVar_E2E3ik37_sendMessage);
}

void Heavy_DimensionIV::cCast_nX8dDL0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_E2E3ik37, 0, m, &cVar_E2E3ik37_sendMessage);
}

void Heavy_DimensionIV::cCast_VNKlb6oN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8TLS8bIu, 0, m, &cVar_8TLS8bIu_sendMessage);
}

void Heavy_DimensionIV::cSend_SN918TAJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HWa2xwnp_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_AiztzaKF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YqPbb93D_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZSvgv3by_sendMessage);
}

void Heavy_DimensionIV::cCast_YqPbb93D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bVUEf1Q2, HV_BINOP_POW, 1, m, &cBinop_bVUEf1Q2_sendMessage);
}

void Heavy_DimensionIV::cCast_ZSvgv3by_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rx6DnRkq_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_rx6DnRkq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bVUEf1Q2, HV_BINOP_POW, 0, m, &cBinop_bVUEf1Q2_sendMessage);
}

void Heavy_DimensionIV::cBinop_bVUEf1Q2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jGGO34cm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CY6X65Cb_sendMessage);
}

void Heavy_DimensionIV::cCast_dtGhgu3c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TXu1f974, 0, m, &cVar_TXu1f974_sendMessage);
}

void Heavy_DimensionIV::cCast_oTGJAAuQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6U4XPjTJ, 0, m, &cVar_6U4XPjTJ_sendMessage);
}

void Heavy_DimensionIV::cCast_Sf32ceLi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TXu1f974, 0, m, &cVar_TXu1f974_sendMessage);
}

void Heavy_DimensionIV::cCast_ubegR7UN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6U4XPjTJ, 0, m, &cVar_6U4XPjTJ_sendMessage);
}

void Heavy_DimensionIV::cBinop_5a8lqpNP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zVfLIPyz, HV_BINOP_MULTIPLY, 1, m, &cBinop_zVfLIPyz_sendMessage);
}

void Heavy_DimensionIV::cBinop_zVfLIPyz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_SYMrRvwf_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_P3nx8JTy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_e8wBWbtf_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_Lw9pVCdf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zVfLIPyz, HV_BINOP_MULTIPLY, 0, m, &cBinop_zVfLIPyz_sendMessage);
}

void Heavy_DimensionIV::cCast_hSpjOMvt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lFGysaKs, HV_BINOP_MULTIPLY, 0, m, &cBinop_lFGysaKs_sendMessage);
}

void Heavy_DimensionIV::cCast_uCaOhXJx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JsdJdQqz, HV_BINOP_MULTIPLY, 0, m, &cBinop_JsdJdQqz_sendMessage);
}

void Heavy_DimensionIV::cCast_lYJwFrHc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J0MBdNCq, HV_BINOP_MULTIPLY, 0, m, &cBinop_J0MBdNCq_sendMessage);
}

void Heavy_DimensionIV::cCast_Ou4MTFWQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gTkkBGHb, HV_BINOP_MULTIPLY, 0, m, &cBinop_gTkkBGHb_sendMessage);
}

void Heavy_DimensionIV::cCast_ryAJOlk1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MDOxMBtd, HV_BINOP_MULTIPLY, 0, m, &cBinop_MDOxMBtd_sendMessage);
}

void Heavy_DimensionIV::cCast_jGGO34cm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_SN918TAJ_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_CY6X65Cb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_fwjZjvtT_sendMessage);
}

void Heavy_DimensionIV::cSend_SYMrRvwf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qsOQV3mp_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_1JN8NaM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_joSOYPQH_sendMessage);
}

void Heavy_DimensionIV::cBinop_joSOYPQH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_CTjy2UXw_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_IBqsynYq_sendMessage);
}

void Heavy_DimensionIV::cVar_aKvpDH2A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_CpsaA2sI_sendMessage);
}

void Heavy_DimensionIV::cMsg_urqzBapr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dqTr5DoP_sendMessage);
}

void Heavy_DimensionIV::cSystem_dqTr5DoP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_smxZ9sqt, HV_BINOP_DIVIDE, 1, m, &cBinop_smxZ9sqt_sendMessage);
}

void Heavy_DimensionIV::cBinop_CTjy2UXw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_GiTyRaBv_sendMessage);
}

void Heavy_DimensionIV::cBinop_GiTyRaBv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_O7IW3IV5, m);
}

void Heavy_DimensionIV::cMsg_lPLnwD67_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_g7PXFSln_sendMessage);
}

void Heavy_DimensionIV::cBinop_g7PXFSln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_1JN8NaM2_sendMessage);
}

void Heavy_DimensionIV::cBinop_IBqsynYq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kmYpzlIr, m);
}

void Heavy_DimensionIV::cBinop_CpsaA2sI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_XoNGd2BC_sendMessage);
}

void Heavy_DimensionIV::cBinop_XoNGd2BC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_smxZ9sqt, HV_BINOP_DIVIDE, 0, m, &cBinop_smxZ9sqt_sendMessage);
}

void Heavy_DimensionIV::cBinop_smxZ9sqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lPLnwD67_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_PSaVUBZx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_tzqMS9lZ_sendMessage);
}

void Heavy_DimensionIV::cBinop_tzqMS9lZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_PHS8meeM_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_7AynMYXa_sendMessage);
}

void Heavy_DimensionIV::cVar_pcRzw0aN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_4kJYBJQd_sendMessage);
}

void Heavy_DimensionIV::cMsg_ecNTPxCY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KhB5W6Tk_sendMessage);
}

void Heavy_DimensionIV::cSystem_KhB5W6Tk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OXEbEY5T, HV_BINOP_DIVIDE, 1, m, &cBinop_OXEbEY5T_sendMessage);
}

void Heavy_DimensionIV::cBinop_PHS8meeM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_z8dpixZr_sendMessage);
}

void Heavy_DimensionIV::cBinop_z8dpixZr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YNxt2fiY, m);
}

void Heavy_DimensionIV::cMsg_kiT6TXkt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_rhynuYcy_sendMessage);
}

void Heavy_DimensionIV::cBinop_rhynuYcy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_PSaVUBZx_sendMessage);
}

void Heavy_DimensionIV::cBinop_7AynMYXa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CB552tAL, m);
}

void Heavy_DimensionIV::cBinop_4kJYBJQd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_tJ6rdJeD_sendMessage);
}

void Heavy_DimensionIV::cBinop_tJ6rdJeD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OXEbEY5T, HV_BINOP_DIVIDE, 0, m, &cBinop_OXEbEY5T_sendMessage);
}

void Heavy_DimensionIV::cBinop_OXEbEY5T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kiT6TXkt_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_w0xiGEvy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_rvIjvNIy_sendMessage);
}

void Heavy_DimensionIV::cBinop_rvIjvNIy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RHEY35fl_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_n6erVs6L_sendMessage);
}

void Heavy_DimensionIV::cVar_SkvKVzbK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_IWFfK2pc_sendMessage);
}

void Heavy_DimensionIV::cMsg_RlVw10AJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MyGVNsU6_sendMessage);
}

void Heavy_DimensionIV::cSystem_MyGVNsU6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WZihE35t, HV_BINOP_DIVIDE, 1, m, &cBinop_WZihE35t_sendMessage);
}

void Heavy_DimensionIV::cBinop_RHEY35fl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_I4tSL7Qm_sendMessage);
}

void Heavy_DimensionIV::cBinop_I4tSL7Qm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xfTVqN0g, m);
}

void Heavy_DimensionIV::cMsg_Tin2SwBL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_U5Owe9wl_sendMessage);
}

void Heavy_DimensionIV::cBinop_U5Owe9wl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_w0xiGEvy_sendMessage);
}

void Heavy_DimensionIV::cBinop_n6erVs6L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_m0xkQik8, m);
}

void Heavy_DimensionIV::cBinop_IWFfK2pc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_ZCvL6X23_sendMessage);
}

void Heavy_DimensionIV::cBinop_ZCvL6X23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WZihE35t, HV_BINOP_DIVIDE, 0, m, &cBinop_WZihE35t_sendMessage);
}

void Heavy_DimensionIV::cBinop_WZihE35t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Tin2SwBL_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_Je7IpOMr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_TvZ8k3QG_sendMessage);
}

void Heavy_DimensionIV::cBinop_TvZ8k3QG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_NU6VelLR_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_cz2xQwHc_sendMessage);
}

void Heavy_DimensionIV::cVar_V9qCSXkk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_qUQyWSPE_sendMessage);
}

void Heavy_DimensionIV::cMsg_CSR0iEsQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kCYlv6JO_sendMessage);
}

void Heavy_DimensionIV::cSystem_kCYlv6JO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CeDGNAms, HV_BINOP_DIVIDE, 1, m, &cBinop_CeDGNAms_sendMessage);
}

void Heavy_DimensionIV::cBinop_NU6VelLR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_f6mIugDX_sendMessage);
}

void Heavy_DimensionIV::cBinop_f6mIugDX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3oQHHloH, m);
}

void Heavy_DimensionIV::cMsg_8ap6z4Ka_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_kwysoEGU_sendMessage);
}

void Heavy_DimensionIV::cBinop_kwysoEGU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_Je7IpOMr_sendMessage);
}

void Heavy_DimensionIV::cBinop_cz2xQwHc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HeNFq9DE, m);
}

void Heavy_DimensionIV::cBinop_qUQyWSPE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_Il9ArpwT_sendMessage);
}

void Heavy_DimensionIV::cBinop_Il9ArpwT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CeDGNAms, HV_BINOP_DIVIDE, 0, m, &cBinop_CeDGNAms_sendMessage);
}

void Heavy_DimensionIV::cBinop_CeDGNAms_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8ap6z4Ka_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cPack_BXKAoEkA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_OYGwvcDu, 0, m, NULL);
}

void Heavy_DimensionIV::cPack_yMnPGSnW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Gv3740XN, 0, m, NULL);
}

void Heavy_DimensionIV::cPack_OgEA4vqh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_hQegFPGC, 0, m, NULL);
}

void Heavy_DimensionIV::cPack_ZpPlxh3U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_JUHr2gZn, 0, m, NULL);
}

void Heavy_DimensionIV::cSwitchcase_kTDk0n3j_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KpW126bZ_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_y79ex3jY_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kj5s8L9O_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_DimensionIV::cCast_KpW126bZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MD1xic2Q_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_y79ex3jY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B7jmaxld_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cCast_kj5s8L9O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QUy3bZWC_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_hLC4N94u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_gv9TBkJY, 0, m);
}

void Heavy_DimensionIV::cMsg_vPAXM1bC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.5f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_gv9TBkJY, 0, m);
}

void Heavy_DimensionIV::cMsg_fT27Aw1Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 4.0f);
  cSend_ukX7L2VS_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_uauULPP1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cSend_ukX7L2VS_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_8UtDJGkM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3.0f);
  cSend_ukX7L2VS_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_417GSKhB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cSend_86QR0IWy_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_LxZ4BpPP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cSend_86QR0IWy_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_sCFYCDWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.0f);
  cSend_86QR0IWy_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_86QR0IWy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DVcQV3J7_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_ukX7L2VS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9vxux47J_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cBinop_ygS1wRce_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_6pPyPfLg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DimensionIV::cSend_VXBPItKk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WZfsy0Ji_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_GNVapnaB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Ktwz7l2y_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_Yiq35WP3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_yvwNx8L7_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_3V72UEkq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NTPOCoaH_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_qdIiXuz0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UTN5CIPR_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_pHfeNQnO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.8f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ue1zoG4Q, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_kyXbPozG, m);
}

void Heavy_DimensionIV::cMsg_iTjAu8FK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ue1zoG4Q, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_kyXbPozG, m);
}

void Heavy_DimensionIV::cMsg_1FHQGShu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.79f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_WfbFurj2, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Jv4ZW79C, m);
}

void Heavy_DimensionIV::cMsg_6pHLOea0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.63f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_x3YOyM54, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_7ZOWhnuL, m);
}

void Heavy_DimensionIV::cMsg_UDiVU0bE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.12f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_WfbFurj2, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Jv4ZW79C, m);
}

void Heavy_DimensionIV::cMsg_uST9cnhj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.5f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_x3YOyM54, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_7ZOWhnuL, m);
}

void Heavy_DimensionIV::cMsg_MD1xic2Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSend_X1hkJTHe_sendMessage(_c, 0, m);
  cSend_3OYIKhSy_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_B7jmaxld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.7f);
  cSend_X1hkJTHe_sendMessage(_c, 0, m);
  cSend_3OYIKhSy_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cMsg_QUy3bZWC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSend_X1hkJTHe_sendMessage(_c, 0, m);
  cSend_3OYIKhSy_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_3OYIKhSy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_gou6LN7Y_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cSend_X1hkJTHe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Rinu2ipK_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cReceive_Ovv0nud9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jZcj8SwX_sendMessage(_c, 0, m);
  cMsg_SOfXMYZI_sendMessage(_c, 0, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mJd38gu3_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RIb8HTdk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ubegR7UN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Sf32ceLi_sendMessage);
  cMsg_otaIcHRd_sendMessage(_c, 0, m);
  cMsg_RaOUgZM9_sendMessage(_c, 0, m);
  cMsg_74VUfpxo_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_OjkQlAMu, 0, m, &cVar_OjkQlAMu_sendMessage);
  cMsg_5s34BqA8_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7SJWDBrR, 0, m, &cVar_7SJWDBrR_sendMessage);
  cMsg_594jC1RG_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_UxFVhuSM, 0, m, &cVar_UxFVhuSM_sendMessage);
  cMsg_7lzvN3cw_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_S0fVuf0F, 0, m, &cVar_S0fVuf0F_sendMessage);
  cMsg_7ceqE6XK_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_fk67sb1Q, 0, m, &cVar_fk67sb1Q_sendMessage);
  cMsg_LSuQrKv8_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_zr7ynmC4, 0, m, &cVar_zr7ynmC4_sendMessage);
  cMsg_urqzBapr_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_aKvpDH2A, 0, m, &cVar_aKvpDH2A_sendMessage);
  cMsg_ecNTPxCY_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_pcRzw0aN, 0, m, &cVar_pcRzw0aN_sendMessage);
  cMsg_RlVw10AJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_SkvKVzbK, 0, m, &cVar_SkvKVzbK_sendMessage);
  cMsg_CSR0iEsQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_V9qCSXkk, 0, m, &cVar_V9qCSXkk_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_sti6GaYU, 0, m, &cVar_sti6GaYU_sendMessage);
  cMsg_s5dCV9jr_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Yb5EQpAe, 0, m, &cVar_Yb5EQpAe_sendMessage);
  cMsg_29phxAdB_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cReceive_DVcQV3J7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_OgEA4vqh, 0, m, &cPack_OgEA4vqh_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_ZpPlxh3U, 0, m, &cPack_ZpPlxh3U_sendMessage);
}

void Heavy_DimensionIV::cReceive_9vxux47J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_BXKAoEkA, 0, m, &cPack_BXKAoEkA_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_yMnPGSnW, 0, m, &cPack_yMnPGSnW_sendMessage);
}

void Heavy_DimensionIV::cReceive_WZfsy0Ji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fT27Aw1Q_sendMessage(_c, 0, m);
  cMsg_hLC4N94u_sendMessage(_c, 0, m);
  cMsg_417GSKhB_sendMessage(_c, 0, m);
  cSend_qdIiXuz0_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cReceive_Ktwz7l2y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hLC4N94u_sendMessage(_c, 0, m);
  cMsg_uauULPP1_sendMessage(_c, 0, m);
  cMsg_LxZ4BpPP_sendMessage(_c, 0, m);
  cSend_qdIiXuz0_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cReceive_yvwNx8L7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vPAXM1bC_sendMessage(_c, 0, m);
  cMsg_8UtDJGkM_sendMessage(_c, 0, m);
  cMsg_sCFYCDWs_sendMessage(_c, 0, m);
  cSend_qdIiXuz0_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cReceive_NTPOCoaH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vPAXM1bC_sendMessage(_c, 0, m);
  cMsg_8UtDJGkM_sendMessage(_c, 0, m);
  cMsg_sCFYCDWs_sendMessage(_c, 0, m);
  cMsg_UDiVU0bE_sendMessage(_c, 0, m);
  cMsg_iTjAu8FK_sendMessage(_c, 0, m);
  cMsg_uST9cnhj_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cReceive_UTN5CIPR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1FHQGShu_sendMessage(_c, 0, m);
  cMsg_pHfeNQnO_sendMessage(_c, 0, m);
  cMsg_6pHLOea0_sendMessage(_c, 0, m);
}

void Heavy_DimensionIV::cReceive_tfflU9Xl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vM9r4vy4, HV_BINOP_MULTIPLY, 0, m, &cBinop_vM9r4vy4_sendMessage);
}

void Heavy_DimensionIV::cReceive_IRfsQqYY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iSWst8zP, HV_BINOP_MULTIPLY, 0, m, &cBinop_iSWst8zP_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_EIFIujL2, HV_BINOP_MULTIPLY, 0, m, &cBinop_EIFIujL2_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fur9h1c3, HV_BINOP_MULTIPLY, 0, m, &cBinop_Fur9h1c3_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_NpHbWuNT, HV_BINOP_MULTIPLY, 0, m, &cBinop_NpHbWuNT_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_6LIBMKOy, HV_BINOP_MULTIPLY, 0, m, &cBinop_6LIBMKOy_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zBua9ev9, HV_BINOP_MULTIPLY, 0, m, &cBinop_zBua9ev9_sendMessage);
}

void Heavy_DimensionIV::cReceive_K20uXYwn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gOqfTv1D_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mt9lxH6K_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_anZp2l9x_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4wIdumEa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IxADBQDK_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_68VBkgnx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7aJHFNQu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SLuIMgQU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Plmg0UqD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RdOz7nz9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NHwydr0x_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_POainZH6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ohwPfv23_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WK2F3L2O_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gR46PKCh_sendMessage);
}

void Heavy_DimensionIV::cReceive_g63wBi1T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eZTyTlLs, HV_BINOP_ADD, 1, m, &cBinop_eZTyTlLs_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CfZsUHx3, HV_BINOP_SUBTRACT, 1, m, &cBinop_CfZsUHx3_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4vb5885r, HV_BINOP_SUBTRACT, 1, m, &cBinop_4vb5885r_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_k1WfKdr2, HV_BINOP_ADD, 1, m, &cBinop_k1WfKdr2_sendMessage);
}

void Heavy_DimensionIV::cReceive_Aajuu9tL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z8rdMpDS, HV_BINOP_MULTIPLY, 0, m, &cBinop_z8rdMpDS_sendMessage);
}

void Heavy_DimensionIV::cReceive_MyHcGTam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KDYv3ksP, HV_BINOP_MULTIPLY, 0, m, &cBinop_KDYv3ksP_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4B7ByUza, HV_BINOP_MULTIPLY, 0, m, &cBinop_4B7ByUza_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Agf9kIP8, HV_BINOP_MULTIPLY, 0, m, &cBinop_Agf9kIP8_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_igbH0AcT, HV_BINOP_MULTIPLY, 0, m, &cBinop_igbH0AcT_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fpt04m0J, HV_BINOP_MULTIPLY, 0, m, &cBinop_fpt04m0J_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_38snZw8e, HV_BINOP_MULTIPLY, 0, m, &cBinop_38snZw8e_sendMessage);
}

void Heavy_DimensionIV::cReceive_HWa2xwnp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iFnJq0lQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XPCYQQAR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YpCfKFuP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qyEvQfGL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_41ku8fok_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JXN0VkGv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gCqxspQx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wmJ6qprI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NfhFsdLu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XaKcsQNh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_040mkYWT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tEyR5JjE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_y0bIOhwL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PzwjdJt4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JKhrKaO4_sendMessage);
}

void Heavy_DimensionIV::cReceive_qsOQV3mp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IlZBpyv0, HV_BINOP_ADD, 1, m, &cBinop_IlZBpyv0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IvYFQ12F, HV_BINOP_SUBTRACT, 1, m, &cBinop_IvYFQ12F_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_M68LOt5P, HV_BINOP_SUBTRACT, 1, m, &cBinop_M68LOt5P_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_vrM2l9kb, HV_BINOP_ADD, 1, m, &cBinop_vrM2l9kb_sendMessage);
}

void Heavy_DimensionIV::cReceive_p0tGTyoj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_6pPyPfLg_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DimensionIV::cReceive_gou6LN7Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BK79nhe5, m);
}

void Heavy_DimensionIV::cReceive_jzkuGO0F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_kTDk0n3j_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_DimensionIV::cReceive_Rinu2ipK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_weW8q6tL, m);
}



/*
 * Code for expr~ implementation
 * Write out the generic implementation code
 */

 // per class code

 // per object code


/*
 * Context Process Implementation
 */

int Heavy_DimensionIV::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9;
  hv_bufferi_t Bi0, Bi1;

  // input and output vars
  hv_bufferf_t O0, O1;
  hv_bufferf_t I0, I1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));
    __hv_load_f(inputBuffers[1]+n, VOf(I1));

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_varread_f(&sVarf_kmYpzlIr, VOf(Bf0));
    __hv_rpole_f(&sRPole_Hk1DVyaL, VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_ecu2I6e6, VIf(Bf0), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_O7IW3IV5, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f);
    __hv_max_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_osnL14wT, VIf(Bf0));
    __hv_varread_f(&sVarf_CB552tAL, VOf(Bf1));
    __hv_rpole_f(&sRPole_UDRPfgrI, VIf(I1), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_JmPWqZNp, VIf(Bf1), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_YNxt2fiY, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_min_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f);
    __hv_max_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_tabwrite_f(&sTabwrite_TTFR6QQt, VIf(Bf1));
    __hv_phasor_k_f(&sPhasor_gv9TBkJY, VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_OYGwvcDu, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_aKrudoJh, VIf(Bf3));
    __hv_neg_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_Gv3740XN, VOf(Bf2));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varwrite_f(&sVarf_oDfE8iKF, VIf(Bf2));
    __hv_line_f(&sLine_hQegFPGC, VOf(Bf2));
    __hv_varread_f(&sVarf_aKrudoJh, VOf(Bf3));
    __hv_add_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_vpFjmoPF, VOf(Bf2));
    __hv_var_k_f_r(VOf(Bf4), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_FwqeyZID, VOf(Bf2));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_L50u10ow, VOf(Bf3));
    __hv_min_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf2));
    __hv_max_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_floor_f(VIf(Bf2), VOf(Bf4));
    __hv_varread_f(&sVarf_3n7pVHG9, VOf(Bf3));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_NeaOEtLe, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_Jqe5Lwba, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf5));
    __hv_sub_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf5), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_NV2y1WIm, VOf(Bf4));
    __hv_rpole_f(&sRPole_CjQRcB0O, VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_yWx5oFNM, VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_JQJD60lr, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_WZYwd31E, VOf(Bf3));
    __hv_rpole_f(&sRPole_jl78uaLX, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_wpTlAdY8, VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_P2sO80us, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_ngFQODQs, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_fnC1c8KG, VOf(Bf3));
    __hv_rpole_f(&sRPole_tECQyfVf, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_WfbFurj2, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varwrite_f(&sVarf_ERn2j7ia, VIf(Bf4));
    __hv_line_f(&sLine_JUHr2gZn, VOf(Bf4));
    __hv_varread_f(&sVarf_oDfE8iKF, VOf(Bf3));
    __hv_add_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_QRbfvIIY, VOf(Bf4));
    __hv_var_k_f_r(VOf(Bf5), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_oXyaisFD, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_KVsDFI0c, VOf(Bf3));
    __hv_min_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf5));
    __hv_varread_f(&sVarf_wViz1wbt, VOf(Bf3));
    __hv_zero_f(VOf(Bf2));
    __hv_lt_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_cast_fi(VIf(Bf2), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_RQIQH0Bh, VIi(Bi1), VOf(Bf2));
    __hv_tabread_if(&sTabread_bZQveiTj, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_CcwnwUQR, VOf(Bf5));
    __hv_rpole_f(&sRPole_lbiyLXRr, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Hm6cPLbC, VIf(Bf5), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_ZMv0FmlB, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_GXp5qpJM, VOf(Bf3));
    __hv_rpole_f(&sRPole_1DnlGnG2, VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_Y7zY6zYU, VIf(Bf3), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_09kNwRGO, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_aydw2AKi, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_Q70Whj02, VOf(Bf3));
    __hv_rpole_f(&sRPole_1LVZ9Rxa, VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Jv4ZW79C, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varwrite_f(&sVarf_RjRI0vfS, VIf(Bf5));
    __hv_varread_f(&sVarf_ERn2j7ia, VOf(Bf5));
    __hv_varread_f(&sVarf_BK79nhe5, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_neg_f(VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_kyXbPozG, VOf(Bf2));
    __hv_line_f(&sLine_EwF9vw9C, VOf(Bf4));
    __hv_line_f(&sLine_3Cjtbgf1, VOf(Bf6));
    __hv_line_f(&sLine_aKLKX3ve, VOf(Bf7));
    __hv_line_f(&sLine_KBBCAjPC, VOf(Bf8));
    __hv_line_f(&sLine_Razmq9WL, VOf(Bf9));
    __hv_biquad_f(&sBiquad_s_GTk7YBj7, VIf(Bf1), VIf(Bf4), VIf(Bf6), VIf(Bf7), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_x3YOyM54, VOf(Bf1));
    __hv_varread_f(&sVarf_RjRI0vfS, VOf(Bf8));
    __hv_fma_f(VIf(Bf9), VIf(Bf1), VIf(Bf8), VOf(Bf1));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_HeNFq9DE, VOf(Bf2));
    __hv_rpole_f(&sRPole_Y0WQo5kd, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_PdgMYJz2, VIf(Bf2), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_3oQHHloH, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf1), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_weW8q6tL, VOf(Bf1));
    __hv_mul_f(VIf(Bf8), VIf(Bf1), VOf(Bf1));
    __hv_neg_f(VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_Ue1zoG4Q, VOf(Bf8));
    __hv_line_f(&sLine_uB7lSxTk, VOf(Bf2));
    __hv_line_f(&sLine_nMRjZB6K, VOf(Bf3));
    __hv_line_f(&sLine_LAlpPhRD, VOf(Bf9));
    __hv_line_f(&sLine_ytn1ADqI, VOf(Bf7));
    __hv_line_f(&sLine_VORyXAyL, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_oYmMZyZ9, VIf(Bf0), VIf(Bf2), VIf(Bf3), VIf(Bf9), VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_7ZOWhnuL, VOf(Bf0));
    __hv_fma_f(VIf(Bf6), VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf1), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_m0xkQik8, VOf(Bf8));
    __hv_rpole_f(&sRPole_FsmMeEWM, VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_x3AzL43S, VIf(Bf8), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_xfTVqN0g, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f);
    __hv_mul_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf5), VIf(O0), VOf(O0));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_DimensionIV::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s)
  float **const bIn = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bIn[0] = inputBuffers+(0*n4);
  bIn[1] = inputBuffers+(1*n4);

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_DimensionIV::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s), uninterleave
  float *const bIn = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));
  #if HV_SIMD_SSE || HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 a = _mm_load_ps(inputBuffers+i);                // LRLR
    __m128 b = _mm_load_ps(inputBuffers+4+i);              // LRLR
    __m128 x = _mm_shuffle_ps(a, b, _MM_SHUFFLE(2,0,2,0)); // LLLL
    __m128 y = _mm_shuffle_ps(a, b, _MM_SHUFFLE(3,1,3,1)); // RRRR
    _mm_store_ps(bIn+j, x);
    _mm_store_ps(bIn+n4+j, y);
  }
  #elif HV_SIMD_NEON
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4x2_t a = vld2q_f32(inputBuffers+i); // load and uninterleave
    vst1q_f32(bIn+j, a.val[0]);
    vst1q_f32(bIn+n4+j, a.val[1]);
  }
  #else // HV_SIMD_NONE
  for (int j = 0; j < n4; ++j) {
    bIn[0*n4+j] = inputBuffers[0+2*j];
    bIn[1*n4+j] = inputBuffers[1+2*j];
  }
  #endif

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
