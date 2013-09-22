// This file is used by Code Analysis to maintain 
// CA_GLOBAL_SUPPRESS_MESSAGE macros that are applied to this project.
// Project-level suppressions either have no target or are given 
// a specific target and scoped to a namespace, type, member, etc.
//
// To add a suppression to this file, right-click the message in the 
// Code Analysis results, point to "Suppress Message", and click 
// "In Suppression File".
// You do not need to add suppressions to this file manually.

CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1027:MarkEnumsWithFlags", Scope="type", Target="ImageMagick.AlphaOption");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1030:UseEventsWhereAppropriate", Scope="member", Target="ImageMagick.MagickImage.#Raise(System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1030:UseEventsWhereAppropriate", Scope="member", Target="ImageMagick.MagickImage.#Raise(System.Int32,System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1024:UsePropertiesWhereAppropriate", Scope="member", Target="ImageMagick.MagickImage.#GetColorProfile()");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1024:UsePropertiesWhereAppropriate", Scope="member", Target="ImageMagick.MagickImage.#GetExifProfile()");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Maintainability", "CA1506:AvoidExcessiveClassCoupling", Scope="type", Target="ImageMagick.MagickScript");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA1724:TypeNamesShouldNotMatchNamespaces", Scope="type", Target="ImageMagick.Channels");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA2204:Literals should be spelled correctly", MessageId="MagickImage", Scope="member", Target="ImageMagick.MagickReadSettings.#Apply(Magick.Image*)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA2204:Literals should be spelled correctly", MessageId="FrameCount", Scope="member", Target="ImageMagick.MagickReadSettings.#Apply(Magick.Image*)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA2204:Literals should be spelled correctly", MessageId="PixelStorage", Scope="member", Target="ImageMagick.MagickReader.#Read(std.list<Magick::Image,std::allocator<Magick::Image> >*,System.Byte[],ImageMagick.MagickReadSettings)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA2204:Literals should be spelled correctly", MessageId="PixelStorage", Scope="member", Target="ImageMagick.MagickReader.#Read(std.list<Magick::Image,std::allocator<Magick::Image> >*,System.String,ImageMagick.MagickReadSettings)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA1726:UsePreferredTerms", MessageId="flag", Scope="member", Target="ImageMagick.MagickImage.#SetOption(ImageMagick.MagickFormat,System.String,System.Boolean)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableRectangle.#Initialize(System.Double,System.Double,System.Double,System.Double)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableViewbox.#Initialize(System.Double,System.Double,System.Double,System.Double)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableViewbox.#Initialize(System.Int32,System.Int32,System.Int32,System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableAffine>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableArc>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableBezier>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableCircle>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableClipPath>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableColor>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableCompositeImage>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableDashArray>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableDashOffset>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableEllipse>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableFillColor>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableFillOpacity>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableFillRule>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableFont>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableGravity>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableLine>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableMatte>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableMiterLimit>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePath>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePointSize>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePolygon>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePolyline>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePopClipPath>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePopGraphicContext>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePopPattern>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePushClipPath>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePushGraphicContext>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePushPattern>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawablePoint>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableRectangle>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableRotation>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableRoundRectangle>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableScaling>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableSkewX>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableSkewY>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableStrokeAntialias>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableStrokeColor>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableStrokeLineCap>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableStrokeLineJoin>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableStrokeOpacity>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableStrokeWidth>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableText>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableTextAntialias>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableTextDecoration>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableTextUnderColor>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableTranslation>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.DrawableWrapper<Magick::DrawableViewbox>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.ExifReader.#GetString(System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.ExifReader.#GetUInt16()");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.ExifReader.#GetUInt32()");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.MagickGeometry.#Initialize(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.MagickImageInfo.#CreateReadSettings()");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.MagickReader.#Read(Magick.Blob*,System.String)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.MagickReader.#Read(Magick.Blob*,System.IO.Stream)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.PathWrapper<Magick::PathArcAbs>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="ImageMagick.Pixel.#Initialize(System.Int32,System.Int32,System.Single[])");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1814:PreferJaggedArraysOverMultidimensional", MessageId="Member", Scope="member", Target="ImageMagick.MatrixDouble.#_Values");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1814:PreferJaggedArraysOverMultidimensional", MessageId="Body", Scope="member", Target="ImageMagick.MatrixDouble.#Initialize(System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1819:PropertiesShouldNotReturnArrays", Scope="member", Target="ImageMagick.MagickImage.#StrokeDashArray");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2202:Do not dispose objects multiple times", Scope="member", Target="ImageMagick.MagickScript.#.ctor(System.Xml.XPath.IXPathNavigable)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2233:OperationsShouldNotOverflow", MessageId="arrayIndex+1", Scope="member", Target="ImageMagick.MagickImageCollection.#CopyTo(ImageMagick.MagickImage[],System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2233:OperationsShouldNotOverflow", MessageId="order-1", Scope="member", Target="ImageMagick.MatrixColor.#.ctor(System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2225:OperatorOverloadsHaveNamedAlternates", Scope="member", Target="ImageMagick.MagickGeometry.#op_Explicit(System.Drawing.Rectangle):ImageMagick.MagickGeometry");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2225:OperatorOverloadsHaveNamedAlternates", Scope="member", Target="ImageMagick.MagickGeometry.#op_Explicit(System.String):ImageMagick.MagickGeometry");
