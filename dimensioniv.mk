DIMENSIONIV_VERSION = d2f08b4890102182ea333ef1c8dd5dd1d101f539
DIMENSIONIV_SITE = https://github.com/Mondomod/dimensioniv
DIMENSIONIV_SITE_METHOD = git

DIMENSIONIV_DEPENDENCIES = lv2
DIMENSIONIV_BUNDLES = DimensionIV.lv2




define DIMENSIONIV_BUILD_CMDS
	$(TARGET_MAKE_ENV) $(MAKE) -C $(@D)/plugin/source \
		CC="$(TARGET_CC)" \
		CXX="$(TARGET_CXX)" \
		AR="$(TARGET_AR)" \
		STRIP="$(TARGET_STRIP)" \
		CROSS_COMPILING=true \
		all

	cp -a $(@D)/lv2/. $(@D)/bin/DimensionIV.lv2/
endef

define DIMENSIONIV_INSTALL_TARGET_CMDS
	$(INSTALL) -d $(TARGET_DIR)/usr/lib/lv2

	cp -a $(@D)/bin/DimensionIV.lv2 \
		$(TARGET_DIR)/usr/lib/lv2/
endef

$(eval $(generic-package))
