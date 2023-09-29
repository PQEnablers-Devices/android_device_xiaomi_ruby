/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

static const variant_info_t ruby_global_info = {
    .hwc_value = "",
    .sku_value = "ruby",

    .brand = "Redmi",
    .device = "ruby",
    .marketname = "Redmi Note 12 Pro 5G",
    .model = "22101316G",
    .build_fingerprint = "Redmi/ruby_global/ruby:12/SP1A.210812.016/V14.0.1.0.TMOMIXM:user/release-keys"
};

static const variant_info_t rubypro_global_info = {
    .hwc_value = "",
    .sku_value = "rubypro",

    .brand = "Redmi",
    .device = "rubypro",
    .marketname = "Redmi Note 12 Pro+ 5G",
    .model = "22101316UG",
    .build_fingerprint = "Redmi/rubypro_global/rubypro:12/SP1A.210812.016/V14.0.1.0.TMOMIXM:user/release-keys"
};

static const variant_info_t rubyplus_info = {
    .hwc_value = "",
    .sku_value = "rubyplus",

    .brand = "Redmi",
    .device = "rubyplus",
    .marketname = "Redmi Note 12 DISCOVERY EDITION",
    .model = "22101316UC",
    .build_fingerprint = "Redmi/rubyplus/rubyplus:12/SP1A.210812.016/V14.0.3.0.TMOCNXM:user/release-keys"
};

static const std::vector<variant_info_t> variants = {
    ruby_global_info,
    rubypro_global_info,
    rubyplus_info,
};

void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}
