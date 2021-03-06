/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ASAccountActorMessages
@required
-(oneway void)cancelTaskWithID:(int)arg1;
-(oneway void)shutdown;
-(oneway void)setAccount:(id)arg1;
-(oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
-(int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(char)arg8 consumer:(id)arg9 context:(id)arg10;
-(oneway void)cancelAllSearchQueries;
-(char)searchQueriesRunning;
-(oneway void)_daemonDiedNotification:(id)arg1;
-(oneway void)_folderUpdatedNotification:(id)arg1;
-(oneway void)_newASPolicyKeyNotification:(id)arg1;
-(oneway void)_folderHierarchyChanged;
-(oneway void)_foldersThatExternalClientsCareAboutChanged;
-(oneway void)startup;
-(char)generatesBulletins;
-(oneway void)setGeneratesBulletins:(char)arg1;
-(id)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1;
-(int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(char)arg4 consumer:(id)arg5;
-(oneway void)_accountPasswordChanged;
-(id)customSignature;
-(oneway void)setCustomSignature:(id)arg1;
-(id)mailboxes;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(void)performFolderChange:(id)arg1 isUserRequested:(char)arg2;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)mailNumberOfPastDaysToSync;
-(int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(char)arg4 consumer:(id)arg5;
-(int)performMoveRequests:(id)arg1 consumer:(id)arg2;
-(char)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
-(id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3;
-(id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)arg1 withTag:(id*)arg2;
-(oneway void)monitorFoldersForUpdates:(id)arg1;
-(oneway void)stopMonitoringAllFolders;
-(int)supportsConversations;
-(oneway void)performSearchQuery:(id)arg1;
-(oneway void)cancelSearchQuery:(id)arg1;
-(char)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
-(oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
-(id)signingIdentityPersistentReference;
-(oneway void)setSigningIdentityPersistentReference:(id)arg1;
-(id)encryptionIdentityPersistentReference;
-(oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
-(int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
-(int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
-(int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
-(int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(char)arg8 isUserRequested:(char)arg9 consumer:(id)arg10 context:(id)arg11;

@end

