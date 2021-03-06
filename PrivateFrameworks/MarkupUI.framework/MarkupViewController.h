/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MarkupViewController : UIViewController <AKControllerDelegateProtocol, MUPDFContentViewControllerDelegate, UINavigationBarDelegate, UIToolbarDelegate> {
    NSUndoManager * _akUndoManager;
    BOOL  _allowShakeToUndo;
    BOOL  _alreadyLoggedSavingForThisDocument;
    AKController * _annotationController;
    UIColor * _backgroundColor;
    UIBarButtonItem * _cancelButton;
    BOOL  _centersIgnoringContentInsets;
    UIView * _contentContainerView;
    UIViewController<MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate> * _contentViewController;
    <MarkupViewControllerDelegate> * _delegate;
    id  _digestedSourceContent;
    UIBarButtonItem * _doneButton;
    BOOL  _encryptPrivateMetadata;
    BOOL  _forcesPDFViewTopAlignment;
    NSString * _hostProcessBundleIdentifier;
    float  _initialContentScale;
    BOOL  _isAnimatingMarkupExtensionTransition;
    UINavigationBar * _navBar;
    UIColor * _navBarTitleColor;
    UINavigationItem * _navItem;
    BOOL  _navigationModeHorizontal;
    BOOL  _needToPerformDocumentClosedTeardown;
    BOOL  _needToPerformFullTeardown;
    MUCGPDFReader * _pdfReader;
    BOOL  _pencilAlwaysDraws;
    NSString * _preferredFileDisplayName;
    BOOL  _shapeDetectionEnabled;
    BOOL  _showAsFormSheet;
    BOOL  _showThumbnailViewForMultipage;
    id  _sourceContent;
    NSString * _sourceContentType;
    BOOL  _thumbnailViewHidden;
    UIToolbar * _toolbar;
    NSLayoutConstraint * _toolbarBottomConstraint;
    BOOL  _toolbarHidden;
    UIColor * _toolbarItemTintColor;
    int  _toolbarPosition;
    UIColor * _toolbarTintColor;
    NSLayoutConstraint * _toolbarTopAttachedConstraint;
    NSLayoutConstraint * _toolbarTopConstraint;
    UIView * _transitionDimmingView;
    BOOL  _useFancyTransition;
    BOOL  _userDidCancel;
    UIView * _whiteView;
}

@property (nonatomic, retain) NSUndoManager *akUndoManager;
@property (nonatomic) BOOL allowShakeToUndo;
@property (nonatomic) BOOL alreadyLoggedSavingForThisDocument;
@property (retain) AKController *annotationController;
@property (nonatomic) BOOL annotationEditingEnabled;
@property (copy) UIColor *backgroundColor;
@property (retain) UIBarButtonItem *cancelButton;
@property (nonatomic) BOOL centersIgnoringContentInsets;
@property (retain) UIView *contentContainerView;
@property (retain) UIViewController<MUContentViewControllerProtocol><MUContentViewControllerAKControllerSubdelegate> *contentViewController;
@property (nonatomic) unsigned int currentPDFPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MarkupViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) id digestedSourceContent;
@property (retain) UIBarButtonItem *doneButton;
@property BOOL encryptPrivateMetadata;
@property (nonatomic) BOOL forcesPDFViewTopAlignment;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *hostProcessBundleIdentifier;
@property float initialContentScale;
@property BOOL isAnimatingMarkupExtensionTransition;
@property (nonatomic, retain) UINavigationBar *navBar;
@property (copy) UIColor *navBarTitleColor;
@property (nonatomic, retain) UINavigationItem *navItem;
@property (getter=isNavigationModeHorizontal, nonatomic) BOOL navigationModeHorizontal;
@property BOOL needToPerformDocumentClosedTeardown;
@property BOOL needToPerformFullTeardown;
@property (nonatomic, readonly) NSString *outputType;
@property (readonly) PDFDocument *pdfDocument;
@property (retain) MUCGPDFReader *pdfReader;
@property (readonly) PDFView *pdfView;
@property (nonatomic) BOOL pencilAlwaysDraws;
@property (nonatomic, copy) NSString *preferredFileDisplayName;
@property (getter=isShapeDetectionEnabled, nonatomic) BOOL shapeDetectionEnabled;
@property BOOL showAsFormSheet;
@property (nonatomic) BOOL showThumbnailViewForMultipage;
@property (nonatomic, retain) id sourceContent;
@property (retain) NSString *sourceContentType;
@property (readonly) Class superclass;
@property (getter=isThumbnailViewHidden, nonatomic) BOOL thumbnailViewHidden;
@property (retain) UIToolbar *toolbar;
@property (retain) NSLayoutConstraint *toolbarBottomConstraint;
@property (getter=isToolbarHidden, nonatomic) BOOL toolbarHidden;
@property (copy) UIColor *toolbarItemTintColor;
@property (nonatomic) int toolbarPosition;
@property (copy) UIColor *toolbarTintColor;
@property (retain) NSLayoutConstraint *toolbarTopAttachedConstraint;
@property (retain) NSLayoutConstraint *toolbarTopConstraint;
@property (retain) UIView *transitionDimmingView;
@property BOOL useFancyTransition;
@property BOOL userDidCancel;
@property (retain) UIView *whiteView;

