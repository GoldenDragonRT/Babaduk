#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto alert = FLAlertLayer::create(
            "Ура!",
            "Мод, написанный на телефоне, работает!",
            "Ок"
        );
        alert->m_noElasticity = true;
        alert->show();

        return true;
    }
};
