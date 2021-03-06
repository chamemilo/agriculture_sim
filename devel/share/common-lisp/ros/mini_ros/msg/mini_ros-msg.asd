
(cl:in-package :asdf)

(defsystem "mini_ros-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "AgentData" :depends-on ("_package_AgentData"))
    (:file "_package_AgentData" :depends-on ("_package"))
    (:file "ContactData" :depends-on ("_package_ContactData"))
    (:file "_package_ContactData" :depends-on ("_package"))
    (:file "IMUdata" :depends-on ("_package_IMUdata"))
    (:file "_package_IMUdata" :depends-on ("_package"))
    (:file "JointAngles" :depends-on ("_package_JointAngles"))
    (:file "_package_JointAngles" :depends-on ("_package"))
    (:file "JointPulse" :depends-on ("_package_JointPulse"))
    (:file "_package_JointPulse" :depends-on ("_package"))
    (:file "JoyButtons" :depends-on ("_package_JoyButtons"))
    (:file "_package_JoyButtons" :depends-on ("_package"))
    (:file "MiniCmd" :depends-on ("_package_MiniCmd"))
    (:file "_package_MiniCmd" :depends-on ("_package"))
  ))