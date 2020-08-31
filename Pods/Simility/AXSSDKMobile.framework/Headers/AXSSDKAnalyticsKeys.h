//
//  AXSSDKAnalyticsKeys.h
//  AXSSDKMobile
//
//  Created by Dennis Padilla on 7/6/15.
//  Copyright (c) 2015 AXS. All rights reserved.
//

#pragma mark - Actions
static NSString * const AXSSDKAnalyticsActionPullToRefresh = @"pull_to_refresh";
static NSString * const AXSSDKAnalyticsActionTapped = @"tapped";
static NSString * const AXSSDKAnalyticsActionSwiped = @"swiped";
static NSString * const AXSSDKAnalyticsActionReceived = @"received";
static NSString * const AXSSDKAnalyticsActionOn = @"on";
static NSString * const AXSSDKAnalyticsActionOff = @"off";

#pragma mark - Labels
static NSString * const AXSSDKAnalyticsLabelMenuMyEvents = @"menu_my_events";

static NSString * const AXSSDKAnalyticsLabelMenuSettings = @"menu_settings";

static NSString * const AXSSDKAnalyticsLabelMyEventsTable= @"myevents_table";
static NSString * const AXSSDKAnalyticsLabelEventTickets= @"event_tickets";
static NSString * const AXSSDKAnalyticsLabelTicketShare = @"ticket_share";
static NSString * const AXSSDKAnalyticsLabelTicketRevoke = @"ticket_revoke";
static NSString * const AXSSDKAnalyticsLabelTicketBarcode = @"ticket_barcode";
static NSString * const AXSSDKAnalyticsLabelTicketBarcodeOpen = @"ticket_barcode_open";
static NSString * const AXSSDKAnalyticsLabelTicketBarcodeClose = @"ticket_barcode_close";

static NSString * const AXSSDKAnalyticsLabelLinkedAccounts= @"linked_accounts";
static NSString * const AXSSDKAnalyticsLabelUnlinkAccount= @"unlink_account";
static NSString * const AXSSDKAnalyticsLabelAccountInfo = @"account_info";

static NSString * const AXSSDKAnalyticsLabelPushNotification = @"push_notification";

static NSString * const AXSSDKAnalyticsLabelBluetoothPermission = @"phone_bluetooth_permission";
static NSString * const AXSSDKAnalyticsLabelLocationPermission = @"app_location_permission";
static NSString * const AXSSDKAnalyticsLabelPushNotificationPermission = @"app_push_notification_permission";

#pragma mark - Pages
static NSString * const AXSSDKAnalyticsPageMenu = @"menu page";
static NSString * const AXSSDKAnalyticsPageShareTickets = @"share tickets page";
static NSString * const AXSSDKAnalyticsPageMyEvents = @"my events page";
static NSString * const AXSSDKAnalyticsPageEventTickets = @"event tickets page";
static NSString * const AXSSDKAnalyticsPageEventBarcode = @"event barcode page";
static NSString * const AXSSDKAnalyticsPageSignIn = @"sign in page";
static NSString * const AXSSDKAnalyticsPageSignUp = @"sign up page";
static NSString * const AXSSDKAnalyticsPageSettings = @"settings page";
static NSString * const AXSSDKAnalyticsPageLinkedAccounts = @"linked accounts page";
static NSString * const AXSSDKAnalyticsPageAccountInfo = @"account info page";
static NSString * const AXSSDKAnalyticsPageAppBackground = @"app in background";
static NSString * const AXSSDKAnalyticsPageAppActive = @"app active";
static NSString * const AXSSDKAnalyticsPageAppLaunched = @"app launched";
static NSString * const AXSSDKAnalyticsPageTopNavBar = @"top navigation bar";

#pragma mark - Pages FlashSeats
static NSString * const AXSSDKAnalyticsPageFSFindTicketsFilter1 = @"fs filter: qty of tickets";
static NSString * const AXSSDKAnalyticsPageFSFindTicketsFilter2 = @"fs filter: price range";
static NSString * const AXSSDKAnalyticsPageFSFindTicketsFilter3 = @"fs filter: section";
static NSString * const AXSSDKAnalyticsPageFSFindTicketsFilterResult = @"fs filter: result";
static NSString * const AXSSDKAnalyticsPageFSFindTicketsFilterAll = @"fs filter: all";
static NSString * const AXSSDKAnalyticsPageFSReviewSeats = @"fs review seats";
static NSString * const AXSSDKAnalyticsPageFSReviewSeatsAll = @"fs review seats all";
static NSString * const AXSSDKAnalyticsPageFSViewTickets = @"fs view tickets";
static NSString * const AXSSDKAnalyticsPageFSSignIn = @"fs sign in";
static NSString * const AXSSDKAnalyticsPageFSSignUp = @"fs sign up";
static NSString * const AXSSDKAnalyticsPageFSForgotPassword = @"fs forgot password";
static NSString * const AXSSDKAnalyticsPageFSAddPayment = @"fs payment method";
static NSString * const AXSSDKAnalyticsPageFSPhoneVerify = @"fs phone verify";
static NSString * const AXSSDKAnalyticsPageFSPhoneVerifyConfirm = @"fs phone verify confirm";
static NSString * const AXSSDKAnalyticsPageFSPurchaseReview = @"fs purchase review";
static NSString * const AXSSDKAnalyticsPageFSPurchaseComplete = @"fs purchase complete";
static NSString * const AXSSDKAnalyticsPageFSFindTickets = @"fs event listing";
static NSString * const AXSSDKAnalyticsPageFSMyEvent = @"fs my events";
static NSString * const AXSSDKAnalyticsPageFSMobileId = @"fs mobile id";
static NSString * const AXSSDKAnalyticsPageFSListingOptions = @"fs listing options";
static NSString * const AXSSDKAnalyticsPageFSListingOptionsSeats = @"fs listing options seats";
static NSString * const AXSSDKAnalyticsPageFSListingOptionsPrice = @"fs listing options price";
static NSString * const AXSSDKAnalyticsPageFSListingReview = @"fs listing review";
static NSString * const AXSSDKAnalyticsPageFSListingRetract = @"fs listing retract";
static NSString * const AXSSDKAnalyticsPageFSMyEventDetail = @"fs my event detail";
static NSString * const AXSSDKAnalyticsPageFSTransferOptions = @"fs transfer options";
static NSString * const AXSSDKAnalyticsPageFSTransferReview = @"fs transfer review";
static NSString * const AXSSDKAnalyticsPageFSTransferSummary = @"fs transfer summary";
static NSString * const AXSSDKAnalyticsPageFSTransferredTickets = @"fs transferred tickets";


#pragma mark - Page Types FlashSeats
static NSString * const AXSSDKAnalyticsPageTypeFSEventListing = @"fs event listing";
static NSString * const AXSSDKAnalyticsPageTypeFSPurchase = @"fs purchase flow";
static NSString * const AXSSDKAnalyticsPageTypeFSMyEvents = @"fs my events";
static NSString * const AXSSDKAnalyticsPageTypeFSScan = @"fs scan";
static NSString * const AXSSDKAnalyticsPageTypeFSSell = @"fs sell flow";
static NSString * const AXSSDKAnalyticsPageTypeFSTransfer = @"fs transfer flow";
static NSString * const AXSSDKAnalyticsPageTypeFSSignIn = @"fs sign in";
static NSString * const AXSSDKAnalyticsPageTypeFSSignUp = @"fs sign up";
