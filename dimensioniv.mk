DIMENSIONIV_VERSION = e9d3abf9c1b2b1e373473db187c9007802790e64
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
