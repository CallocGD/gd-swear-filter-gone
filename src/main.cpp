#include <Geode/Geode.hpp>
#include <Geode/modify/CCTextInputNode.hpp>


class $modify(CCTextInputNode){
    static void onModify(auto& self) {
        self.setHookPriority("CCTextInputNode::onTextFieldDetachWithIME", 1024);
    }
    /* Problem Solved! */
    bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF *tField){
        this->m_filterSwearWords = false;
        return CCTextInputNode::onTextFieldDetachWithIME(tField);
    }
};

