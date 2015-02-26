/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <Preferences/SUManagerClientDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Preferences/SUNetworkObserver.h>
#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>

@class SUManagerClient, SUDownload, SUDescriptor, PSSpecifier, SUTitleCell, NSError, UIAlertView, RUILoader, NSMutableArray, UINavigationController, NSURL, NSString;

@interface SoftwareUpdatePrefController : PSListController <SUManagerClientDelegate, UITableViewDelegate, SUNetworkObserver, RUIObjectModelDelegate> {

	SUManagerClient* _SUManager;
	SUDownload* _download;
	SUDescriptor* _update;
	PSSpecifier* _titleGroup;
	SUTitleCell* _titleCell;
	PSSpecifier* _installButtonGroup;
	PSSpecifier* _installButtonSpecifier;
	int _suState;
	NSError* _suError;
	int _networkType;
	BOOL _manuallyStartedScan;
	BOOL _anyScanInProgress;
	BOOL _disableInstallButton;
	BOOL _connectedToPowerSource;
	BOOL _presentedCellularFees;
	SEL _termsAcceptanceAction;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;
	UIAlertView* _softwareUpdateAlert;
	UIAlertView* _agreeConfirmationAlert;
	RUILoader* _termsLoader;
	NSMutableArray* _objectModels;
	UINavigationController* _modalBuddyMLController;
	NSURL* _genericTermsURL;
	NSString* _agreeURL;
	BOOL _termsLoading;

}

@property (nonatomic,retain) SUDownload * download;              //@synthesize download=_download - In the implementation block
@property (nonatomic,retain) SUDescriptor * update;              //@synthesize update=_update - In the implementation block
@property (assign,nonatomic) int SUState;                        //@synthesize suState=_suState - In the implementation block
@property (nonatomic,retain) NSError * SUError;                  //@synthesize suError=_suError - In the implementation block
+(id)_SUManagerClientClass;
-(void)setSUState:(int)arg1 ;
-(int)SUState;
-(void)_batteryStateChanged:(id)arg1 ;
-(void)handleInstallationError:(id)arg1 ;
-(void)setSUError:(id)arg1 disableButton:(BOOL)arg2 reload:(BOOL)arg3 ;
-(void)setDownload:(id)arg1 ;
-(void)scanForUpdate;
-(void)updateStateFromDownload:(id)arg1 ;
-(void)handleScanError:(id)arg1 ;
-(void)scanFinishedWithUpdate:(id)arg1 error:(id)arg2 ;
-(id)humanReadableDescriptionForError:(id)arg1 enableButton:(BOOL*)arg2 showAsButtonFooter:(BOOL*)arg3 ;
-(id)specifiersForState:(int)arg1 ;
-(void)handleDownloadError:(id)arg1 ;
-(void)downloadAndInstall:(id)arg1 ;
-(void)install:(id)arg1 ;
-(void)openUsageSettings:(id)arg1 ;
-(void)presentError:(id)arg1 ;
-(void)setSUError:(id)arg1 ;
-(BOOL)_alertForDownloadConstraintsWithContext:(id)arg1 ;
-(void)_reallyResumeDownloadAcceptingCellularFees:(BOOL)arg1 ;
-(void)_termsAgree;
-(void)_termsDisagree;
-(void)_loadTermsRemoteUIFailureWithError:(id)arg1 ;
-(void)_loadTermsRemoteUIWithResponseData:(id)arg1 ;
-(void)_loadRemoteUITermsWithCloud;
-(void)_loadTermsFromUpdateAsset;
-(void)_reallyDownloadAndInstallAcceptingCellularFees:(BOOL)arg1 ;
-(void)downloadTermsAccepted;
-(void)presentTermsIfNecessaryWithAcceptanceAction:(SEL)arg1 ;
-(void)_reallyInstall;
-(void)_combinedTermsAgree;
-(void)detailedReleaseNotesDonePressed:(id)arg1 ;
-(id)SUError;
-(id)download;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)update;
-(void)willEnterForeground;
-(void)setUpdate:(id)arg1 ;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void)updateState;
-(id)specifiers;
-(Class)tableViewClass;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2 ;
-(void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3 ;
-(void)client:(id)arg1 downloadDidStart:(id)arg2 ;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2 ;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2 ;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3 ;
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(void)resumeDownload:(id)arg1 ;
@end