+ (BOOL)_isInLowMemoryEnvironment;
+ (float)_maxImageDimensionInView;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (BOOL)hasPrivateImageMetadata:(id)arg1;

- (void).cxx_destruct;
- (void)_bailFailedAnimateEnterMarkup;
- (void)_cancel;
- (void)_commonInit;
- (void)_createCancelDoneNavBar;
- (id)_effectiveBackgroundColor;
- (id)_effectiveNavBarTitleColor;
- (id)_effectiveToolbarItemTintColor;
- (id)_effectiveToolbarTintColor;
- (void)_installContentViewControllerForUTI:(id)arg1;
- (void)_loadSourceContentWithCompletion:(id /* block */)arg1;
- (id)_markupBlackColor;
- (void)_saveEditing:(id)arg1;
- (void)_setData:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_setFileURL:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_setupInitialBaseModelScaleFactorWithScreenSize:(struct CGSize { float x1; float x2; })arg1 windowDecorationSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_showTextStyleOptions:(id)arg1;
- (BOOL)_sourceImageMayContainBaseImageAndModel;
- (void)_startObservingAnnotationController;
- (void)_stopObservingAnnotationController;
- (void)_updateAndLoadSourceContent:(id)arg1 withArchivedModelData:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_updateAppearanceForTraitCollection:(id)arg1;
- (void)_updateConstraintsForBarPosition:(int)arg1;
- (void)_updateUndoButtonWithController:(id)arg1;
- (BOOL)_writeToDataConsumer:(struct CGDataConsumer { }*)arg1 embedSourceImageAndEditModel:(BOOL)arg2 error:(id*)arg3;
- (void)adjustContentInsetsForBars;
- (id)akUndoManager;
- (BOOL)allowShakeToUndo;
- (BOOL)alreadyLoggedSavingForThisDocument;
- (id)annotationController;
- (BOOL)annotationEditingEnabled;
- (id)backgroundColor;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancel:(id)arg1;
- (id)cancelButton;
- (BOOL)centersIgnoringContentInsets;
- (id)characterIndexesForQuadPoints:(id)arg1 onPageAtIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (void)clearHighlightableSelectionForAnnotationController:(id)arg1;
- (id)contentContainerView;
- (id)contentViewController;
- (BOOL)controller:(id)arg1 shouldHandleURL:(id)arg2;
- (void)controller:(id)arg1 willPlaceSingleShotAnnotation:(id)arg2 onProposedPageModelController:(id*)arg3;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (BOOL)controllerShouldDetectFormElements:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromModelToOverlayWithPageIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromOverlayToModelWithPageIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (id)createArchivedModelData;
- (unsigned int)currentPDFPageIndex;
- (id)dataRepresentationEmbeddingSourceImageAndEditModel:(BOOL)arg1 error:(id*)arg2;
- (id)dataRepresentationWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delete:(id)arg1;
- (id)digestedSourceContent;
- (void)documentDidCloseTeardown;
- (void)done:(id)arg1;
- (id)doneButton;
- (void)duplicate:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (BOOL)encryptPrivateMetadata;
- (id)filteredToolbarItemsForItems:(id)arg1 fromController:(id)arg2;
- (BOOL)forcesPDFViewTopAlignment;
- (void)fullTeardown;
- (BOOL)hasHighlightableSelectionForAnnotationController:(id)arg1;
- (id)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned int)arg1 forAnnotationController:(id)arg2;
- (id)hostProcessBundleIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (float)initialContentScale;
- (BOOL)isAnimatingMarkupExtensionTransition;
- (BOOL)isNavigationModeHorizontal;
- (BOOL)isShapeDetectionEnabled;
- (BOOL)isThumbnailViewHidden;
- (BOOL)isToolbarHidden;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned int)arg1 forAnnotationController:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maxPageRectWithPageIndex:(unsigned int)arg1 forAnnotationController:(id)arg2;
- (float)modelBaseScaleFactorOfPageAtIndex:(unsigned int)arg1 forAnnotationController:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (id)navBar;
- (id)navBarTitleColor;
- (id)navItem;
- (BOOL)needToPerformDocumentClosedTeardown;
- (BOOL)needToPerformFullTeardown;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(float)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(unsigned int)arg4 forAnnotationController:(id)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputType;
- (id)pdfDocument;
- (id)pdfReader;
- (id)pdfView;
- (BOOL)pencilAlwaysDraws;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (int)positionForBar:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (id)preferredFileDisplayName;
- (int)preferredStatusBarStyle;
- (id)quadPointsForCharacterIndexes:(id)arg1 onPageAtIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (void)revert;
- (void)setAkUndoManager:(id)arg1;
- (void)setAllowShakeToUndo:(BOOL)arg1;
- (void)setAlreadyLoggedSavingForThisDocument:(BOOL)arg1;
- (void)setAnnotationController:(id)arg1;
- (void)setAnnotationEditingEnabled:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCentersIgnoringContentInsets:(BOOL)arg1;
- (void)setContentContainerView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setCurrentPDFPageIndex:(unsigned int)arg1;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDigestedSourceContent:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setEncryptPrivateMetadata:(BOOL)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 placeholderImage:(id)arg3;
- (void)setForcesPDFViewTopAlignment:(BOOL)arg1;
- (void)setHostProcessBundleIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setInitialContentScale:(float)arg1;
- (void)setIsAnimatingMarkupExtensionTransition:(BOOL)arg1;
- (void)setNavBar:(id)arg1;
- (void)setNavBarTitleColor:(id)arg1;
- (void)setNavItem:(id)arg1;
- (void)setNavigationModeHorizontal:(BOOL)arg1;
- (void)setNeedToPerformDocumentClosedTeardown:(BOOL)arg1;
- (void)setNeedToPerformFullTeardown:(BOOL)arg1;
- (void)setPdfReader:(id)arg1;
- (void)setPencilAlwaysDraws:(BOOL)arg1;
- (void)setPreferredFileDisplayName:(id)arg1;
- (void)setShapeDetectionEnabled:(BOOL)arg1;
- (void)setShowAsFormSheet:(BOOL)arg1;
- (void)setShowThumbnailViewForMultipage:(BOOL)arg1;
- (void)setSourceContent:(id)arg1;
- (void)setSourceContent:(id)arg1 withArchivedModelData:(id)arg2;
- (void)setSourceContentType:(id)arg1;
- (void)setThumbnailViewHidden:(BOOL)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarBottomConstraint:(id)arg1;
- (void)setToolbarHidden:(BOOL)arg1;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setToolbarItemTintColor:(id)arg1;
- (void)setToolbarPosition:(int)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (void)setToolbarTopAttachedConstraint:(id)arg1;
- (void)setToolbarTopConstraint:(id)arg1;
- (void)setTransitionDimmingView:(id)arg1;
- (void)setUseFancyTransition:(BOOL)arg1;
- (void)setUserDidCancel:(BOOL)arg1;
- (void)setWhiteView:(id)arg1;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint { float x1; float x2; })arg1 onOverlayAtPageIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 onOverlayAtPageIndex:(unsigned int)arg2 forAnnotationController:(id)arg3;
- (BOOL)showAsFormSheet;
- (BOOL)showThumbnailViewForMultipage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sketchOverlayInsets;
- (id)sourceContent;
- (id)sourceContentType;
- (id)toolbar;
- (id)toolbarBottomConstraint;
- (id)toolbarItemTintColor;
- (int)toolbarPosition;
- (id)toolbarTintColor;
- (id)toolbarTopAttachedConstraint;
- (id)toolbarTopConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transitionDimmingView;
- (id)undoManagerForAnnotationController:(id)arg1;
- (BOOL)useFancyTransition;
- (BOOL)userDidCancel;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (id)whiteView;
- (void)willBeginLoadingNewDocument;
- (BOOL)writeToURL:(id)arg1 embeddingSourceImageAndEditModel:(BOOL)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 error:(id*)arg2;

@end
