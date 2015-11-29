static tf_AFCErrnoToAFCError method_AFCErrnoToAFCError = NULL;
static tf_AMDeviceRelease method_AMDeviceRelease = NULL;
static tf_AMDeviceRetain method_AMDeviceRetain = NULL;
static tf_AFCConnectionClose method_AFCConnectionClose = NULL;
static tf_AFCConnectionOpen method_AFCConnectionOpen = NULL;
static tf_AFCDirectoryCreate method_AFCDirectoryCreate = NULL;
static tf_AFCFileInfoOpen method_AFCFileInfoOpen = NULL;
static tf_AFCFileRefClose method_AFCFileRefClose = NULL;
static tf_AFCFileRefOpen method_AFCFileRefOpen = NULL;
static tf_AFCFileRefRead method_AFCFileRefRead = NULL;
static tf_AFCFileRefSeek method_AFCFileRefSeek = NULL;
static tf_AFCFileRefTell method_AFCFileRefTell = NULL;
static tf_AFCFlushData method_AFCFlushData = NULL;
static tf_AFCKeyValueClose method_AFCKeyValueClose = NULL;
static tf_AFCKeyValueRead method_AFCKeyValueRead = NULL;
static tf_AMDeviceConnect method_AMDeviceConnect = NULL;
static tf_AMDeviceCopyDeviceIdentifier method_AMDeviceCopyDeviceIdentifier = NULL;
static tf_AMDeviceCopyValue method_AMDeviceCopyValue = NULL;
static tf_AMDeviceCreateHouseArrestService method_AMDeviceCreateHouseArrestService = NULL;
static tf_AMDeviceCreateWakeupToken method_AMDeviceCreateWakeupToken = NULL;
static tf_AMDeviceDisconnect method_AMDeviceDisconnect = NULL;
static tf_AMDeviceGetConnectionID method_AMDeviceGetConnectionID = NULL;
static tf_AMDeviceGetInterfaceType method_AMDeviceGetInterfaceType = NULL;
static tf_AMDeviceGetWirelessBuddyFlags method_AMDeviceGetWirelessBuddyFlags = NULL;
static tf_AMDeviceIsPaired method_AMDeviceIsPaired = NULL;
static tf_AMDeviceLookupApplications method_AMDeviceLookupApplications = NULL;
static tf_AMDeviceNotificationSubscribe method_AMDeviceNotificationSubscribe = NULL;
static tf_AMDeviceSetWirelessBuddyFlags method_AMDeviceSetWirelessBuddyFlags = NULL;
static tf_AMDeviceStartHouseArrestService method_AMDeviceStartHouseArrestService = NULL;
static tf_AMDeviceStartService method_AMDeviceStartService = NULL;
static tf_AMDeviceStartServiceWithOptions method_AMDeviceStartServiceWithOptions = NULL;
static tf_AMDeviceStartSession method_AMDeviceStartSession = NULL;
static tf_AMDeviceStopSession method_AMDeviceStopSession = NULL;
static tf_AMDeviceTransferApplication method_AMDeviceTransferApplication = NULL;
static tf_AMDeviceTransferPath method_AMDeviceTransferPath = NULL;
static tf_AMDeviceUninstallApplication method_AMDeviceUninstallApplication = NULL;
static tf_AMDeviceUnpair method_AMDeviceUnpair = NULL;
static tf_AMDeviceUpgradeApplication method_AMDeviceUpgradeApplication = NULL;
static tf_AMDeviceValidatePairing method_AMDeviceValidatePairing = NULL;
static tf_AFCLockCreate method_AFCLockCreate = NULL;
static tf_AFCLockFree method_AFCLockFree = NULL;
static tf_AFCLockLock method_AFCLockLock = NULL;
static tf_AFCLockTryLock method_AFCLockTryLock = NULL;
static tf_AFCLockUnlock method_AFCLockUnlock = NULL;
static tf_AFCStringCopy method_AFCStringCopy = NULL;
static tf_AMSAddAppleSearchPathsToEnvironmentFromReg method_AMSAddAppleSearchPathsToEnvironmentFromReg = NULL;
static tf_MISProfileCopyPayload method_MISProfileCopyPayload = NULL;
static tf_MISProfileCopySignerSubjectSummary method_MISProfileCopySignerSubjectSummary = NULL;
static tf_MISProfileCreateDataRepresentation method_MISProfileCreateDataRepresentation = NULL;
static tf_MISProfileCreateWithData method_MISProfileCreateWithData = NULL;
static tf_MISProfileCreateWithFile method_MISProfileCreateWithFile = NULL;
static tf_MISProfileGetValue method_MISProfileGetValue = NULL;
static tf_MISProfileIsMutable method_MISProfileIsMutable = NULL;
static tf_MISProfileValidateSignature method_MISProfileValidateSignature = NULL;
static tf_MISProfileValidateSignatureWithAnchors method_MISProfileValidateSignatureWithAnchors = NULL;
static tf_MISProfileWriteToFile method_MISProfileWriteToFile = NULL;
static tf_MISProvisioningProfileCheckValidity method_MISProvisioningProfileCheckValidity = NULL;
static tf_MISProvisioningProfileGetCreationDate method_MISProvisioningProfileGetCreationDate = NULL;
static tf_MISProvisioningProfileGetDeveloperCertificates method_MISProvisioningProfileGetDeveloperCertificates = NULL;
static tf_MISProvisioningProfileGetExpirationDate method_MISProvisioningProfileGetExpirationDate = NULL;
static tf_MISProvisioningProfileGetName method_MISProvisioningProfileGetName = NULL;
static tf_MISProvisioningProfileGetProvisionedDevices method_MISProvisioningProfileGetProvisionedDevices = NULL;
static tf_MISProvisioningProfileGetUUID method_MISProvisioningProfileGetUUID = NULL;
static tf_MISProvisioningProfileGetVersion method_MISProvisioningProfileGetVersion = NULL;
static tf_MISProvisioningProfileIncludesDevice method_MISProvisioningProfileIncludesDevice = NULL;
static tf_MISProvisioningProfileProvisionsAllDevices method_MISProvisioningProfileProvisionsAllDevices = NULL;
static tf_MISProvisioningProfileValidateSignature method_MISProvisioningProfileValidateSignature = NULL;
static tf_USBMuxListenForDevices method_USBMuxListenForDevices = NULL;
static tf_AFCConnectionCopyLastErrorInfo method_AFCConnectionCopyLastErrorInfo = NULL;
static tf_AFCConnectionCreate method_AFCConnectionCreate = NULL;
static tf_AFCConnectionGetContext method_AFCConnectionGetContext = NULL;
static tf_AFCConnectionGetFSBlockSize method_AFCConnectionGetFSBlockSize = NULL;
static tf_AFCConnectionGetIOTimeout method_AFCConnectionGetIOTimeout = NULL;
static tf_AFCConnectionGetSecureContext method_AFCConnectionGetSecureContext = NULL;
static tf_AFCConnectionGetSocketBlockSize method_AFCConnectionGetSocketBlockSize = NULL;
static tf_AFCConnectionGetStatus method_AFCConnectionGetStatus = NULL;
static tf_AFCConnectionGetTypeID method_AFCConnectionGetTypeID = NULL;
static tf_AFCConnectionInvalidate method_AFCConnectionInvalidate = NULL;
static tf_AFCConnectionIsValid method_AFCConnectionIsValid = NULL;
static tf_AFCConnectionProcessOperation method_AFCConnectionProcessOperation = NULL;
static tf_AFCConnectionProcessOperations method_AFCConnectionProcessOperations = NULL;
static tf_AFCConnectionScheduleWithRunLoop method_AFCConnectionScheduleWithRunLoop = NULL;
static tf_AFCConnectionSetCallBack method_AFCConnectionSetCallBack = NULL;
static tf_AFCConnectionSetContext method_AFCConnectionSetContext = NULL;
static tf_AFCConnectionSetDisposeSecureContextOnInvalidate method_AFCConnectionSetDisposeSecureContextOnInvalidate = NULL;
static tf_AFCConnectionSetFSBlockSize method_AFCConnectionSetFSBlockSize = NULL;
static tf_AFCConnectionSetFatalError method_AFCConnectionSetFatalError = NULL;
static tf_AFCConnectionSetIOTimeout method_AFCConnectionSetIOTimeout = NULL;
static tf_AFCConnectionSetSecureContext method_AFCConnectionSetSecureContext = NULL;
static tf_AFCConnectionSetSocketBlockSize method_AFCConnectionSetSocketBlockSize = NULL;
static tf_AFCConnectionSubmitOperation method_AFCConnectionSubmitOperation = NULL;
static tf_AFCConnectionUnscheduleFromRunLoop method_AFCConnectionUnscheduleFromRunLoop = NULL;
static tf_AFCCopyErrorString method_AFCCopyErrorString = NULL;
static tf_AFCCopyPacketTypeString method_AFCCopyPacketTypeString = NULL;
static tf_AFCDeviceInfoOpen method_AFCDeviceInfoOpen = NULL;
static tf_AFCDirectoryClose method_AFCDirectoryClose = NULL;
static tf_AFCDirectoryOpen method_AFCDirectoryOpen = NULL;
static tf_AFCDirectoryRead method_AFCDirectoryRead = NULL;
static tf_AFCDiscardBodyData method_AFCDiscardBodyData = NULL;
static tf_AFCDiscardData method_AFCDiscardData = NULL;
static tf_AFCFileDescriptorCreateCloseOperation method_AFCFileDescriptorCreateCloseOperation = NULL;
static tf_AFCFileDescriptorCreateGetPositionOperation method_AFCFileDescriptorCreateGetPositionOperation = NULL;
static tf_AFCFileDescriptorCreateLockOperation method_AFCFileDescriptorCreateLockOperation = NULL;
static tf_AFCFileDescriptorCreateReadAtPositionOperation method_AFCFileDescriptorCreateReadAtPositionOperation = NULL;
static tf_AFCFileDescriptorCreateReadOperation method_AFCFileDescriptorCreateReadOperation = NULL;
static tf_AFCFileDescriptorCreateSetImmutableHintOperation method_AFCFileDescriptorCreateSetImmutableHintOperation = NULL;
static tf_AFCFileDescriptorCreateSetPositionOperation method_AFCFileDescriptorCreateSetPositionOperation = NULL;
static tf_AFCFileDescriptorCreateSetSizeOperation method_AFCFileDescriptorCreateSetSizeOperation = NULL;
static tf_AFCFileDescriptorCreateUnlockOperation method_AFCFileDescriptorCreateUnlockOperation = NULL;
static tf_AFCFileDescriptorCreateWriteAtPositionOperation method_AFCFileDescriptorCreateWriteAtPositionOperation = NULL;
static tf_AFCFileDescriptorCreateWriteOperation method_AFCFileDescriptorCreateWriteOperation = NULL;
static tf_AFCFileDescriptorGetTypeID method_AFCFileDescriptorGetTypeID = NULL;
static tf_AFCFileDescriptorInvalidate method_AFCFileDescriptorInvalidate = NULL;
static tf_AFCFileDescriptorIsValid method_AFCFileDescriptorIsValid = NULL;
static tf_AFCFileRefLock method_AFCFileRefLock = NULL;
static tf_AFCFileRefSetFileSize method_AFCFileRefSetFileSize = NULL;
static tf_AFCFileRefUnlock method_AFCFileRefUnlock = NULL;
static tf_AFCFileRefWrite method_AFCFileRefWrite = NULL;
static tf_AFCGetClientVersionString method_AFCGetClientVersionString = NULL;
static tf_AFCLinkPath method_AFCLinkPath = NULL;
static tf_AFCOperationCopyPacketData method_AFCOperationCopyPacketData = NULL;
static tf_AFCOperationCreateGetConnectionInfo method_AFCOperationCreateGetConnectionInfo = NULL;
static tf_AFCOperationCreateGetDeviceInfo method_AFCOperationCreateGetDeviceInfo = NULL;
static tf_AFCOperationCreateGetFileHash method_AFCOperationCreateGetFileHash = NULL;
static tf_AFCOperationCreateGetFileHashWithRange method_AFCOperationCreateGetFileHashWithRange = NULL;
static tf_AFCOperationCreateGetFileInfo method_AFCOperationCreateGetFileInfo = NULL;
static tf_AFCOperationCreateGetSizeOfPathContents method_AFCOperationCreateGetSizeOfPathContents = NULL;
static tf_AFCOperationCreateLinkPath method_AFCOperationCreateLinkPath = NULL;
static tf_AFCOperationCreateMakeDirectory method_AFCOperationCreateMakeDirectory = NULL;
static tf_AFCOperationCreateOpenFile method_AFCOperationCreateOpenFile = NULL;
static tf_AFCOperationCreatePacketHeaderDictionary method_AFCOperationCreatePacketHeaderDictionary = NULL;
static tf_AFCOperationCreateReadDirectory method_AFCOperationCreateReadDirectory = NULL;
static tf_AFCOperationCreateRemovePath method_AFCOperationCreateRemovePath = NULL;
static tf_AFCOperationCreateRemovePathAndContents method_AFCOperationCreateRemovePathAndContents = NULL;
static tf_AFCOperationCreateRenamePath method_AFCOperationCreateRenamePath = NULL;
static tf_AFCOperationCreateSetConnectionOptions method_AFCOperationCreateSetConnectionOptions = NULL;
static tf_AFCOperationCreateSetModTime method_AFCOperationCreateSetModTime = NULL;
static tf_AFCOperationGetContext method_AFCOperationGetContext = NULL;
static tf_AFCOperationGetResultObject method_AFCOperationGetResultObject = NULL;
static tf_AFCOperationGetResultStatus method_AFCOperationGetResultStatus = NULL;
static tf_AFCOperationGetState method_AFCOperationGetState = NULL;
static tf_AFCOperationGetTypeID method_AFCOperationGetTypeID = NULL;
static tf_AFCOperationSetContext method_AFCOperationSetContext = NULL;
static tf_AFCReadData method_AFCReadData = NULL;
static tf_AFCReadPacket method_AFCReadPacket = NULL;
static tf_AFCReadPacketBody method_AFCReadPacketBody = NULL;
static tf_AFCReadPacketHeader method_AFCReadPacketHeader = NULL;
static tf_AFCRemovePath method_AFCRemovePath = NULL;
static tf_AFCRenamePath method_AFCRenamePath = NULL;
static tf_AFCSendData method_AFCSendData = NULL;
static tf_AFCSendDataPacket method_AFCSendDataPacket = NULL;
static tf_AFCSendHeader method_AFCSendHeader = NULL;
static tf_AFCSendPacket method_AFCSendPacket = NULL;
static tf_AFCSendStatus method_AFCSendStatus = NULL;
static tf_AFCValidateHeader method_AFCValidateHeader = NULL;
static tf_AMDCopyArrayOfDevicesMatchingQuery method_AMDCopyArrayOfDevicesMatchingQuery = NULL;
static tf_AMDCopyAuthenticationIdentityForDevice method_AMDCopyAuthenticationIdentityForDevice = NULL;
static tf_AMDCopyErrorText method_AMDCopyErrorText = NULL;
static tf_AMDCopySystemBonjourUniqueID method_AMDCopySystemBonjourUniqueID = NULL;
static tf_AMDFUModeDeviceCopyAuthInstallPreflightOptions method_AMDFUModeDeviceCopyAuthInstallPreflightOptions = NULL;
static tf_AMDFUModeDeviceCopyBoardConfig method_AMDFUModeDeviceCopyBoardConfig = NULL;
static tf_AMDFUModeDeviceGetBoardID method_AMDFUModeDeviceGetBoardID = NULL;
static tf_AMDFUModeDeviceGetChipID method_AMDFUModeDeviceGetChipID = NULL;
static tf_AMDFUModeDeviceGetECID method_AMDFUModeDeviceGetECID = NULL;
static tf_AMDFUModeDeviceGetLocationID method_AMDFUModeDeviceGetLocationID = NULL;
static tf_AMDFUModeDeviceGetProductID method_AMDFUModeDeviceGetProductID = NULL;
static tf_AMDFUModeDeviceGetProductType method_AMDFUModeDeviceGetProductType = NULL;
static tf_AMDFUModeDeviceGetProductionMode method_AMDFUModeDeviceGetProductionMode = NULL;
static tf_AMDFUModeDeviceGetProgress method_AMDFUModeDeviceGetProgress = NULL;
static tf_AMDFUModeDeviceGetSecurityDomain method_AMDFUModeDeviceGetSecurityDomain = NULL;
static tf_AMDFUModeDeviceGetSecurityEpoch method_AMDFUModeDeviceGetSecurityEpoch = NULL;
static tf_AMDFUModeDeviceGetTypeID method_AMDFUModeDeviceGetTypeID = NULL;
static tf_AMDFUModeDeviceIsBootstrapOnly method_AMDFUModeDeviceIsBootstrapOnly = NULL;
static tf_AMDFUModeDeviceRequestAbbreviatedSendSync method_AMDFUModeDeviceRequestAbbreviatedSendSync = NULL;
static tf_AMDGetPairingRecordDirectoryPath method_AMDGetPairingRecordDirectoryPath = NULL;
static tf_AMDListenForNotifications method_AMDListenForNotifications = NULL;
static tf_AMDObserveNotification method_AMDObserveNotification = NULL;
static tf_AMDPostNotification method_AMDPostNotification = NULL;
static tf_AMDSecureListenForNotifications method_AMDSecureListenForNotifications = NULL;
static tf_AMDSecureObserveNotification method_AMDSecureObserveNotification = NULL;
static tf_AMDSecurePostNotification method_AMDSecurePostNotification = NULL;
static tf_AMDSecureShutdownNotificationProxy method_AMDSecureShutdownNotificationProxy = NULL;
static tf_AMDServiceConnectionCreate method_AMDServiceConnectionCreate = NULL;
static tf_AMDServiceConnectionGetSecureIOContext method_AMDServiceConnectionGetSecureIOContext = NULL;
static tf_AMDServiceConnectionGetSocket method_AMDServiceConnectionGetSocket = NULL;
static tf_AMDServiceConnectionGetTypeID method_AMDServiceConnectionGetTypeID = NULL;
static tf_AMDServiceConnectionInvalidate method_AMDServiceConnectionInvalidate = NULL;
static tf_AMDServiceConnectionReceive method_AMDServiceConnectionReceive = NULL;
static tf_AMDServiceConnectionReceiveMessage method_AMDServiceConnectionReceiveMessage = NULL;
static tf_AMDServiceConnectionSend method_AMDServiceConnectionSend = NULL;
static tf_AMDServiceConnectionSendMessage method_AMDServiceConnectionSendMessage = NULL;
static tf_AMDSetLogLevel method_AMDSetLogLevel = NULL;
static tf_AMDShutdownNotificationProxy method_AMDShutdownNotificationProxy = NULL;
static tf_AMDeviceActivate method_AMDeviceActivate = NULL;
static tf_AMDeviceArchiveApplication method_AMDeviceArchiveApplication = NULL;
static tf_AMDeviceCheckCapabilitiesMatch method_AMDeviceCheckCapabilitiesMatch = NULL;
static tf_AMDeviceCopyAuthInstallPreflightOptions method_AMDeviceCopyAuthInstallPreflightOptions = NULL;
static tf_AMDeviceCopyDeviceLocation method_AMDeviceCopyDeviceLocation = NULL;
static tf_AMDeviceCopyProvisioningProfiles method_AMDeviceCopyProvisioningProfiles = NULL;
static tf_AMDeviceCopyValueWithError method_AMDeviceCopyValueWithError = NULL;
static tf_AMDeviceDeactivate method_AMDeviceDeactivate = NULL;
static tf_AMDeviceEnterRecovery method_AMDeviceEnterRecovery = NULL;
static tf_AMDeviceExtendedPairWithOptions method_AMDeviceExtendedPairWithOptions = NULL;
static tf_AMDeviceGetInterfaceSpeed method_AMDeviceGetInterfaceSpeed = NULL;
static tf_AMDeviceGetTypeID method_AMDeviceGetTypeID = NULL;
static tf_AMDeviceGetUserInfo method_AMDeviceGetUserInfo = NULL;
static tf_AMDeviceInstallApplication method_AMDeviceInstallApplication = NULL;
static tf_AMDeviceInstallProvisioningProfile method_AMDeviceInstallProvisioningProfile = NULL;
static tf_AMDeviceIsValid method_AMDeviceIsValid = NULL;
static tf_AMDeviceLookupApplicationArchives method_AMDeviceLookupApplicationArchives = NULL;
static tf_AMDeviceNotificationUnsubscribe method_AMDeviceNotificationUnsubscribe = NULL;
static tf_AMDevicePair method_AMDevicePair = NULL;
static tf_AMDevicePairWithOptions method_AMDevicePairWithOptions = NULL;
static tf_AMDevicePowerAssertionCreate method_AMDevicePowerAssertionCreate = NULL;
static tf_AMDevicePowerAssertionGetTypeID method_AMDevicePowerAssertionGetTypeID = NULL;
static tf_AMDevicePreflightOperationCreate method_AMDevicePreflightOperationCreate = NULL;
static tf_AMDevicePreflightOperationGetRunLoopSource method_AMDevicePreflightOperationGetRunLoopSource = NULL;
static tf_AMDevicePreflightOperationGetTypeID method_AMDevicePreflightOperationGetTypeID = NULL;
static tf_AMDevicePreflightOperationInvalidate method_AMDevicePreflightOperationInvalidate = NULL;
static tf_AMDeviceRemoveApplicationArchive method_AMDeviceRemoveApplicationArchive = NULL;
static tf_AMDeviceRemoveProvisioningProfile method_AMDeviceRemoveProvisioningProfile = NULL;
static tf_AMDeviceRemoveValue method_AMDeviceRemoveValue = NULL;
static tf_AMDeviceRequestAbbreviatedSendSync method_AMDeviceRequestAbbreviatedSendSync = NULL;
static tf_AMDeviceRestoreApplication method_AMDeviceRestoreApplication = NULL;
static tf_AMDeviceSecureArchiveApplication method_AMDeviceSecureArchiveApplication = NULL;
static tf_AMDeviceSecureCheckCapabilitiesMatch method_AMDeviceSecureCheckCapabilitiesMatch = NULL;
static tf_AMDeviceSecureInstallApplication method_AMDeviceSecureInstallApplication = NULL;
static tf_AMDeviceSecureRemoveApplicationArchive method_AMDeviceSecureRemoveApplicationArchive = NULL;
static tf_AMDeviceSecureRestoreApplication method_AMDeviceSecureRestoreApplication = NULL;
static tf_AMDeviceSecureStartService method_AMDeviceSecureStartService = NULL;
static tf_AMDeviceSecureTransferPath method_AMDeviceSecureTransferPath = NULL;
static tf_AMDeviceSecureUninstallApplication method_AMDeviceSecureUninstallApplication = NULL;
static tf_AMDeviceSecureUpgradeApplication method_AMDeviceSecureUpgradeApplication = NULL;
static tf_AMDeviceSetUserInfo method_AMDeviceSetUserInfo = NULL;
static tf_AMDeviceSetValue method_AMDeviceSetValue = NULL;
static tf_AMDeviceWakeupOperationCreateWithToken method_AMDeviceWakeupOperationCreateWithToken = NULL;
static tf_AMDeviceWakeupOperationGetTypeID method_AMDeviceWakeupOperationGetTypeID = NULL;
static tf_AMDeviceWakeupOperationInvalidate method_AMDeviceWakeupOperationInvalidate = NULL;
static tf_AMDeviceWakeupOperationSchedule method_AMDeviceWakeupOperationSchedule = NULL;
static tf_AMDeviceWakeupUsingToken method_AMDeviceWakeupUsingToken = NULL;
static tf_AMRAuthInstallCopyLocalizedStringForServerError method_AMRAuthInstallCopyLocalizedStringForServerError = NULL;
static tf_AMRAuthInstallCopyPreflightOptions method_AMRAuthInstallCopyPreflightOptions = NULL;
static tf_AMRAuthInstallFinalize method_AMRAuthInstallFinalize = NULL;
static tf_AMRAuthInstallPreflight method_AMRAuthInstallPreflight = NULL;
static tf_AMRAuthInstallRegisterProxyCredentialsCallback method_AMRAuthInstallRegisterProxyCredentialsCallback = NULL;
static tf_AMRLog method_AMRLog = NULL;
static tf_AMRLogv method_AMRLogv = NULL;
static tf_AMRecoveryModeDeviceCopyAuthInstallPreflightOptions method_AMRecoveryModeDeviceCopyAuthInstallPreflightOptions = NULL;
static tf_AMRecoveryModeDeviceCopyBoardConfig method_AMRecoveryModeDeviceCopyBoardConfig = NULL;
static tf_AMRecoveryModeDeviceCopyEnvironmentVariableFromDevice method_AMRecoveryModeDeviceCopyEnvironmentVariableFromDevice = NULL;
static tf_AMRecoveryModeDeviceCopyIMEI method_AMRecoveryModeDeviceCopyIMEI = NULL;
static tf_AMRecoveryModeDeviceCopySerialNumber method_AMRecoveryModeDeviceCopySerialNumber = NULL;
static tf_AMRecoveryModeDeviceGetBoardID method_AMRecoveryModeDeviceGetBoardID = NULL;
static tf_AMRecoveryModeDeviceGetChipID method_AMRecoveryModeDeviceGetChipID = NULL;
static tf_AMRecoveryModeDeviceGetECID method_AMRecoveryModeDeviceGetECID = NULL;
static tf_AMRecoveryModeDeviceGetLocationID method_AMRecoveryModeDeviceGetLocationID = NULL;
static tf_AMRecoveryModeDeviceGetProductID method_AMRecoveryModeDeviceGetProductID = NULL;
static tf_AMRecoveryModeDeviceGetProductType method_AMRecoveryModeDeviceGetProductType = NULL;
static tf_AMRecoveryModeDeviceGetProductionMode method_AMRecoveryModeDeviceGetProductionMode = NULL;
static tf_AMRecoveryModeDeviceGetProgress method_AMRecoveryModeDeviceGetProgress = NULL;
static tf_AMRecoveryModeDeviceGetSecurityDomain method_AMRecoveryModeDeviceGetSecurityDomain = NULL;
static tf_AMRecoveryModeDeviceGetSecurityEpoch method_AMRecoveryModeDeviceGetSecurityEpoch = NULL;
static tf_AMRecoveryModeDeviceGetTypeID method_AMRecoveryModeDeviceGetTypeID = NULL;
static tf_AMRecoveryModeDeviceIsBootstrapOnly method_AMRecoveryModeDeviceIsBootstrapOnly = NULL;
static tf_AMRecoveryModeDeviceReboot method_AMRecoveryModeDeviceReboot = NULL;
static tf_AMRecoveryModeDeviceRequestAbbreviatedSendSync method_AMRecoveryModeDeviceRequestAbbreviatedSendSync = NULL;
static tf_AMRecoveryModeDeviceSendBlindCommandToDevice method_AMRecoveryModeDeviceSendBlindCommandToDevice = NULL;
static tf_AMRecoveryModeDeviceSendCommandToDevice method_AMRecoveryModeDeviceSendCommandToDevice = NULL;
static tf_AMRecoveryModeDeviceSendFileToDevice method_AMRecoveryModeDeviceSendFileToDevice = NULL;
static tf_AMRecoveryModeDeviceSetAutoBoot method_AMRecoveryModeDeviceSetAutoBoot = NULL;
static tf_AMRecoveryModeGetSoftwareBuildVersion method_AMRecoveryModeGetSoftwareBuildVersion = NULL;
static tf_AMRestorableBuildCopyRestoreBundleURL method_AMRestorableBuildCopyRestoreBundleURL = NULL;
static tf_AMRestorableBuildCopySupportedBoardConfigs method_AMRestorableBuildCopySupportedBoardConfigs = NULL;
static tf_AMRestorableBuildCopySupportedVariants method_AMRestorableBuildCopySupportedVariants = NULL;
static tf_AMRestorableBuildCreate method_AMRestorableBuildCreate = NULL;
static tf_AMRestorableCommitStashBag method_AMRestorableCommitStashBag = NULL;
static tf_AMRestorableDeviceCopyAMDevice method_AMRestorableDeviceCopyAMDevice = NULL;
static tf_AMRestorableDeviceCopyAuthInstallPreflightOptions method_AMRestorableDeviceCopyAuthInstallPreflightOptions = NULL;
static tf_AMRestorableDeviceCopyBoardConfig method_AMRestorableDeviceCopyBoardConfig = NULL;
static tf_AMRestorableDeviceCopyDFUModeDevice method_AMRestorableDeviceCopyDFUModeDevice = NULL;
static tf_AMRestorableDeviceCopyDefaultRestoreOptions method_AMRestorableDeviceCopyDefaultRestoreOptions = NULL;
static tf_AMRestorableDeviceCopyRecoveryModeDevice method_AMRestorableDeviceCopyRecoveryModeDevice = NULL;
static tf_AMRestorableDeviceCopyRestoreModeDevice method_AMRestorableDeviceCopyRestoreModeDevice = NULL;
static tf_AMRestorableDeviceCopyRestoreOptionsFromDocument method_AMRestorableDeviceCopyRestoreOptionsFromDocument = NULL;
static tf_AMRestorableDeviceCopySerialDevicePath method_AMRestorableDeviceCopySerialDevicePath = NULL;
static tf_AMRestorableDeviceCopySerialNumber method_AMRestorableDeviceCopySerialNumber = NULL;
static tf_AMRestorableDeviceCreateFromAMDevice method_AMRestorableDeviceCreateFromAMDevice = NULL;
static tf_AMRestorableDeviceEnableExtraDFUDevices method_AMRestorableDeviceEnableExtraDFUDevices = NULL;
static tf_AMRestorableDeviceGetDFUModeDevice method_AMRestorableDeviceGetDFUModeDevice = NULL;
static tf_AMRestorableDeviceGetECID method_AMRestorableDeviceGetECID = NULL;
static tf_AMRestorableDeviceGetFusingInfo method_AMRestorableDeviceGetFusingInfo = NULL;
static tf_AMRestorableDeviceGetLocationID method_AMRestorableDeviceGetLocationID = NULL;
static tf_AMRestorableDeviceGetProductID method_AMRestorableDeviceGetProductID = NULL;
static tf_AMRestorableDeviceGetProductType method_AMRestorableDeviceGetProductType = NULL;
static tf_AMRestorableDeviceGetRecoveryModeDevice method_AMRestorableDeviceGetRecoveryModeDevice = NULL;
static tf_AMRestorableDeviceGetState method_AMRestorableDeviceGetState = NULL;
static tf_AMRestorableDeviceRegisterForNotifications method_AMRestorableDeviceRegisterForNotifications = NULL;
static tf_AMRestorableDeviceRestore method_AMRestorableDeviceRestore = NULL;
static tf_AMRestorableDeviceSendBlindCommand method_AMRestorableDeviceSendBlindCommand = NULL;
static tf_AMRestorableDeviceSendCommand method_AMRestorableDeviceSendCommand = NULL;
static tf_AMRestorableDeviceSendFile method_AMRestorableDeviceSendFile = NULL;
static tf_AMRestorableDeviceSetLogFileURL method_AMRestorableDeviceSetLogFileURL = NULL;
static tf_AMRestorableDeviceSetProxyCredentialsCallback method_AMRestorableDeviceSetProxyCredentialsCallback = NULL;
static tf_AMRestorableDeviceUnregisterForNotifications method_AMRestorableDeviceUnregisterForNotifications = NULL;
static tf_AMRestorableEnableLogStreaming method_AMRestorableEnableLogStreaming = NULL;
static tf_AMRestorableGetIdentifyingErrorCode method_AMRestorableGetIdentifyingErrorCode = NULL;
static tf_AMRestorableLogToFile method_AMRestorableLogToFile = NULL;
static tf_AMRestorablePersonalizeCopyManifestTag method_AMRestorablePersonalizeCopyManifestTag = NULL;
static tf_AMRestorablePersonalizeSendFile method_AMRestorablePersonalizeSendFile = NULL;
static tf_AMRestorableSetGlobalLocationIDFilter method_AMRestorableSetGlobalLocationIDFilter = NULL;
static tf_AMRestorableSetGlobalLogFileURL method_AMRestorableSetGlobalLogFileURL = NULL;
static tf_AMRestorableSetLogLevel method_AMRestorableSetLogLevel = NULL;
static tf_AMRestoreCreateBootArgsByAddingArg method_AMRestoreCreateBootArgsByAddingArg = NULL;
static tf_AMRestoreCreateBootArgsByRemovingArg method_AMRestoreCreateBootArgsByRemovingArg = NULL;
static tf_AMRestoreCreateDefaultOptions method_AMRestoreCreateDefaultOptions = NULL;
static tf_AMRestoreCreatePathsForBundle method_AMRestoreCreatePathsForBundle = NULL;
static tf_AMRestoreDisableFileLogging method_AMRestoreDisableFileLogging = NULL;
static tf_AMRestoreEnableExtraDFUDevices method_AMRestoreEnableExtraDFUDevices = NULL;
static tf_AMRestoreEnableFileLogging method_AMRestoreEnableFileLogging = NULL;
static tf_AMRestoreGetSupportedPayloadVersion method_AMRestoreGetSupportedPayloadVersion = NULL;
static tf_AMRestoreGetTransformedDFUType method_AMRestoreGetTransformedDFUType = NULL;
static tf_AMRestoreGetTransformedFirmwareTypeValue method_AMRestoreGetTransformedFirmwareTypeValue = NULL;
static tf_AMRestoreModeDeviceCopyBoardConfig method_AMRestoreModeDeviceCopyBoardConfig = NULL;
static tf_AMRestoreModeDeviceCopyEcid method_AMRestoreModeDeviceCopyEcid = NULL;
static tf_AMRestoreModeDeviceCopyIMEI method_AMRestoreModeDeviceCopyIMEI = NULL;
static tf_AMRestoreModeDeviceCopyRestoreLog method_AMRestoreModeDeviceCopyRestoreLog = NULL;
static tf_AMRestoreModeDeviceCopySerialNumber method_AMRestoreModeDeviceCopySerialNumber = NULL;
static tf_AMRestoreModeDeviceCreate method_AMRestoreModeDeviceCreate = NULL;
static tf_AMRestoreModeDeviceGetDeviceID method_AMRestoreModeDeviceGetDeviceID = NULL;
static tf_AMRestoreModeDeviceGetLocationID method_AMRestoreModeDeviceGetLocationID = NULL;
static tf_AMRestoreModeDeviceGetProgress method_AMRestoreModeDeviceGetProgress = NULL;
static tf_AMRestoreModeDeviceGetTypeID method_AMRestoreModeDeviceGetTypeID = NULL;
static tf_AMRestoreModeDeviceReboot method_AMRestoreModeDeviceReboot = NULL;
static tf_AMRestoreModeGetLastFailureLog method_AMRestoreModeGetLastFailureLog = NULL;
static tf_AMRestorePerformDFURestore method_AMRestorePerformDFURestore = NULL;
static tf_AMRestorePerformRecoveryModeRestore method_AMRestorePerformRecoveryModeRestore = NULL;
static tf_AMRestorePerformRestoreModeRestore method_AMRestorePerformRestoreModeRestore = NULL;
static tf_AMRestorePerformRestoreModeRestoreWithError method_AMRestorePerformRestoreModeRestoreWithError = NULL;
static tf_AMRestoreRegisterForDeviceNotifications method_AMRestoreRegisterForDeviceNotifications = NULL;
static tf_AMRestoreSetLogLevel method_AMRestoreSetLogLevel = NULL;
static tf_AMRestoreUnregisterForDeviceNotifications method_AMRestoreUnregisterForDeviceNotifications = NULL;
static tf_AMSArchiveBackup method_AMSArchiveBackup = NULL;
static tf_AMSBackupWithOptions method_AMSBackupWithOptions = NULL;
static tf_AMSBeginSync method_AMSBeginSync = NULL;
static tf_AMSBeginSyncForDataClasses method_AMSBeginSyncForDataClasses = NULL;
static tf_AMSCancelBackupRestore method_AMSCancelBackupRestore = NULL;
static tf_AMSCancelCrashReportCopy method_AMSCancelCrashReportCopy = NULL;
static tf_AMSCancelSync method_AMSCancelSync = NULL;
static tf_AMSCancelSyncDiagnostics method_AMSCancelSyncDiagnostics = NULL;
static tf_AMSChangeBackupPassword method_AMSChangeBackupPassword = NULL;
static tf_AMSCleanup method_AMSCleanup = NULL;
static tf_AMSClearDataClasses method_AMSClearDataClasses = NULL;
static tf_AMSConnectToCrashReportCopyTarget method_AMSConnectToCrashReportCopyTarget = NULL;
static tf_AMSCopyApplicationListFromBackup method_AMSCopyApplicationListFromBackup = NULL;
static tf_AMSCopyCrashReportPath method_AMSCopyCrashReportPath = NULL;
static tf_AMSCopyCrashReportsFromTarget method_AMSCopyCrashReportsFromTarget = NULL;
static tf_AMSCopySourcesForRestoreCompatibleWith method_AMSCopySourcesForRestoreCompatibleWith = NULL;
static tf_AMSDisconnectFromCrashReportCopyTarget method_AMSDisconnectFromCrashReportCopyTarget = NULL;
static tf_AMSEnableCloudBackup method_AMSEnableCloudBackup = NULL;
static tf_AMSEnableSyncServices method_AMSEnableSyncServices = NULL;
static tf_AMSGetAOSUsername method_AMSGetAOSUsername = NULL;
static tf_AMSGetApplicationProviderInfo method_AMSGetApplicationProviderInfo = NULL;
static tf_AMSGetBackupInfo method_AMSGetBackupInfo = NULL;
static tf_AMSGetBackupPasswordFromKeychainForTarget method_AMSGetBackupPasswordFromKeychainForTarget = NULL;
static tf_AMSGetCalendarDayLimit method_AMSGetCalendarDayLimit = NULL;
static tf_AMSGetClientIdentifierAndDisplayNameForTarget method_AMSGetClientIdentifierAndDisplayNameForTarget = NULL;
static tf_AMSGetCollectionsForDataClassName method_AMSGetCollectionsForDataClassName = NULL;
static tf_AMSGetCrashReportCopyPreferencesForTarget method_AMSGetCrashReportCopyPreferencesForTarget = NULL;
static tf_AMSGetDataChangeAlertInfo method_AMSGetDataChangeAlertInfo = NULL;
static tf_AMSGetDataClassInfoForTarget method_AMSGetDataClassInfoForTarget = NULL;
static tf_AMSGetDefaultOutlookCalendarMapping method_AMSGetDefaultOutlookCalendarMapping = NULL;
static tf_AMSGetLastSyncDateForDataClass method_AMSGetLastSyncDateForDataClass = NULL;
static tf_AMSGetNewRecordCalendarName method_AMSGetNewRecordCalendarName = NULL;
static tf_AMSGetNewRecordGroupName method_AMSGetNewRecordGroupName = NULL;
static tf_AMSGetNumberOfCrashReportsToCopy method_AMSGetNumberOfCrashReportsToCopy = NULL;
static tf_AMSGetNumberOfCrashReportsToSubmit method_AMSGetNumberOfCrashReportsToSubmit = NULL;
static tf_AMSGetSourcesForRestore method_AMSGetSourcesForRestore = NULL;
static tf_AMSGetSupportedDataClassNames method_AMSGetSupportedDataClassNames = NULL;
static tf_AMSInitialize method_AMSInitialize = NULL;
static tf_AMSIsSyncServicesEnabled method_AMSIsSyncServicesEnabled = NULL;
static tf_AMSRefreshCollectionsForDataClassName method_AMSRefreshCollectionsForDataClassName = NULL;
static tf_AMSRegisterCallbacks method_AMSRegisterCallbacks = NULL;
static tf_AMSRegisterClientWithTargetIdentifierAndDisplayName method_AMSRegisterClientWithTargetIdentifierAndDisplayName = NULL;
static tf_AMSResetSyncData method_AMSResetSyncData = NULL;
static tf_AMSRestoreWithApplications method_AMSRestoreWithApplications = NULL;
static tf_AMSRunSyncDiagnostics method_AMSRunSyncDiagnostics = NULL;
static tf_AMSSetBackupPasswordInKeychain method_AMSSetBackupPasswordInKeychain = NULL;
static tf_AMSSetCalendarDayLimit method_AMSSetCalendarDayLimit = NULL;
static tf_AMSSetCrashReportCopyPreferencesForTarget method_AMSSetCrashReportCopyPreferencesForTarget = NULL;
static tf_AMSSetDataChangeAlertInfo method_AMSSetDataChangeAlertInfo = NULL;
static tf_AMSSetDataClassInfoForTarget method_AMSSetDataClassInfoForTarget = NULL;
static tf_AMSSetDefaultOutlookCalendarMapping method_AMSSetDefaultOutlookCalendarMapping = NULL;
static tf_AMSSetDesignatedProviderForDataClassName method_AMSSetDesignatedProviderForDataClassName = NULL;
static tf_AMSSetFilteredCollectionNamesForDataClassName method_AMSSetFilteredCollectionNamesForDataClassName = NULL;
static tf_AMSSetNewRecordCalendarName method_AMSSetNewRecordCalendarName = NULL;
static tf_AMSSetNewRecordGroupName method_AMSSetNewRecordGroupName = NULL;
static tf_AMSSubmitCrashReportsFromTarget method_AMSSubmitCrashReportsFromTarget = NULL;
static tf_AMSSubmitRestoreLogFromPath method_AMSSubmitRestoreLogFromPath = NULL;
static tf_AMSUnregisterTarget method_AMSUnregisterTarget = NULL;
static tf_ASRServerHandleConnection method_ASRServerHandleConnection = NULL;
static tf_RCGetSystemPartitionExtrasSizeForDevice method_RCGetSystemPartitionExtrasSizeForDevice = NULL;
static tf_USBMuxConnectByPort method_USBMuxConnectByPort = NULL;
static tf_USBMuxListenerClose method_USBMuxListenerClose = NULL;
static tf_USBMuxListenerCreate method_USBMuxListenerCreate = NULL;
static tf_USBMuxListenerSetDebug method_USBMuxListenerSetDebug = NULL;
static tf_kAFCErrorCodeKey method_kAFCErrorCodeKey = NULL;
static tf_kAFCErrorDebugDescriptionKey method_kAFCErrorDebugDescriptionKey = NULL;
static tf_kAFCErrorDescriptionKey method_kAFCErrorDescriptionKey = NULL;
static tf_kAFCErrorDomain method_kAFCErrorDomain = NULL;
static tf_kAFCErrorDomainKey method_kAFCErrorDomainKey = NULL;
static tf_kAFCErrorExtendedInfoKey method_kAFCErrorExtendedInfoKey = NULL;
static tf_kAFCErrorFileLineKey method_kAFCErrorFileLineKey = NULL;
static tf_kAFCErrorFileNameKey method_kAFCErrorFileNameKey = NULL;
static tf_kAFCErrorLocalizedDescriptionKey method_kAFCErrorLocalizedDescriptionKey = NULL;
static tf_kAFCErrorLocalizedFailureReasonKey method_kAFCErrorLocalizedFailureReasonKey = NULL;
static tf_kAFCErrorLocalizedRecoverySuggestionKey method_kAFCErrorLocalizedRecoverySuggestionKey = NULL;
static tf_kAFCErrorUnderlyingErrorKey method_kAFCErrorUnderlyingErrorKey = NULL;
static tf_kAFCErrorVersionKey method_kAFCErrorVersionKey = NULL;
static tf_kAFCHeaderKeyHeaderLength method_kAFCHeaderKeyHeaderLength = NULL;
static tf_kAFCHeaderKeyPacketData method_kAFCHeaderKeyPacketData = NULL;
static tf_kAFCHeaderKeyPacketID method_kAFCHeaderKeyPacketID = NULL;
static tf_kAFCHeaderKeyPacketLength method_kAFCHeaderKeyPacketLength = NULL;
static tf_kAFCHeaderKeyPacketType method_kAFCHeaderKeyPacketType = NULL;
static tf_kAFCHeaderKeySignature method_kAFCHeaderKeySignature = NULL;
static tf_kAMRestorableInvalidClientID method_kAMRestorableInvalidClientID = NULL;
