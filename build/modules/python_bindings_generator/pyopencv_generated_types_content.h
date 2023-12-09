//================================================================================
// AKAZE (Generic)
//================================================================================

// GetSet (AKAZE)



// Methods (AKAZE)

static PyObject* pyopencv_cv_AKAZE_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_descriptor_type = NULL;
    AKAZE_DescriptorType descriptor_type=AKAZE::DESCRIPTOR_MLDB;
    PyObject* pyobj_descriptor_size = NULL;
    int descriptor_size=0;
    PyObject* pyobj_descriptor_channels = NULL;
    int descriptor_channels=3;
    PyObject* pyobj_threshold = NULL;
    float threshold=0.001f;
    PyObject* pyobj_nOctaves = NULL;
    int nOctaves=4;
    PyObject* pyobj_nOctaveLayers = NULL;
    int nOctaveLayers=4;
    PyObject* pyobj_diffusivity = NULL;
    KAZE_DiffusivityType diffusivity=KAZE::DIFF_PM_G2;
    PyObject* pyobj_max_points = NULL;
    int max_points=-1;
    Ptr<AKAZE> retval;

    const char* keywords[] = { "descriptor_type", "descriptor_size", "descriptor_channels", "threshold", "nOctaves", "nOctaveLayers", "diffusivity", "max_points", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOOOOOOO:AKAZE.create", (char**)keywords, &pyobj_descriptor_type, &pyobj_descriptor_size, &pyobj_descriptor_channels, &pyobj_threshold, &pyobj_nOctaves, &pyobj_nOctaveLayers, &pyobj_diffusivity, &pyobj_max_points) &&
        pyopencv_to_safe(pyobj_descriptor_type, descriptor_type, ArgInfo("descriptor_type", 0)) &&
        pyopencv_to_safe(pyobj_descriptor_size, descriptor_size, ArgInfo("descriptor_size", 0)) &&
        pyopencv_to_safe(pyobj_descriptor_channels, descriptor_channels, ArgInfo("descriptor_channels", 0)) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) &&
        pyopencv_to_safe(pyobj_nOctaves, nOctaves, ArgInfo("nOctaves", 0)) &&
        pyopencv_to_safe(pyobj_nOctaveLayers, nOctaveLayers, ArgInfo("nOctaveLayers", 0)) &&
        pyopencv_to_safe(pyobj_diffusivity, diffusivity, ArgInfo("diffusivity", 0)) &&
        pyopencv_to_safe(pyobj_max_points, max_points, ArgInfo("max_points", 0)) )
    {
        ERRWRAP2(retval = cv::AKAZE::create(descriptor_type, descriptor_size, descriptor_channels, threshold, nOctaves, nOctaveLayers, diffusivity, max_points));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDescriptorChannels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorChannels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDescriptorSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDescriptorType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    AKAZE::DescriptorType retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getDiffusivity(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    KAZE::DiffusivityType retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDiffusivity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getMaxPoints(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxPoints());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getNOctaveLayers(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaveLayers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getNOctaves(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaves());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_getThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDescriptorChannels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    PyObject* pyobj_dch = NULL;
    int dch=0;

    const char* keywords[] = { "dch", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AKAZE.setDescriptorChannels", (char**)keywords, &pyobj_dch) &&
        pyopencv_to_safe(pyobj_dch, dch, ArgInfo("dch", 0)) )
    {
        ERRWRAP2(_self_->setDescriptorChannels(dch));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDescriptorSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    PyObject* pyobj_dsize = NULL;
    int dsize=0;

    const char* keywords[] = { "dsize", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AKAZE.setDescriptorSize", (char**)keywords, &pyobj_dsize) &&
        pyopencv_to_safe(pyobj_dsize, dsize, ArgInfo("dsize", 0)) )
    {
        ERRWRAP2(_self_->setDescriptorSize(dsize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDescriptorType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    PyObject* pyobj_dtype = NULL;
    AKAZE_DescriptorType dtype=static_cast<AKAZE_DescriptorType>(0);

    const char* keywords[] = { "dtype", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AKAZE.setDescriptorType", (char**)keywords, &pyobj_dtype) &&
        pyopencv_to_safe(pyobj_dtype, dtype, ArgInfo("dtype", 0)) )
    {
        ERRWRAP2(_self_->setDescriptorType(dtype));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setDiffusivity(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    PyObject* pyobj_diff = NULL;
    KAZE_DiffusivityType diff=static_cast<KAZE_DiffusivityType>(0);

    const char* keywords[] = { "diff", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AKAZE.setDiffusivity", (char**)keywords, &pyobj_diff) &&
        pyopencv_to_safe(pyobj_diff, diff, ArgInfo("diff", 0)) )
    {
        ERRWRAP2(_self_->setDiffusivity(diff));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setMaxPoints(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    PyObject* pyobj_max_points = NULL;
    int max_points=0;

    const char* keywords[] = { "max_points", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AKAZE.setMaxPoints", (char**)keywords, &pyobj_max_points) &&
        pyopencv_to_safe(pyobj_max_points, max_points, ArgInfo("max_points", 0)) )
    {
        ERRWRAP2(_self_->setMaxPoints(max_points));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setNOctaveLayers(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    PyObject* pyobj_octaveLayers = NULL;
    int octaveLayers=0;

    const char* keywords[] = { "octaveLayers", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AKAZE.setNOctaveLayers", (char**)keywords, &pyobj_octaveLayers) &&
        pyopencv_to_safe(pyobj_octaveLayers, octaveLayers, ArgInfo("octaveLayers", 0)) )
    {
        ERRWRAP2(_self_->setNOctaveLayers(octaveLayers));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setNOctaves(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    PyObject* pyobj_octaves = NULL;
    int octaves=0;

    const char* keywords[] = { "octaves", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AKAZE.setNOctaves", (char**)keywords, &pyobj_octaves) &&
        pyopencv_to_safe(pyobj_octaves, octaves, ArgInfo("octaves", 0)) )
    {
        ERRWRAP2(_self_->setNOctaves(octaves));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AKAZE_setThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AKAZE> * self1 = 0;
    if (!pyopencv_AKAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AKAZE' or its derivative)");
    Ptr<cv::AKAZE> _self_ = *(self1);
    PyObject* pyobj_threshold = NULL;
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AKAZE.setThreshold", (char**)keywords, &pyobj_threshold) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (AKAZE)

static PyGetSetDef pyopencv_AKAZE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_AKAZE_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_create_static, METH_STATIC), "create([, descriptor_type[, descriptor_size[, descriptor_channels[, threshold[, nOctaves[, nOctaveLayers[, diffusivity[, max_points]]]]]]]]) -> retval\n.   @brief The AKAZE constructor\n.   \n.       @param descriptor_type Type of the extracted descriptor: DESCRIPTOR_KAZE,\n.       DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.\n.       @param descriptor_size Size of the descriptor in bits. 0 -\\> Full size\n.       @param descriptor_channels Number of channels in the descriptor (1, 2, 3)\n.       @param threshold Detector response threshold to accept point\n.       @param nOctaves Maximum octave evolution of the image\n.       @param nOctaveLayers Default number of sublevels per scale level\n.       @param diffusivity Diffusivity type. DIFF_PM_G1, DIFF_PM_G2, DIFF_WEICKERT or\n.       DIFF_CHARBONNIER\n.       @param max_points Maximum amount of returned points. In case if image contains\n.       more features, then the features with highest response are returned.\n.       Negative value means no limitation."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getDescriptorChannels", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDescriptorChannels, 0), "getDescriptorChannels() -> retval\n."},
    {"getDescriptorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDescriptorSize, 0), "getDescriptorSize() -> retval\n."},
    {"getDescriptorType", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDescriptorType, 0), "getDescriptorType() -> retval\n."},
    {"getDiffusivity", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getDiffusivity, 0), "getDiffusivity() -> retval\n."},
    {"getMaxPoints", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getMaxPoints, 0), "getMaxPoints() -> retval\n."},
    {"getNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getNOctaveLayers, 0), "getNOctaveLayers() -> retval\n."},
    {"getNOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getNOctaves, 0), "getNOctaves() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_getThreshold, 0), "getThreshold() -> retval\n."},
    {"setDescriptorChannels", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setDescriptorChannels, 0), "setDescriptorChannels(dch) -> None\n."},
    {"setDescriptorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setDescriptorSize, 0), "setDescriptorSize(dsize) -> None\n."},
    {"setDescriptorType", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setDescriptorType, 0), "setDescriptorType(dtype) -> None\n."},
    {"setDiffusivity", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setDiffusivity, 0), "setDiffusivity(diff) -> None\n."},
    {"setMaxPoints", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setMaxPoints, 0), "setMaxPoints(max_points) -> None\n."},
    {"setNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setNOctaveLayers, 0), "setNOctaveLayers(octaveLayers) -> None\n."},
    {"setNOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setNOctaves, 0), "setNOctaves(octaves) -> None\n."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_AKAZE_setThreshold, 0), "setThreshold(threshold) -> None\n."},

    {NULL,          NULL}
};

// Converter (AKAZE)

template<>
struct PyOpenCV_Converter< Ptr<cv::AKAZE> >
{
    static PyObject* from(const Ptr<cv::AKAZE>& r)
    {
        return pyopencv_AKAZE_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::AKAZE>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::AKAZE> * dst_;
        if (pyopencv_AKAZE_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::AKAZE> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// AffineFeature (Generic)
//================================================================================

// GetSet (AffineFeature)



// Methods (AffineFeature)

static PyObject* pyopencv_cv_AffineFeature_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_backend = NULL;
    Ptr<Feature2D> backend;
    PyObject* pyobj_maxTilt = NULL;
    int maxTilt=5;
    PyObject* pyobj_minTilt = NULL;
    int minTilt=0;
    PyObject* pyobj_tiltStep = NULL;
    float tiltStep=1.4142135623730951f;
    PyObject* pyobj_rotateStepBase = NULL;
    float rotateStepBase=72;
    Ptr<AffineFeature> retval;

    const char* keywords[] = { "backend", "maxTilt", "minTilt", "tiltStep", "rotateStepBase", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OOOO:AffineFeature.create", (char**)keywords, &pyobj_backend, &pyobj_maxTilt, &pyobj_minTilt, &pyobj_tiltStep, &pyobj_rotateStepBase) &&
        pyopencv_to_safe(pyobj_backend, backend, ArgInfo("backend", 0)) &&
        pyopencv_to_safe(pyobj_maxTilt, maxTilt, ArgInfo("maxTilt", 0)) &&
        pyopencv_to_safe(pyobj_minTilt, minTilt, ArgInfo("minTilt", 0)) &&
        pyopencv_to_safe(pyobj_tiltStep, tiltStep, ArgInfo("tiltStep", 0)) &&
        pyopencv_to_safe(pyobj_rotateStepBase, rotateStepBase, ArgInfo("rotateStepBase", 0)) )
    {
        ERRWRAP2(retval = cv::AffineFeature::create(backend, maxTilt, minTilt, tiltStep, rotateStepBase));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AffineFeature_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AffineFeature> * self1 = 0;
    if (!pyopencv_AffineFeature_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AffineFeature' or its derivative)");
    Ptr<cv::AffineFeature> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AffineFeature_getViewParams(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AffineFeature> * self1 = 0;
    if (!pyopencv_AffineFeature_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AffineFeature' or its derivative)");
    Ptr<cv::AffineFeature> _self_ = *(self1);
    PyObject* pyobj_tilts = NULL;
    vector_float tilts;
    PyObject* pyobj_rolls = NULL;
    vector_float rolls;

    const char* keywords[] = { "tilts", "rolls", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:AffineFeature.getViewParams", (char**)keywords, &pyobj_tilts, &pyobj_rolls) &&
        pyopencv_to_safe(pyobj_tilts, tilts, ArgInfo("tilts", 0)) &&
        pyopencv_to_safe(pyobj_rolls, rolls, ArgInfo("rolls", 0)) )
    {
        ERRWRAP2(_self_->getViewParams(tilts, rolls));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AffineFeature_setViewParams(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AffineFeature> * self1 = 0;
    if (!pyopencv_AffineFeature_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AffineFeature' or its derivative)");
    Ptr<cv::AffineFeature> _self_ = *(self1);
    PyObject* pyobj_tilts = NULL;
    vector_float tilts;
    PyObject* pyobj_rolls = NULL;
    vector_float rolls;

    const char* keywords[] = { "tilts", "rolls", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:AffineFeature.setViewParams", (char**)keywords, &pyobj_tilts, &pyobj_rolls) &&
        pyopencv_to_safe(pyobj_tilts, tilts, ArgInfo("tilts", 0)) &&
        pyopencv_to_safe(pyobj_rolls, rolls, ArgInfo("rolls", 0)) )
    {
        ERRWRAP2(_self_->setViewParams(tilts, rolls));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (AffineFeature)

static PyGetSetDef pyopencv_AffineFeature_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_AffineFeature_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_AffineFeature_create_static, METH_STATIC), "create(backend[, maxTilt[, minTilt[, tiltStep[, rotateStepBase]]]]) -> retval\n.   @param backend The detector/extractor you want to use as backend.\n.       @param maxTilt The highest power index of tilt factor. 5 is used in the paper as tilt sampling range n.\n.       @param minTilt The lowest power index of tilt factor. 0 is used in the paper.\n.       @param tiltStep Tilt sampling step \\f$\\delta_t\\f$ in Algorithm 1 in the paper.\n.       @param rotateStepBase Rotation sampling step factor b in Algorithm 1 in the paper."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_AffineFeature_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getViewParams", CV_PY_FN_WITH_KW_(pyopencv_cv_AffineFeature_getViewParams, 0), "getViewParams(tilts, rolls) -> None\n."},
    {"setViewParams", CV_PY_FN_WITH_KW_(pyopencv_cv_AffineFeature_setViewParams, 0), "setViewParams(tilts, rolls) -> None\n."},

    {NULL,          NULL}
};

// Converter (AffineFeature)

template<>
struct PyOpenCV_Converter< Ptr<cv::AffineFeature> >
{
    static PyObject* from(const Ptr<cv::AffineFeature>& r)
    {
        return pyopencv_AffineFeature_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::AffineFeature>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::AffineFeature> * dst_;
        if (pyopencv_AffineFeature_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::AffineFeature> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// AgastFeatureDetector (Generic)
//================================================================================

// GetSet (AgastFeatureDetector)



// Methods (AgastFeatureDetector)

static PyObject* pyopencv_cv_AgastFeatureDetector_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_threshold = NULL;
    int threshold=10;
    PyObject* pyobj_nonmaxSuppression = NULL;
    bool nonmaxSuppression=true;
    PyObject* pyobj_type = NULL;
    AgastFeatureDetector_DetectorType type=AgastFeatureDetector::OAST_9_16;
    Ptr<AgastFeatureDetector> retval;

    const char* keywords[] = { "threshold", "nonmaxSuppression", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOO:AgastFeatureDetector.create", (char**)keywords, &pyobj_threshold, &pyobj_nonmaxSuppression, &pyobj_type) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) &&
        pyopencv_to_safe(pyobj_nonmaxSuppression, nonmaxSuppression, ArgInfo("nonmaxSuppression", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(retval = cv::AgastFeatureDetector::create(threshold, nonmaxSuppression, type));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getNonmaxSuppression(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNonmaxSuppression());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_getType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    AgastFeatureDetector::DetectorType retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_setNonmaxSuppression(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    PyObject* pyobj_f = NULL;
    bool f=0;

    const char* keywords[] = { "f", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AgastFeatureDetector.setNonmaxSuppression", (char**)keywords, &pyobj_f) &&
        pyopencv_to_safe(pyobj_f, f, ArgInfo("f", 0)) )
    {
        ERRWRAP2(_self_->setNonmaxSuppression(f));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_setThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    PyObject* pyobj_threshold = NULL;
    int threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AgastFeatureDetector.setThreshold", (char**)keywords, &pyobj_threshold) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AgastFeatureDetector_setType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AgastFeatureDetector> * self1 = 0;
    if (!pyopencv_AgastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AgastFeatureDetector' or its derivative)");
    Ptr<cv::AgastFeatureDetector> _self_ = *(self1);
    PyObject* pyobj_type = NULL;
    AgastFeatureDetector_DetectorType type=static_cast<AgastFeatureDetector_DetectorType>(0);

    const char* keywords[] = { "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AgastFeatureDetector.setType", (char**)keywords, &pyobj_type) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(_self_->setType(type));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (AgastFeatureDetector)

static PyGetSetDef pyopencv_AgastFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_AgastFeatureDetector_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_create_static, METH_STATIC), "create([, threshold[, nonmaxSuppression[, type]]]) -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getNonmaxSuppression", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_getNonmaxSuppression, 0), "getNonmaxSuppression() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_getThreshold, 0), "getThreshold() -> retval\n."},
    {"getType", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_getType, 0), "getType() -> retval\n."},
    {"setNonmaxSuppression", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_setNonmaxSuppression, 0), "setNonmaxSuppression(f) -> None\n."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_setThreshold, 0), "setThreshold(threshold) -> None\n."},
    {"setType", CV_PY_FN_WITH_KW_(pyopencv_cv_AgastFeatureDetector_setType, 0), "setType(type) -> None\n."},

    {NULL,          NULL}
};

// Converter (AgastFeatureDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::AgastFeatureDetector> >
{
    static PyObject* from(const Ptr<cv::AgastFeatureDetector>& r)
    {
        return pyopencv_AgastFeatureDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::AgastFeatureDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::AgastFeatureDetector> * dst_;
        if (pyopencv_AgastFeatureDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::AgastFeatureDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// Algorithm (Generic)
//================================================================================

// GetSet (Algorithm)



// Methods (Algorithm)

static PyObject* pyopencv_cv_Algorithm_clear(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_empty(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_read(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    PyObject* pyobj_fn = NULL;
    cv::FileNode fn;

    const char* keywords[] = { "fn", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Algorithm.read", (char**)keywords, &pyobj_fn) &&
        pyopencv_to_safe(pyobj_fn, fn, ArgInfo("fn", 0)) )
    {
        ERRWRAP2(_self_->read(fn));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_save(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Algorithm.save", (char**)keywords, &pyobj_filename) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(_self_->save(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Algorithm_write(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Algorithm> * self1 = 0;
    if (!pyopencv_Algorithm_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Algorithm' or its derivative)");
    Ptr<cv::Algorithm> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_fs = NULL;
    Ptr<cv::FileStorage> fs;

    const char* keywords[] = { "fs", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Algorithm.write", (char**)keywords, &pyobj_fs) &&
        pyopencv_to_safe(pyobj_fs, fs, ArgInfo("fs", 0)) )
    {
        ERRWRAP2(_self_->write(*fs));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_fs = NULL;
    Ptr<cv::FileStorage> fs;
    PyObject* pyobj_name = NULL;
    String name;

    const char* keywords[] = { "fs", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:Algorithm.write", (char**)keywords, &pyobj_fs, &pyobj_name) &&
        pyopencv_to_safe(pyobj_fs, fs, ArgInfo("fs", 0)) &&
        pyopencv_to_safe(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->write(*fs, name));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("write");

    return NULL;
}



// Tables (Algorithm)

static PyGetSetDef pyopencv_Algorithm_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_Algorithm_methods[] =
{
    {"clear", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_clear, 0), "clear() -> None\n.   @brief Clears the algorithm state"},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_empty, 0), "empty() -> retval\n.   @brief Returns true if the Algorithm is empty (e.g. in the very beginning or after unsuccessful read"},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_getDefaultName, 0), "getDefaultName() -> retval\n.   Returns the algorithm string identifier.\n.   This string is used as top level xml/yml node tag when the object is saved to a file or string."},
    {"read", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_read, 0), "read(fn) -> None\n.   @brief Reads algorithm parameters from a file storage"},
    {"save", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_save, 0), "save(filename) -> None\n.   Saves the algorithm to a file.\n.   In order to make this method work, the derived class must implement Algorithm::write(FileStorage& fs)."},
    {"write", CV_PY_FN_WITH_KW_(pyopencv_cv_Algorithm_write, 0), "write(fs) -> None\n.   @brief Stores algorithm parameters in a file storage\n\n\n\nwrite(fs, name) -> None\n.   * @overload"},

    {NULL,          NULL}
};

// Converter (Algorithm)

template<>
struct PyOpenCV_Converter< Ptr<cv::Algorithm> >
{
    static PyObject* from(const Ptr<cv::Algorithm>& r)
    {
        return pyopencv_Algorithm_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::Algorithm>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::Algorithm> * dst_;
        if (pyopencv_Algorithm_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::Algorithm> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// AlignExposures (Generic)
//================================================================================

// GetSet (AlignExposures)



// Methods (AlignExposures)

static PyObject* pyopencv_cv_AlignExposures_process(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignExposures> * self1 = 0;
    if (!pyopencv_AlignExposures_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignExposures' or its derivative)");
    Ptr<cv::AlignExposures> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO:AlignExposures.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO:AlignExposures.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("process");

    return NULL;
}



// Tables (AlignExposures)

static PyGetSetDef pyopencv_AlignExposures_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_AlignExposures_methods[] =
{
    {"process", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignExposures_process, 0), "process(src, dst, times, response) -> None\n.   @brief Aligns images\n.   \n.       @param src vector of input images\n.       @param dst vector of aligned images\n.       @param times vector of exposure time values for each image\n.       @param response 256x1 matrix with inverse camera response function for each pixel value, it should\n.       have the same number of channels as images."},

    {NULL,          NULL}
};

// Converter (AlignExposures)

template<>
struct PyOpenCV_Converter< Ptr<cv::AlignExposures> >
{
    static PyObject* from(const Ptr<cv::AlignExposures>& r)
    {
        return pyopencv_AlignExposures_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::AlignExposures>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::AlignExposures> * dst_;
        if (pyopencv_AlignExposures_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::AlignExposures> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// AlignMTB (Generic)
//================================================================================

// GetSet (AlignMTB)



// Methods (AlignMTB)

static PyObject* pyopencv_cv_AlignMTB_calculateShift(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_img0 = NULL;
    Mat img0;
    PyObject* pyobj_img1 = NULL;
    Mat img1;
    Point retval;

    const char* keywords[] = { "img0", "img1", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:AlignMTB.calculateShift", (char**)keywords, &pyobj_img0, &pyobj_img1) &&
        pyopencv_to_safe(pyobj_img0, img0, ArgInfo("img0", 0)) &&
        pyopencv_to_safe(pyobj_img1, img1, ArgInfo("img1", 0)) )
    {
        ERRWRAP2(retval = _self_->calculateShift(img0, img1));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_img0 = NULL;
    UMat img0;
    PyObject* pyobj_img1 = NULL;
    UMat img1;
    Point retval;

    const char* keywords[] = { "img0", "img1", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:AlignMTB.calculateShift", (char**)keywords, &pyobj_img0, &pyobj_img1) &&
        pyopencv_to_safe(pyobj_img0, img0, ArgInfo("img0", 0)) &&
        pyopencv_to_safe(pyobj_img1, img1, ArgInfo("img1", 0)) )
    {
        ERRWRAP2(retval = _self_->calculateShift(img0, img1));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("calculateShift");

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_computeBitmaps(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_img = NULL;
    Mat img;
    PyObject* pyobj_tb = NULL;
    Mat tb;
    PyObject* pyobj_eb = NULL;
    Mat eb;

    const char* keywords[] = { "img", "tb", "eb", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:AlignMTB.computeBitmaps", (char**)keywords, &pyobj_img, &pyobj_tb, &pyobj_eb) &&
        pyopencv_to_safe(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to_safe(pyobj_tb, tb, ArgInfo("tb", 1)) &&
        pyopencv_to_safe(pyobj_eb, eb, ArgInfo("eb", 1)) )
    {
        ERRWRAP2(_self_->computeBitmaps(img, tb, eb));
        return Py_BuildValue("(NN)", pyopencv_from(tb), pyopencv_from(eb));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_img = NULL;
    UMat img;
    PyObject* pyobj_tb = NULL;
    UMat tb;
    PyObject* pyobj_eb = NULL;
    UMat eb;

    const char* keywords[] = { "img", "tb", "eb", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:AlignMTB.computeBitmaps", (char**)keywords, &pyobj_img, &pyobj_tb, &pyobj_eb) &&
        pyopencv_to_safe(pyobj_img, img, ArgInfo("img", 0)) &&
        pyopencv_to_safe(pyobj_tb, tb, ArgInfo("tb", 1)) &&
        pyopencv_to_safe(pyobj_eb, eb, ArgInfo("eb", 1)) )
    {
        ERRWRAP2(_self_->computeBitmaps(img, tb, eb));
        return Py_BuildValue("(NN)", pyopencv_from(tb), pyopencv_from(eb));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("computeBitmaps");

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_getCut(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCut());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_getExcludeRange(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getExcludeRange());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_getMaxBits(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxBits());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_process(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "dst", "times", "response", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst, &pyobj_times, &pyobj_response) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 0)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    vector_Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:AlignMTB.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("process");

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_setCut(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    PyObject* pyobj_value = NULL;
    bool value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AlignMTB.setCut", (char**)keywords, &pyobj_value) &&
        pyopencv_to_safe(pyobj_value, value, ArgInfo("value", 0)) )
    {
        ERRWRAP2(_self_->setCut(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_setExcludeRange(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    PyObject* pyobj_exclude_range = NULL;
    int exclude_range=0;

    const char* keywords[] = { "exclude_range", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AlignMTB.setExcludeRange", (char**)keywords, &pyobj_exclude_range) &&
        pyopencv_to_safe(pyobj_exclude_range, exclude_range, ArgInfo("exclude_range", 0)) )
    {
        ERRWRAP2(_self_->setExcludeRange(exclude_range));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_setMaxBits(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    PyObject* pyobj_max_bits = NULL;
    int max_bits=0;

    const char* keywords[] = { "max_bits", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AlignMTB.setMaxBits", (char**)keywords, &pyobj_max_bits) &&
        pyopencv_to_safe(pyobj_max_bits, max_bits, ArgInfo("max_bits", 0)) )
    {
        ERRWRAP2(_self_->setMaxBits(max_bits));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AlignMTB_shiftMat(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AlignMTB> * self1 = 0;
    if (!pyopencv_AlignMTB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AlignMTB' or its derivative)");
    Ptr<cv::AlignMTB> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_shift = NULL;
    Point shift;

    const char* keywords[] = { "src", "shift", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:AlignMTB.shiftMat", (char**)keywords, &pyobj_src, &pyobj_shift, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_shift, shift, ArgInfo("shift", 0)) )
    {
        ERRWRAP2(_self_->shiftMat(src, dst, shift));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_shift = NULL;
    Point shift;

    const char* keywords[] = { "src", "shift", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:AlignMTB.shiftMat", (char**)keywords, &pyobj_src, &pyobj_shift, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_shift, shift, ArgInfo("shift", 0)) )
    {
        ERRWRAP2(_self_->shiftMat(src, dst, shift));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("shiftMat");

    return NULL;
}



// Tables (AlignMTB)

static PyGetSetDef pyopencv_AlignMTB_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_AlignMTB_methods[] =
{
    {"calculateShift", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_calculateShift, 0), "calculateShift(img0, img1) -> retval\n.   @brief Calculates shift between two images, i. e. how to shift the second image to correspond it with the\n.       first.\n.   \n.       @param img0 first image\n.       @param img1 second image"},
    {"computeBitmaps", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_computeBitmaps, 0), "computeBitmaps(img[, tb[, eb]]) -> tb, eb\n.   @brief Computes median threshold and exclude bitmaps of given image.\n.   \n.       @param img input image\n.       @param tb median threshold bitmap\n.       @param eb exclude bitmap"},
    {"getCut", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_getCut, 0), "getCut() -> retval\n."},
    {"getExcludeRange", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_getExcludeRange, 0), "getExcludeRange() -> retval\n."},
    {"getMaxBits", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_getMaxBits, 0), "getMaxBits() -> retval\n."},
    {"process", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_process, 0), "process(src, dst, times, response) -> None\n.   \n\n\n\nprocess(src, dst) -> None\n.   @brief Short version of process, that doesn't take extra arguments.\n.   \n.       @param src vector of input images\n.       @param dst vector of aligned images"},
    {"setCut", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_setCut, 0), "setCut(value) -> None\n."},
    {"setExcludeRange", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_setExcludeRange, 0), "setExcludeRange(exclude_range) -> None\n."},
    {"setMaxBits", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_setMaxBits, 0), "setMaxBits(max_bits) -> None\n."},
    {"shiftMat", CV_PY_FN_WITH_KW_(pyopencv_cv_AlignMTB_shiftMat, 0), "shiftMat(src, shift[, dst]) -> dst\n.   @brief Helper function, that shift Mat filling new regions with zeros.\n.   \n.       @param src input image\n.       @param dst result image\n.       @param shift shift value"},

    {NULL,          NULL}
};

// Converter (AlignMTB)

template<>
struct PyOpenCV_Converter< Ptr<cv::AlignMTB> >
{
    static PyObject* from(const Ptr<cv::AlignMTB>& r)
    {
        return pyopencv_AlignMTB_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::AlignMTB>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::AlignMTB> * dst_;
        if (pyopencv_AlignMTB_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::AlignMTB> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// AsyncArray (Generic)
//================================================================================

// GetSet (AsyncArray)



// Methods (AsyncArray)

static int pyopencv_cv_AsyncArray_AsyncArray(pyopencv_AsyncArray_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::AsyncArray>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::AsyncArray()));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_AsyncArray_get(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AsyncArray> * self1 = 0;
    if (!pyopencv_AsyncArray_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AsyncArray' or its derivative)");
    Ptr<cv::AsyncArray> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:AsyncArray.get", (char**)keywords, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->get(dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    UMat dst;

    const char* keywords[] = { "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:AsyncArray.get", (char**)keywords, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->get(dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_timeoutNs = NULL;
    double timeoutNs=0;
    bool retval;

    const char* keywords[] = { "timeoutNs", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:AsyncArray.get", (char**)keywords, &pyobj_timeoutNs, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_timeoutNs, timeoutNs, ArgInfo("timeoutNs", 0)) )
    {
        ERRWRAP2(retval = _self_->get(dst, timeoutNs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(dst));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_timeoutNs = NULL;
    double timeoutNs=0;
    bool retval;

    const char* keywords[] = { "timeoutNs", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:AsyncArray.get", (char**)keywords, &pyobj_timeoutNs, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_timeoutNs, timeoutNs, ArgInfo("timeoutNs", 0)) )
    {
        ERRWRAP2(retval = _self_->get(dst, timeoutNs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(dst));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("get");

    return NULL;
}

static PyObject* pyopencv_cv_AsyncArray_release(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AsyncArray> * self1 = 0;
    if (!pyopencv_AsyncArray_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AsyncArray' or its derivative)");
    Ptr<cv::AsyncArray> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_AsyncArray_valid(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AsyncArray> * self1 = 0;
    if (!pyopencv_AsyncArray_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AsyncArray' or its derivative)");
    Ptr<cv::AsyncArray> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->valid());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_AsyncArray_wait_for(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::AsyncArray> * self1 = 0;
    if (!pyopencv_AsyncArray_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'AsyncArray' or its derivative)");
    Ptr<cv::AsyncArray> _self_ = *(self1);
    PyObject* pyobj_timeoutNs = NULL;
    double timeoutNs=0;
    bool retval;

    const char* keywords[] = { "timeoutNs", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:AsyncArray.wait_for", (char**)keywords, &pyobj_timeoutNs) &&
        pyopencv_to_safe(pyobj_timeoutNs, timeoutNs, ArgInfo("timeoutNs", 0)) )
    {
        ERRWRAP2(retval = _self_->wait_for(timeoutNs));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (AsyncArray)

static PyGetSetDef pyopencv_AsyncArray_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_AsyncArray_methods[] =
{
    {"get", CV_PY_FN_WITH_KW_(pyopencv_cv_AsyncArray_get, 0), "get([, dst]) -> dst\n.   Fetch the result.\n.       @param[out] dst destination array\n.   \n.       Waits for result until container has valid result.\n.       Throws exception if exception was stored as a result.\n.   \n.       Throws exception on invalid container state.\n.   \n.       @note Result or stored exception can be fetched only once.\n\n\n\nget(timeoutNs[, dst]) -> retval, dst\n.   Retrieving the result with timeout\n.       @param[out] dst destination array\n.       @param[in] timeoutNs timeout in nanoseconds, -1 for infinite wait\n.   \n.       @returns true if result is ready, false if the timeout has expired\n.   \n.       @note Result or stored exception can be fetched only once."},
    {"release", CV_PY_FN_WITH_KW_(pyopencv_cv_AsyncArray_release, 0), "release() -> None\n."},
    {"valid", CV_PY_FN_WITH_KW_(pyopencv_cv_AsyncArray_valid, 0), "valid() -> retval\n."},
    {"wait_for", CV_PY_FN_WITH_KW_(pyopencv_cv_AsyncArray_wait_for, 0), "wait_for(timeoutNs) -> retval\n."},

    {NULL,          NULL}
};

// Converter (AsyncArray)

template<>
struct PyOpenCV_Converter< Ptr<cv::AsyncArray> >
{
    static PyObject* from(const Ptr<cv::AsyncArray>& r)
    {
        return pyopencv_AsyncArray_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::AsyncArray>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::AsyncArray> * dst_;
        if (pyopencv_AsyncArray_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::AsyncArray> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BFMatcher (Generic)
//================================================================================

// GetSet (BFMatcher)



// Methods (BFMatcher)

static int pyopencv_cv_BFMatcher_BFMatcher(pyopencv_BFMatcher_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_normType = NULL;
    int normType=NORM_L2;
    PyObject* pyobj_crossCheck = NULL;
    bool crossCheck=false;

    const char* keywords[] = { "normType", "crossCheck", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OO:BFMatcher", (char**)keywords, &pyobj_normType, &pyobj_crossCheck) &&
        pyopencv_to_safe(pyobj_normType, normType, ArgInfo("normType", 0)) &&
        pyopencv_to_safe(pyobj_crossCheck, crossCheck, ArgInfo("crossCheck", 0)) )
    {
        new (&(self->v)) Ptr<cv::BFMatcher>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::BFMatcher(normType, crossCheck)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_BFMatcher_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_normType = NULL;
    int normType=NORM_L2;
    PyObject* pyobj_crossCheck = NULL;
    bool crossCheck=false;
    Ptr<BFMatcher> retval;

    const char* keywords[] = { "normType", "crossCheck", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OO:BFMatcher.create", (char**)keywords, &pyobj_normType, &pyobj_crossCheck) &&
        pyopencv_to_safe(pyobj_normType, normType, ArgInfo("normType", 0)) &&
        pyopencv_to_safe(pyobj_crossCheck, crossCheck, ArgInfo("crossCheck", 0)) )
    {
        ERRWRAP2(retval = cv::BFMatcher::create(normType, crossCheck));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (BFMatcher)

static PyGetSetDef pyopencv_BFMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BFMatcher_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_BFMatcher_create_static, METH_STATIC), "create([, normType[, crossCheck]]) -> retval\n.   @brief Brute-force matcher create method.\n.       @param normType One of NORM_L1, NORM_L2, NORM_HAMMING, NORM_HAMMING2. L1 and L2 norms are\n.       preferable choices for SIFT and SURF descriptors, NORM_HAMMING should be used with ORB, BRISK and\n.       BRIEF, NORM_HAMMING2 should be used with ORB when WTA_K==3 or 4 (see ORB::ORB constructor\n.       description).\n.       @param crossCheck If it is false, this is will be default BFMatcher behaviour when it finds the k\n.       nearest neighbors for each query descriptor. If crossCheck==true, then the knnMatch() method with\n.       k=1 will only return pairs (i,j) such that for i-th query descriptor the j-th descriptor in the\n.       matcher's collection is the nearest and vice versa, i.e. the BFMatcher will only return consistent\n.       pairs. Such technique usually produces best results with minimal number of outliers when there are\n.       enough matches. This is alternative to the ratio test, used by D. Lowe in SIFT paper."},

    {NULL,          NULL}
};

// Converter (BFMatcher)

template<>
struct PyOpenCV_Converter< Ptr<cv::BFMatcher> >
{
    static PyObject* from(const Ptr<cv::BFMatcher>& r)
    {
        return pyopencv_BFMatcher_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BFMatcher>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BFMatcher> * dst_;
        if (pyopencv_BFMatcher_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BFMatcher> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BOWImgDescriptorExtractor (Generic)
//================================================================================

// GetSet (BOWImgDescriptorExtractor)



// Methods (BOWImgDescriptorExtractor)

static int pyopencv_cv_BOWImgDescriptorExtractor_BOWImgDescriptorExtractor(pyopencv_BOWImgDescriptorExtractor_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_dextractor = NULL;
    Ptr<Feature2D> dextractor;
    PyObject* pyobj_dmatcher = NULL;
    Ptr<DescriptorMatcher> dmatcher;

    const char* keywords[] = { "dextractor", "dmatcher", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:BOWImgDescriptorExtractor", (char**)keywords, &pyobj_dextractor, &pyobj_dmatcher) &&
        pyopencv_to_safe(pyobj_dextractor, dextractor, ArgInfo("dextractor", 0)) &&
        pyopencv_to_safe(pyobj_dmatcher, dmatcher, ArgInfo("dmatcher", 0)) )
    {
        new (&(self->v)) Ptr<cv::BOWImgDescriptorExtractor>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::BOWImgDescriptorExtractor(dextractor, dmatcher)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_compute(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_imgDescriptor = NULL;
    Mat imgDescriptor;

    const char* keywords[] = { "image", "keypoints", "imgDescriptor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:BOWImgDescriptorExtractor.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_imgDescriptor) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_keypoints, keypoints, ArgInfo("keypoints", 0)) &&
        pyopencv_to_safe(pyobj_imgDescriptor, imgDescriptor, ArgInfo("imgDescriptor", 1)) )
    {
        ERRWRAP2(_self_->compute2(image, keypoints, imgDescriptor));
        return pyopencv_from(imgDescriptor);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_descriptorSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_descriptorType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_getVocabulary(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVocabulary());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWImgDescriptorExtractor_setVocabulary(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWImgDescriptorExtractor> * self1 = 0;
    if (!pyopencv_BOWImgDescriptorExtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWImgDescriptorExtractor' or its derivative)");
    Ptr<cv::BOWImgDescriptorExtractor> _self_ = *(self1);
    PyObject* pyobj_vocabulary = NULL;
    Mat vocabulary;

    const char* keywords[] = { "vocabulary", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BOWImgDescriptorExtractor.setVocabulary", (char**)keywords, &pyobj_vocabulary) &&
        pyopencv_to_safe(pyobj_vocabulary, vocabulary, ArgInfo("vocabulary", 0)) )
    {
        ERRWRAP2(_self_->setVocabulary(vocabulary));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (BOWImgDescriptorExtractor)

static PyGetSetDef pyopencv_BOWImgDescriptorExtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BOWImgDescriptorExtractor_methods[] =
{
    {"compute", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_compute, 0), "compute(image, keypoints[, imgDescriptor]) -> imgDescriptor\n.   @overload\n.       @param keypointDescriptors Computed descriptors to match with vocabulary.\n.       @param imgDescriptor Computed output image descriptor.\n.       @param pointIdxsOfClusters Indices of keypoints that belong to the cluster. This means that\n.       pointIdxsOfClusters[i] are keypoint indices that belong to the i -th cluster (word of vocabulary)\n.       returned if it is non-zero."},
    {"descriptorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_descriptorSize, 0), "descriptorSize() -> retval\n.   @brief Returns an image descriptor size if the vocabulary is set. Otherwise, it returns 0."},
    {"descriptorType", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_descriptorType, 0), "descriptorType() -> retval\n.   @brief Returns an image descriptor type."},
    {"getVocabulary", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_getVocabulary, 0), "getVocabulary() -> retval\n.   @brief Returns the set vocabulary."},
    {"setVocabulary", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWImgDescriptorExtractor_setVocabulary, 0), "setVocabulary(vocabulary) -> None\n.   @brief Sets a visual vocabulary.\n.   \n.       @param vocabulary Vocabulary (can be trained using the inheritor of BOWTrainer ). Each row of the\n.       vocabulary is a visual word (cluster center)."},

    {NULL,          NULL}
};

// Converter (BOWImgDescriptorExtractor)

template<>
struct PyOpenCV_Converter< Ptr<cv::BOWImgDescriptorExtractor> >
{
    static PyObject* from(const Ptr<cv::BOWImgDescriptorExtractor>& r)
    {
        return pyopencv_BOWImgDescriptorExtractor_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BOWImgDescriptorExtractor>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BOWImgDescriptorExtractor> * dst_;
        if (pyopencv_BOWImgDescriptorExtractor_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BOWImgDescriptorExtractor> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BOWKMeansTrainer (Generic)
//================================================================================

// GetSet (BOWKMeansTrainer)



// Methods (BOWKMeansTrainer)

static int pyopencv_cv_BOWKMeansTrainer_BOWKMeansTrainer(pyopencv_BOWKMeansTrainer_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_clusterCount = NULL;
    int clusterCount=0;
    PyObject* pyobj_termcrit = NULL;
    TermCriteria termcrit;
    PyObject* pyobj_attempts = NULL;
    int attempts=3;
    PyObject* pyobj_flags = NULL;
    int flags=KMEANS_PP_CENTERS;

    const char* keywords[] = { "clusterCount", "termcrit", "attempts", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OOO:BOWKMeansTrainer", (char**)keywords, &pyobj_clusterCount, &pyobj_termcrit, &pyobj_attempts, &pyobj_flags) &&
        pyopencv_to_safe(pyobj_clusterCount, clusterCount, ArgInfo("clusterCount", 0)) &&
        pyopencv_to_safe(pyobj_termcrit, termcrit, ArgInfo("termcrit", 0)) &&
        pyopencv_to_safe(pyobj_attempts, attempts, ArgInfo("attempts", 0)) &&
        pyopencv_to_safe(pyobj_flags, flags, ArgInfo("flags", 0)) )
    {
        new (&(self->v)) Ptr<cv::BOWKMeansTrainer>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::BOWKMeansTrainer(clusterCount, termcrit, attempts, flags)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_BOWKMeansTrainer_cluster(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWKMeansTrainer> * self1 = 0;
    if (!pyopencv_BOWKMeansTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWKMeansTrainer' or its derivative)");
    Ptr<cv::BOWKMeansTrainer> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    Mat retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->cluster());
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BOWKMeansTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("cluster");

    return NULL;
}



// Tables (BOWKMeansTrainer)

static PyGetSetDef pyopencv_BOWKMeansTrainer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BOWKMeansTrainer_methods[] =
{
    {"cluster", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWKMeansTrainer_cluster, 0), "cluster() -> retval\n.   \n\n\n\ncluster(descriptors) -> retval\n."},

    {NULL,          NULL}
};

// Converter (BOWKMeansTrainer)

template<>
struct PyOpenCV_Converter< Ptr<cv::BOWKMeansTrainer> >
{
    static PyObject* from(const Ptr<cv::BOWKMeansTrainer>& r)
    {
        return pyopencv_BOWKMeansTrainer_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BOWKMeansTrainer>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BOWKMeansTrainer> * dst_;
        if (pyopencv_BOWKMeansTrainer_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BOWKMeansTrainer> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BOWTrainer (Generic)
//================================================================================

// GetSet (BOWTrainer)



// Methods (BOWTrainer)

static PyObject* pyopencv_cv_BOWTrainer_add(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BOWTrainer.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_clear(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_cluster(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    Mat retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->cluster());
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    Mat retval;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BOWTrainer.cluster", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(retval = _self_->cluster(descriptors));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("cluster");

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_descriptorsCount(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorsCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BOWTrainer_getDescriptors(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BOWTrainer> * self1 = 0;
    if (!pyopencv_BOWTrainer_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BOWTrainer' or its derivative)");
    Ptr<cv::BOWTrainer> _self_ = *(self1);
    std::vector<Mat> retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDescriptors());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (BOWTrainer)

static PyGetSetDef pyopencv_BOWTrainer_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BOWTrainer_methods[] =
{
    {"add", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_add, 0), "add(descriptors) -> None\n.   @brief Adds descriptors to a training set.\n.   \n.       @param descriptors Descriptors to add to a training set. Each row of the descriptors matrix is a\n.       descriptor.\n.   \n.       The training set is clustered using clustermethod to construct the vocabulary."},
    {"clear", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_clear, 0), "clear() -> None\n."},
    {"cluster", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_cluster, 0), "cluster() -> retval\n.   @overload\n\n\n\ncluster(descriptors) -> retval\n.   @brief Clusters train descriptors.\n.   \n.       @param descriptors Descriptors to cluster. Each row of the descriptors matrix is a descriptor.\n.       Descriptors are not added to the inner train descriptor set.\n.   \n.       The vocabulary consists of cluster centers. So, this method returns the vocabulary. In the first\n.       variant of the method, train descriptors stored in the object are clustered. In the second variant,\n.       input descriptors are clustered."},
    {"descriptorsCount", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_descriptorsCount, 0), "descriptorsCount() -> retval\n.   @brief Returns the count of all descriptors stored in the training set."},
    {"getDescriptors", CV_PY_FN_WITH_KW_(pyopencv_cv_BOWTrainer_getDescriptors, 0), "getDescriptors() -> retval\n.   @brief Returns a training set of descriptors."},

    {NULL,          NULL}
};

// Converter (BOWTrainer)

template<>
struct PyOpenCV_Converter< Ptr<cv::BOWTrainer> >
{
    static PyObject* from(const Ptr<cv::BOWTrainer>& r)
    {
        return pyopencv_BOWTrainer_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BOWTrainer>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BOWTrainer> * dst_;
        if (pyopencv_BOWTrainer_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BOWTrainer> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BRISK (Generic)
//================================================================================

// GetSet (BRISK)



// Methods (BRISK)

static PyObject* pyopencv_cv_BRISK_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(3);

    {
    PyObject* pyobj_thresh = NULL;
    int thresh=30;
    PyObject* pyobj_octaves = NULL;
    int octaves=3;
    PyObject* pyobj_patternScale = NULL;
    float patternScale=1.0f;
    Ptr<BRISK> retval;

    const char* keywords[] = { "thresh", "octaves", "patternScale", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOO:BRISK.create", (char**)keywords, &pyobj_thresh, &pyobj_octaves, &pyobj_patternScale) &&
        pyopencv_to_safe(pyobj_thresh, thresh, ArgInfo("thresh", 0)) &&
        pyopencv_to_safe(pyobj_octaves, octaves, ArgInfo("octaves", 0)) &&
        pyopencv_to_safe(pyobj_patternScale, patternScale, ArgInfo("patternScale", 0)) )
    {
        ERRWRAP2(retval = cv::BRISK::create(thresh, octaves, patternScale));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_radiusList = NULL;
    vector_float radiusList;
    PyObject* pyobj_numberList = NULL;
    vector_int numberList;
    PyObject* pyobj_dMax = NULL;
    float dMax=5.85f;
    PyObject* pyobj_dMin = NULL;
    float dMin=8.2f;
    PyObject* pyobj_indexChange = NULL;
    vector_int indexChange=std::vector<int>();
    Ptr<BRISK> retval;

    const char* keywords[] = { "radiusList", "numberList", "dMax", "dMin", "indexChange", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OOO:BRISK.create", (char**)keywords, &pyobj_radiusList, &pyobj_numberList, &pyobj_dMax, &pyobj_dMin, &pyobj_indexChange) &&
        pyopencv_to_safe(pyobj_radiusList, radiusList, ArgInfo("radiusList", 0)) &&
        pyopencv_to_safe(pyobj_numberList, numberList, ArgInfo("numberList", 0)) &&
        pyopencv_to_safe(pyobj_dMax, dMax, ArgInfo("dMax", 0)) &&
        pyopencv_to_safe(pyobj_dMin, dMin, ArgInfo("dMin", 0)) &&
        pyopencv_to_safe(pyobj_indexChange, indexChange, ArgInfo("indexChange", 0)) )
    {
        ERRWRAP2(retval = cv::BRISK::create(radiusList, numberList, dMax, dMin, indexChange));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_thresh = NULL;
    int thresh=0;
    PyObject* pyobj_octaves = NULL;
    int octaves=0;
    PyObject* pyobj_radiusList = NULL;
    vector_float radiusList;
    PyObject* pyobj_numberList = NULL;
    vector_int numberList;
    PyObject* pyobj_dMax = NULL;
    float dMax=5.85f;
    PyObject* pyobj_dMin = NULL;
    float dMin=8.2f;
    PyObject* pyobj_indexChange = NULL;
    vector_int indexChange=std::vector<int>();
    Ptr<BRISK> retval;

    const char* keywords[] = { "thresh", "octaves", "radiusList", "numberList", "dMax", "dMin", "indexChange", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO|OOO:BRISK.create", (char**)keywords, &pyobj_thresh, &pyobj_octaves, &pyobj_radiusList, &pyobj_numberList, &pyobj_dMax, &pyobj_dMin, &pyobj_indexChange) &&
        pyopencv_to_safe(pyobj_thresh, thresh, ArgInfo("thresh", 0)) &&
        pyopencv_to_safe(pyobj_octaves, octaves, ArgInfo("octaves", 0)) &&
        pyopencv_to_safe(pyobj_radiusList, radiusList, ArgInfo("radiusList", 0)) &&
        pyopencv_to_safe(pyobj_numberList, numberList, ArgInfo("numberList", 0)) &&
        pyopencv_to_safe(pyobj_dMax, dMax, ArgInfo("dMax", 0)) &&
        pyopencv_to_safe(pyobj_dMin, dMin, ArgInfo("dMin", 0)) &&
        pyopencv_to_safe(pyobj_indexChange, indexChange, ArgInfo("indexChange", 0)) )
    {
        ERRWRAP2(retval = cv::BRISK::create(thresh, octaves, radiusList, numberList, dMax, dMin, indexChange));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("create");

    return NULL;
}

static PyObject* pyopencv_cv_BRISK_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BRISK> * self1 = 0;
    if (!pyopencv_BRISK_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BRISK' or its derivative)");
    Ptr<cv::BRISK> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BRISK_getOctaves(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BRISK> * self1 = 0;
    if (!pyopencv_BRISK_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BRISK' or its derivative)");
    Ptr<cv::BRISK> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getOctaves());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BRISK_getPatternScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BRISK> * self1 = 0;
    if (!pyopencv_BRISK_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BRISK' or its derivative)");
    Ptr<cv::BRISK> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPatternScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BRISK_getThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BRISK> * self1 = 0;
    if (!pyopencv_BRISK_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BRISK' or its derivative)");
    Ptr<cv::BRISK> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BRISK_setOctaves(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BRISK> * self1 = 0;
    if (!pyopencv_BRISK_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BRISK' or its derivative)");
    Ptr<cv::BRISK> _self_ = *(self1);
    PyObject* pyobj_octaves = NULL;
    int octaves=0;

    const char* keywords[] = { "octaves", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BRISK.setOctaves", (char**)keywords, &pyobj_octaves) &&
        pyopencv_to_safe(pyobj_octaves, octaves, ArgInfo("octaves", 0)) )
    {
        ERRWRAP2(_self_->setOctaves(octaves));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BRISK_setPatternScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BRISK> * self1 = 0;
    if (!pyopencv_BRISK_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BRISK' or its derivative)");
    Ptr<cv::BRISK> _self_ = *(self1);
    PyObject* pyobj_patternScale = NULL;
    float patternScale=0.f;

    const char* keywords[] = { "patternScale", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BRISK.setPatternScale", (char**)keywords, &pyobj_patternScale) &&
        pyopencv_to_safe(pyobj_patternScale, patternScale, ArgInfo("patternScale", 0)) )
    {
        ERRWRAP2(_self_->setPatternScale(patternScale));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BRISK_setThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BRISK> * self1 = 0;
    if (!pyopencv_BRISK_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BRISK' or its derivative)");
    Ptr<cv::BRISK> _self_ = *(self1);
    PyObject* pyobj_threshold = NULL;
    int threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BRISK.setThreshold", (char**)keywords, &pyobj_threshold) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (BRISK)

static PyGetSetDef pyopencv_BRISK_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BRISK_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_create_static, METH_STATIC), "create([, thresh[, octaves[, patternScale]]]) -> retval\n.   @brief The BRISK constructor\n.   \n.       @param thresh AGAST detection threshold score.\n.       @param octaves detection octaves. Use 0 to do single scale.\n.       @param patternScale apply this scale to the pattern used for sampling the neighbourhood of a\n.       keypoint.\n\n\n\ncreate(radiusList, numberList[, dMax[, dMin[, indexChange]]]) -> retval\n.   @brief The BRISK constructor for a custom pattern\n.   \n.       @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for\n.       keypoint scale 1).\n.       @param numberList defines the number of sampling points on the sampling circle. Must be the same\n.       size as radiusList..\n.       @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint\n.       scale 1).\n.       @param dMin threshold for the long pairings used for orientation determination (in pixels for\n.       keypoint scale 1).\n.   @param indexChange index remapping of the bits.\n\n\n\ncreate(thresh, octaves, radiusList, numberList[, dMax[, dMin[, indexChange]]]) -> retval\n.   @brief The BRISK constructor for a custom pattern, detection threshold and octaves\n.   \n.       @param thresh AGAST detection threshold score.\n.       @param octaves detection octaves. Use 0 to do single scale.\n.       @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for\n.       keypoint scale 1).\n.       @param numberList defines the number of sampling points on the sampling circle. Must be the same\n.       size as radiusList..\n.       @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint\n.       scale 1).\n.       @param dMin threshold for the long pairings used for orientation determination (in pixels for\n.       keypoint scale 1).\n.   @param indexChange index remapping of the bits."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_getOctaves, 0), "getOctaves() -> retval\n."},
    {"getPatternScale", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_getPatternScale, 0), "getPatternScale() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_getThreshold, 0), "getThreshold() -> retval\n."},
    {"setOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_setOctaves, 0), "setOctaves(octaves) -> None\n.   @brief Set detection octaves.\n.       @param octaves detection octaves. Use 0 to do single scale."},
    {"setPatternScale", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_setPatternScale, 0), "setPatternScale(patternScale) -> None\n.   @brief Set detection patternScale.\n.       @param patternScale apply this scale to the pattern used for sampling the neighbourhood of a\n.       keypoint."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BRISK_setThreshold, 0), "setThreshold(threshold) -> None\n.   @brief Set detection threshold.\n.       @param threshold AGAST detection threshold score."},

    {NULL,          NULL}
};

// Converter (BRISK)

template<>
struct PyOpenCV_Converter< Ptr<cv::BRISK> >
{
    static PyObject* from(const Ptr<cv::BRISK>& r)
    {
        return pyopencv_BRISK_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BRISK>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BRISK> * dst_;
        if (pyopencv_BRISK_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BRISK> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BackgroundSubtractor (Generic)
//================================================================================

// GetSet (BackgroundSubtractor)



// Methods (BackgroundSubtractor)

static PyObject* pyopencv_cv_BackgroundSubtractor_apply(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractor> * self1 = 0;
    if (!pyopencv_BackgroundSubtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractor' or its derivative)");
    Ptr<cv::BackgroundSubtractor> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_fgmask = NULL;
    Mat fgmask;
    PyObject* pyobj_learningRate = NULL;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:BackgroundSubtractor.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &pyobj_learningRate) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) &&
        pyopencv_to_safe(pyobj_learningRate, learningRate, ArgInfo("learningRate", 0)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_fgmask = NULL;
    UMat fgmask;
    PyObject* pyobj_learningRate = NULL;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:BackgroundSubtractor.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &pyobj_learningRate) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) &&
        pyopencv_to_safe(pyobj_learningRate, learningRate, ArgInfo("learningRate", 0)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("apply");

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractor_getBackgroundImage(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractor> * self1 = 0;
    if (!pyopencv_BackgroundSubtractor_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractor' or its derivative)");
    Ptr<cv::BackgroundSubtractor> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_backgroundImage = NULL;
    Mat backgroundImage;

    const char* keywords[] = { "backgroundImage", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:BackgroundSubtractor.getBackgroundImage", (char**)keywords, &pyobj_backgroundImage) &&
        pyopencv_to_safe(pyobj_backgroundImage, backgroundImage, ArgInfo("backgroundImage", 1)) )
    {
        ERRWRAP2(_self_->getBackgroundImage(backgroundImage));
        return pyopencv_from(backgroundImage);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_backgroundImage = NULL;
    UMat backgroundImage;

    const char* keywords[] = { "backgroundImage", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:BackgroundSubtractor.getBackgroundImage", (char**)keywords, &pyobj_backgroundImage) &&
        pyopencv_to_safe(pyobj_backgroundImage, backgroundImage, ArgInfo("backgroundImage", 1)) )
    {
        ERRWRAP2(_self_->getBackgroundImage(backgroundImage));
        return pyopencv_from(backgroundImage);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("getBackgroundImage");

    return NULL;
}



// Tables (BackgroundSubtractor)

static PyGetSetDef pyopencv_BackgroundSubtractor_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BackgroundSubtractor_methods[] =
{
    {"apply", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractor_apply, 0), "apply(image[, fgmask[, learningRate]]) -> fgmask\n.   @brief Computes a foreground mask.\n.   \n.       @param image Next video frame.\n.       @param fgmask The output foreground mask as an 8-bit binary image.\n.       @param learningRate The value between 0 and 1 that indicates how fast the background model is\n.       learnt. Negative parameter value makes the algorithm to use some automatically chosen learning\n.       rate. 0 means that the background model is not updated at all, 1 means that the background model\n.       is completely reinitialized from the last frame."},
    {"getBackgroundImage", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractor_getBackgroundImage, 0), "getBackgroundImage([, backgroundImage]) -> backgroundImage\n.   @brief Computes a background image.\n.   \n.       @param backgroundImage The output background image.\n.   \n.       @note Sometimes the background image can be very blurry, as it contain the average background\n.       statistics."},

    {NULL,          NULL}
};

// Converter (BackgroundSubtractor)

template<>
struct PyOpenCV_Converter< Ptr<cv::BackgroundSubtractor> >
{
    static PyObject* from(const Ptr<cv::BackgroundSubtractor>& r)
    {
        return pyopencv_BackgroundSubtractor_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BackgroundSubtractor>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BackgroundSubtractor> * dst_;
        if (pyopencv_BackgroundSubtractor_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BackgroundSubtractor> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BackgroundSubtractorKNN (Generic)
//================================================================================

// GetSet (BackgroundSubtractorKNN)



// Methods (BackgroundSubtractorKNN)

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getDetectShadows(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDetectShadows());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getDist2Threshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDist2Threshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getHistory(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getHistory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getNSamples(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getShadowThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getShadowValue(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowValue());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_getkNNSamples(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getkNNSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setDetectShadows(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    PyObject* pyobj_detectShadows = NULL;
    bool detectShadows=0;

    const char* keywords[] = { "detectShadows", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorKNN.setDetectShadows", (char**)keywords, &pyobj_detectShadows) &&
        pyopencv_to_safe(pyobj_detectShadows, detectShadows, ArgInfo("detectShadows", 0)) )
    {
        ERRWRAP2(_self_->setDetectShadows(detectShadows));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setDist2Threshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    PyObject* pyobj__dist2Threshold = NULL;
    double _dist2Threshold=0;

    const char* keywords[] = { "_dist2Threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorKNN.setDist2Threshold", (char**)keywords, &pyobj__dist2Threshold) &&
        pyopencv_to_safe(pyobj__dist2Threshold, _dist2Threshold, ArgInfo("_dist2Threshold", 0)) )
    {
        ERRWRAP2(_self_->setDist2Threshold(_dist2Threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setHistory(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    PyObject* pyobj_history = NULL;
    int history=0;

    const char* keywords[] = { "history", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorKNN.setHistory", (char**)keywords, &pyobj_history) &&
        pyopencv_to_safe(pyobj_history, history, ArgInfo("history", 0)) )
    {
        ERRWRAP2(_self_->setHistory(history));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setNSamples(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    PyObject* pyobj__nN = NULL;
    int _nN=0;

    const char* keywords[] = { "_nN", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorKNN.setNSamples", (char**)keywords, &pyobj__nN) &&
        pyopencv_to_safe(pyobj__nN, _nN, ArgInfo("_nN", 0)) )
    {
        ERRWRAP2(_self_->setNSamples(_nN));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setShadowThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    PyObject* pyobj_threshold = NULL;
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorKNN.setShadowThreshold", (char**)keywords, &pyobj_threshold) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) )
    {
        ERRWRAP2(_self_->setShadowThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setShadowValue(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    PyObject* pyobj_value = NULL;
    int value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorKNN.setShadowValue", (char**)keywords, &pyobj_value) &&
        pyopencv_to_safe(pyobj_value, value, ArgInfo("value", 0)) )
    {
        ERRWRAP2(_self_->setShadowValue(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorKNN_setkNNSamples(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorKNN> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorKNN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorKNN' or its derivative)");
    Ptr<cv::BackgroundSubtractorKNN> _self_ = *(self1);
    PyObject* pyobj__nkNN = NULL;
    int _nkNN=0;

    const char* keywords[] = { "_nkNN", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorKNN.setkNNSamples", (char**)keywords, &pyobj__nkNN) &&
        pyopencv_to_safe(pyobj__nkNN, _nkNN, ArgInfo("_nkNN", 0)) )
    {
        ERRWRAP2(_self_->setkNNSamples(_nkNN));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (BackgroundSubtractorKNN)

static PyGetSetDef pyopencv_BackgroundSubtractorKNN_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BackgroundSubtractorKNN_methods[] =
{
    {"getDetectShadows", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getDetectShadows, 0), "getDetectShadows() -> retval\n.   @brief Returns the shadow detection flag\n.   \n.       If true, the algorithm detects shadows and marks them. See createBackgroundSubtractorKNN for\n.       details."},
    {"getDist2Threshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getDist2Threshold, 0), "getDist2Threshold() -> retval\n.   @brief Returns the threshold on the squared distance between the pixel and the sample\n.   \n.       The threshold on the squared distance between the pixel and the sample to decide whether a pixel is\n.       close to a data sample."},
    {"getHistory", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getHistory, 0), "getHistory() -> retval\n.   @brief Returns the number of last frames that affect the background model"},
    {"getNSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getNSamples, 0), "getNSamples() -> retval\n.   @brief Returns the number of data samples in the background model"},
    {"getShadowThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getShadowThreshold, 0), "getShadowThreshold() -> retval\n.   @brief Returns the shadow threshold\n.   \n.       A shadow is detected if pixel is a darker version of the background. The shadow threshold (Tau in\n.       the paper) is a threshold defining how much darker the shadow can be. Tau= 0.5 means that if a pixel\n.       is more than twice darker then it is not shadow. See Prati, Mikic, Trivedi and Cucchiara,\n.       *Detecting Moving Shadows...*, IEEE PAMI,2003."},
    {"getShadowValue", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getShadowValue, 0), "getShadowValue() -> retval\n.   @brief Returns the shadow value\n.   \n.       Shadow value is the value used to mark shadows in the foreground mask. Default value is 127. Value 0\n.       in the mask always means background, 255 means foreground."},
    {"getkNNSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_getkNNSamples, 0), "getkNNSamples() -> retval\n.   @brief Returns the number of neighbours, the k in the kNN.\n.   \n.       K is the number of samples that need to be within dist2Threshold in order to decide that that\n.       pixel is matching the kNN background model."},
    {"setDetectShadows", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setDetectShadows, 0), "setDetectShadows(detectShadows) -> None\n.   @brief Enables or disables shadow detection"},
    {"setDist2Threshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setDist2Threshold, 0), "setDist2Threshold(_dist2Threshold) -> None\n.   @brief Sets the threshold on the squared distance"},
    {"setHistory", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setHistory, 0), "setHistory(history) -> None\n.   @brief Sets the number of last frames that affect the background model"},
    {"setNSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setNSamples, 0), "setNSamples(_nN) -> None\n.   @brief Sets the number of data samples in the background model.\n.   \n.       The model needs to be reinitalized to reserve memory."},
    {"setShadowThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setShadowThreshold, 0), "setShadowThreshold(threshold) -> None\n.   @brief Sets the shadow threshold"},
    {"setShadowValue", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setShadowValue, 0), "setShadowValue(value) -> None\n.   @brief Sets the shadow value"},
    {"setkNNSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorKNN_setkNNSamples, 0), "setkNNSamples(_nkNN) -> None\n.   @brief Sets the k in the kNN. How many nearest neighbours need to match."},

    {NULL,          NULL}
};

// Converter (BackgroundSubtractorKNN)

template<>
struct PyOpenCV_Converter< Ptr<cv::BackgroundSubtractorKNN> >
{
    static PyObject* from(const Ptr<cv::BackgroundSubtractorKNN>& r)
    {
        return pyopencv_BackgroundSubtractorKNN_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BackgroundSubtractorKNN>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BackgroundSubtractorKNN> * dst_;
        if (pyopencv_BackgroundSubtractorKNN_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BackgroundSubtractorKNN> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// BackgroundSubtractorMOG2 (Generic)
//================================================================================

// GetSet (BackgroundSubtractorMOG2)



// Methods (BackgroundSubtractorMOG2)

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_apply(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_fgmask = NULL;
    Mat fgmask;
    PyObject* pyobj_learningRate = NULL;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:BackgroundSubtractorMOG2.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &pyobj_learningRate) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) &&
        pyopencv_to_safe(pyobj_learningRate, learningRate, ArgInfo("learningRate", 0)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_fgmask = NULL;
    UMat fgmask;
    PyObject* pyobj_learningRate = NULL;
    double learningRate=-1;

    const char* keywords[] = { "image", "fgmask", "learningRate", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:BackgroundSubtractorMOG2.apply", (char**)keywords, &pyobj_image, &pyobj_fgmask, &pyobj_learningRate) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_fgmask, fgmask, ArgInfo("fgmask", 1)) &&
        pyopencv_to_safe(pyobj_learningRate, learningRate, ArgInfo("learningRate", 0)) )
    {
        ERRWRAP2(_self_->apply(image, fgmask, learningRate));
        return pyopencv_from(fgmask);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("apply");

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getBackgroundRatio(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackgroundRatio());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getComplexityReductionThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getComplexityReductionThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getDetectShadows(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDetectShadows());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getHistory(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getHistory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getNMixtures(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNMixtures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getShadowThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getShadowValue(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getShadowValue());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarInit(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarInit());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarMax(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarMax());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarMin(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarMin());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_getVarThresholdGen(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVarThresholdGen());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setBackgroundRatio(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_ratio = NULL;
    double ratio=0;

    const char* keywords[] = { "ratio", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setBackgroundRatio", (char**)keywords, &pyobj_ratio) &&
        pyopencv_to_safe(pyobj_ratio, ratio, ArgInfo("ratio", 0)) )
    {
        ERRWRAP2(_self_->setBackgroundRatio(ratio));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setComplexityReductionThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_ct = NULL;
    double ct=0;

    const char* keywords[] = { "ct", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setComplexityReductionThreshold", (char**)keywords, &pyobj_ct) &&
        pyopencv_to_safe(pyobj_ct, ct, ArgInfo("ct", 0)) )
    {
        ERRWRAP2(_self_->setComplexityReductionThreshold(ct));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setDetectShadows(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_detectShadows = NULL;
    bool detectShadows=0;

    const char* keywords[] = { "detectShadows", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setDetectShadows", (char**)keywords, &pyobj_detectShadows) &&
        pyopencv_to_safe(pyobj_detectShadows, detectShadows, ArgInfo("detectShadows", 0)) )
    {
        ERRWRAP2(_self_->setDetectShadows(detectShadows));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setHistory(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_history = NULL;
    int history=0;

    const char* keywords[] = { "history", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setHistory", (char**)keywords, &pyobj_history) &&
        pyopencv_to_safe(pyobj_history, history, ArgInfo("history", 0)) )
    {
        ERRWRAP2(_self_->setHistory(history));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setNMixtures(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_nmixtures = NULL;
    int nmixtures=0;

    const char* keywords[] = { "nmixtures", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setNMixtures", (char**)keywords, &pyobj_nmixtures) &&
        pyopencv_to_safe(pyobj_nmixtures, nmixtures, ArgInfo("nmixtures", 0)) )
    {
        ERRWRAP2(_self_->setNMixtures(nmixtures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setShadowThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_threshold = NULL;
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setShadowThreshold", (char**)keywords, &pyobj_threshold) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) )
    {
        ERRWRAP2(_self_->setShadowThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setShadowValue(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_value = NULL;
    int value=0;

    const char* keywords[] = { "value", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setShadowValue", (char**)keywords, &pyobj_value) &&
        pyopencv_to_safe(pyobj_value, value, ArgInfo("value", 0)) )
    {
        ERRWRAP2(_self_->setShadowValue(value));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarInit(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_varInit = NULL;
    double varInit=0;

    const char* keywords[] = { "varInit", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setVarInit", (char**)keywords, &pyobj_varInit) &&
        pyopencv_to_safe(pyobj_varInit, varInit, ArgInfo("varInit", 0)) )
    {
        ERRWRAP2(_self_->setVarInit(varInit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarMax(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_varMax = NULL;
    double varMax=0;

    const char* keywords[] = { "varMax", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setVarMax", (char**)keywords, &pyobj_varMax) &&
        pyopencv_to_safe(pyobj_varMax, varMax, ArgInfo("varMax", 0)) )
    {
        ERRWRAP2(_self_->setVarMax(varMax));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarMin(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_varMin = NULL;
    double varMin=0;

    const char* keywords[] = { "varMin", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setVarMin", (char**)keywords, &pyobj_varMin) &&
        pyopencv_to_safe(pyobj_varMin, varMin, ArgInfo("varMin", 0)) )
    {
        ERRWRAP2(_self_->setVarMin(varMin));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_varThreshold = NULL;
    double varThreshold=0;

    const char* keywords[] = { "varThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setVarThreshold", (char**)keywords, &pyobj_varThreshold) &&
        pyopencv_to_safe(pyobj_varThreshold, varThreshold, ArgInfo("varThreshold", 0)) )
    {
        ERRWRAP2(_self_->setVarThreshold(varThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_BackgroundSubtractorMOG2_setVarThresholdGen(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::BackgroundSubtractorMOG2> * self1 = 0;
    if (!pyopencv_BackgroundSubtractorMOG2_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'BackgroundSubtractorMOG2' or its derivative)");
    Ptr<cv::BackgroundSubtractorMOG2> _self_ = *(self1);
    PyObject* pyobj_varThresholdGen = NULL;
    double varThresholdGen=0;

    const char* keywords[] = { "varThresholdGen", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BackgroundSubtractorMOG2.setVarThresholdGen", (char**)keywords, &pyobj_varThresholdGen) &&
        pyopencv_to_safe(pyobj_varThresholdGen, varThresholdGen, ArgInfo("varThresholdGen", 0)) )
    {
        ERRWRAP2(_self_->setVarThresholdGen(varThresholdGen));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (BackgroundSubtractorMOG2)

static PyGetSetDef pyopencv_BackgroundSubtractorMOG2_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_BackgroundSubtractorMOG2_methods[] =
{
    {"apply", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_apply, 0), "apply(image[, fgmask[, learningRate]]) -> fgmask\n.   @brief Computes a foreground mask.\n.   \n.       @param image Next video frame. Floating point frame will be used without scaling and should be in range \\f$[0,255]\\f$.\n.       @param fgmask The output foreground mask as an 8-bit binary image.\n.       @param learningRate The value between 0 and 1 that indicates how fast the background model is\n.       learnt. Negative parameter value makes the algorithm to use some automatically chosen learning\n.       rate. 0 means that the background model is not updated at all, 1 means that the background model\n.       is completely reinitialized from the last frame."},
    {"getBackgroundRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getBackgroundRatio, 0), "getBackgroundRatio() -> retval\n.   @brief Returns the \"background ratio\" parameter of the algorithm\n.   \n.       If a foreground pixel keeps semi-constant value for about backgroundRatio\\*history frames, it's\n.       considered background and added to the model as a center of a new component. It corresponds to TB\n.       parameter in the paper."},
    {"getComplexityReductionThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getComplexityReductionThreshold, 0), "getComplexityReductionThreshold() -> retval\n.   @brief Returns the complexity reduction threshold\n.   \n.       This parameter defines the number of samples needed to accept to prove the component exists. CT=0.05\n.       is a default value for all the samples. By setting CT=0 you get an algorithm very similar to the\n.       standard Stauffer&Grimson algorithm."},
    {"getDetectShadows", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getDetectShadows, 0), "getDetectShadows() -> retval\n.   @brief Returns the shadow detection flag\n.   \n.       If true, the algorithm detects shadows and marks them. See createBackgroundSubtractorMOG2 for\n.       details."},
    {"getHistory", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getHistory, 0), "getHistory() -> retval\n.   @brief Returns the number of last frames that affect the background model"},
    {"getNMixtures", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getNMixtures, 0), "getNMixtures() -> retval\n.   @brief Returns the number of gaussian components in the background model"},
    {"getShadowThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getShadowThreshold, 0), "getShadowThreshold() -> retval\n.   @brief Returns the shadow threshold\n.   \n.       A shadow is detected if pixel is a darker version of the background. The shadow threshold (Tau in\n.       the paper) is a threshold defining how much darker the shadow can be. Tau= 0.5 means that if a pixel\n.       is more than twice darker then it is not shadow. See Prati, Mikic, Trivedi and Cucchiara,\n.       *Detecting Moving Shadows...*, IEEE PAMI,2003."},
    {"getShadowValue", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getShadowValue, 0), "getShadowValue() -> retval\n.   @brief Returns the shadow value\n.   \n.       Shadow value is the value used to mark shadows in the foreground mask. Default value is 127. Value 0\n.       in the mask always means background, 255 means foreground."},
    {"getVarInit", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarInit, 0), "getVarInit() -> retval\n.   @brief Returns the initial variance of each gaussian component"},
    {"getVarMax", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarMax, 0), "getVarMax() -> retval\n."},
    {"getVarMin", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarMin, 0), "getVarMin() -> retval\n."},
    {"getVarThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarThreshold, 0), "getVarThreshold() -> retval\n.   @brief Returns the variance threshold for the pixel-model match\n.   \n.       The main threshold on the squared Mahalanobis distance to decide if the sample is well described by\n.       the background model or not. Related to Cthr from the paper."},
    {"getVarThresholdGen", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_getVarThresholdGen, 0), "getVarThresholdGen() -> retval\n.   @brief Returns the variance threshold for the pixel-model match used for new mixture component generation\n.   \n.       Threshold for the squared Mahalanobis distance that helps decide when a sample is close to the\n.       existing components (corresponds to Tg in the paper). If a pixel is not close to any component, it\n.       is considered foreground or added as a new component. 3 sigma =\\> Tg=3\\*3=9 is default. A smaller Tg\n.       value generates more components. A higher Tg value may result in a small number of components but\n.       they can grow too large."},
    {"setBackgroundRatio", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setBackgroundRatio, 0), "setBackgroundRatio(ratio) -> None\n.   @brief Sets the \"background ratio\" parameter of the algorithm"},
    {"setComplexityReductionThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setComplexityReductionThreshold, 0), "setComplexityReductionThreshold(ct) -> None\n.   @brief Sets the complexity reduction threshold"},
    {"setDetectShadows", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setDetectShadows, 0), "setDetectShadows(detectShadows) -> None\n.   @brief Enables or disables shadow detection"},
    {"setHistory", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setHistory, 0), "setHistory(history) -> None\n.   @brief Sets the number of last frames that affect the background model"},
    {"setNMixtures", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setNMixtures, 0), "setNMixtures(nmixtures) -> None\n.   @brief Sets the number of gaussian components in the background model.\n.   \n.       The model needs to be reinitalized to reserve memory."},
    {"setShadowThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setShadowThreshold, 0), "setShadowThreshold(threshold) -> None\n.   @brief Sets the shadow threshold"},
    {"setShadowValue", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setShadowValue, 0), "setShadowValue(value) -> None\n.   @brief Sets the shadow value"},
    {"setVarInit", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarInit, 0), "setVarInit(varInit) -> None\n.   @brief Sets the initial variance of each gaussian component"},
    {"setVarMax", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarMax, 0), "setVarMax(varMax) -> None\n."},
    {"setVarMin", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarMin, 0), "setVarMin(varMin) -> None\n."},
    {"setVarThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarThreshold, 0), "setVarThreshold(varThreshold) -> None\n.   @brief Sets the variance threshold for the pixel-model match"},
    {"setVarThresholdGen", CV_PY_FN_WITH_KW_(pyopencv_cv_BackgroundSubtractorMOG2_setVarThresholdGen, 0), "setVarThresholdGen(varThresholdGen) -> None\n.   @brief Sets the variance threshold for the pixel-model match used for new mixture component generation"},

    {NULL,          NULL}
};

// Converter (BackgroundSubtractorMOG2)

template<>
struct PyOpenCV_Converter< Ptr<cv::BackgroundSubtractorMOG2> >
{
    static PyObject* from(const Ptr<cv::BackgroundSubtractorMOG2>& r)
    {
        return pyopencv_BackgroundSubtractorMOG2_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::BackgroundSubtractorMOG2>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::BackgroundSubtractorMOG2> * dst_;
        if (pyopencv_BackgroundSubtractorMOG2_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::BackgroundSubtractorMOG2> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// CLAHE (Generic)
//================================================================================

// GetSet (CLAHE)



// Methods (CLAHE)

static PyObject* pyopencv_cv_CLAHE_apply(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:CLAHE.apply", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->apply(src, dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:CLAHE.apply", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->apply(src, dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("apply");

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_collectGarbage(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->collectGarbage());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_getClipLimit(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getClipLimit());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_getTilesGridSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    Size retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTilesGridSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_setClipLimit(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    PyObject* pyobj_clipLimit = NULL;
    double clipLimit=0;

    const char* keywords[] = { "clipLimit", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:CLAHE.setClipLimit", (char**)keywords, &pyobj_clipLimit) &&
        pyopencv_to_safe(pyobj_clipLimit, clipLimit, ArgInfo("clipLimit", 0)) )
    {
        ERRWRAP2(_self_->setClipLimit(clipLimit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CLAHE_setTilesGridSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CLAHE> * self1 = 0;
    if (!pyopencv_CLAHE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CLAHE' or its derivative)");
    Ptr<cv::CLAHE> _self_ = *(self1);
    PyObject* pyobj_tileGridSize = NULL;
    Size tileGridSize;

    const char* keywords[] = { "tileGridSize", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:CLAHE.setTilesGridSize", (char**)keywords, &pyobj_tileGridSize) &&
        pyopencv_to_safe(pyobj_tileGridSize, tileGridSize, ArgInfo("tileGridSize", 0)) )
    {
        ERRWRAP2(_self_->setTilesGridSize(tileGridSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (CLAHE)

static PyGetSetDef pyopencv_CLAHE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_CLAHE_methods[] =
{
    {"apply", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_apply, 0), "apply(src[, dst]) -> dst\n.   @brief Equalizes the histogram of a grayscale image using Contrast Limited Adaptive Histogram Equalization.\n.   \n.       @param src Source image of type CV_8UC1 or CV_16UC1.\n.       @param dst Destination image."},
    {"collectGarbage", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_collectGarbage, 0), "collectGarbage() -> None\n."},
    {"getClipLimit", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_getClipLimit, 0), "getClipLimit() -> retval\n."},
    {"getTilesGridSize", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_getTilesGridSize, 0), "getTilesGridSize() -> retval\n."},
    {"setClipLimit", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_setClipLimit, 0), "setClipLimit(clipLimit) -> None\n.   @brief Sets threshold for contrast limiting.\n.   \n.       @param clipLimit threshold value."},
    {"setTilesGridSize", CV_PY_FN_WITH_KW_(pyopencv_cv_CLAHE_setTilesGridSize, 0), "setTilesGridSize(tileGridSize) -> None\n.   @brief Sets size of grid for histogram equalization. Input image will be divided into\n.       equally sized rectangular tiles.\n.   \n.       @param tileGridSize defines the number of tiles in row and column."},

    {NULL,          NULL}
};

// Converter (CLAHE)

template<>
struct PyOpenCV_Converter< Ptr<cv::CLAHE> >
{
    static PyObject* from(const Ptr<cv::CLAHE>& r)
    {
        return pyopencv_CLAHE_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::CLAHE>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::CLAHE> * dst_;
        if (pyopencv_CLAHE_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::CLAHE> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// CalibrateCRF (Generic)
//================================================================================

// GetSet (CalibrateCRF)



// Methods (CalibrateCRF)

static PyObject* pyopencv_cv_CalibrateCRF_process(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateCRF> * self1 = 0;
    if (!pyopencv_CalibrateCRF_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateCRF' or its derivative)");
    Ptr<cv::CalibrateCRF> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:CalibrateCRF.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:CalibrateCRF.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("process");

    return NULL;
}



// Tables (CalibrateCRF)

static PyGetSetDef pyopencv_CalibrateCRF_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_CalibrateCRF_methods[] =
{
    {"process", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateCRF_process, 0), "process(src, times[, dst]) -> dst\n.   @brief Recovers inverse camera response.\n.   \n.       @param src vector of input images\n.       @param dst 256x1 matrix with inverse camera response function\n.       @param times vector of exposure time values for each image"},

    {NULL,          NULL}
};

// Converter (CalibrateCRF)

template<>
struct PyOpenCV_Converter< Ptr<cv::CalibrateCRF> >
{
    static PyObject* from(const Ptr<cv::CalibrateCRF>& r)
    {
        return pyopencv_CalibrateCRF_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::CalibrateCRF>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::CalibrateCRF> * dst_;
        if (pyopencv_CalibrateCRF_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::CalibrateCRF> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// CalibrateDebevec (Generic)
//================================================================================

// GetSet (CalibrateDebevec)



// Methods (CalibrateDebevec)

static PyObject* pyopencv_cv_CalibrateDebevec_getLambda(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateDebevec> * self1 = 0;
    if (!pyopencv_CalibrateDebevec_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    Ptr<cv::CalibrateDebevec> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLambda());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_getRandom(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateDebevec> * self1 = 0;
    if (!pyopencv_CalibrateDebevec_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    Ptr<cv::CalibrateDebevec> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRandom());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_getSamples(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateDebevec> * self1 = 0;
    if (!pyopencv_CalibrateDebevec_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    Ptr<cv::CalibrateDebevec> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSamples());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_setLambda(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateDebevec> * self1 = 0;
    if (!pyopencv_CalibrateDebevec_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    Ptr<cv::CalibrateDebevec> _self_ = *(self1);
    PyObject* pyobj_lambda = NULL;
    float lambda=0.f;

    const char* keywords[] = { "lambda_", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:CalibrateDebevec.setLambda", (char**)keywords, &pyobj_lambda) &&
        pyopencv_to_safe(pyobj_lambda, lambda, ArgInfo("lambda", 0)) )
    {
        ERRWRAP2(_self_->setLambda(lambda));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_setRandom(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateDebevec> * self1 = 0;
    if (!pyopencv_CalibrateDebevec_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    Ptr<cv::CalibrateDebevec> _self_ = *(self1);
    PyObject* pyobj_random = NULL;
    bool random=0;

    const char* keywords[] = { "random", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:CalibrateDebevec.setRandom", (char**)keywords, &pyobj_random) &&
        pyopencv_to_safe(pyobj_random, random, ArgInfo("random", 0)) )
    {
        ERRWRAP2(_self_->setRandom(random));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateDebevec_setSamples(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateDebevec> * self1 = 0;
    if (!pyopencv_CalibrateDebevec_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateDebevec' or its derivative)");
    Ptr<cv::CalibrateDebevec> _self_ = *(self1);
    PyObject* pyobj_samples = NULL;
    int samples=0;

    const char* keywords[] = { "samples", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:CalibrateDebevec.setSamples", (char**)keywords, &pyobj_samples) &&
        pyopencv_to_safe(pyobj_samples, samples, ArgInfo("samples", 0)) )
    {
        ERRWRAP2(_self_->setSamples(samples));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (CalibrateDebevec)

static PyGetSetDef pyopencv_CalibrateDebevec_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_CalibrateDebevec_methods[] =
{
    {"getLambda", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateDebevec_getLambda, 0), "getLambda() -> retval\n."},
    {"getRandom", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateDebevec_getRandom, 0), "getRandom() -> retval\n."},
    {"getSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateDebevec_getSamples, 0), "getSamples() -> retval\n."},
    {"setLambda", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateDebevec_setLambda, 0), "setLambda(lambda_) -> None\n."},
    {"setRandom", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateDebevec_setRandom, 0), "setRandom(random) -> None\n."},
    {"setSamples", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateDebevec_setSamples, 0), "setSamples(samples) -> None\n."},

    {NULL,          NULL}
};

// Converter (CalibrateDebevec)

template<>
struct PyOpenCV_Converter< Ptr<cv::CalibrateDebevec> >
{
    static PyObject* from(const Ptr<cv::CalibrateDebevec>& r)
    {
        return pyopencv_CalibrateDebevec_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::CalibrateDebevec>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::CalibrateDebevec> * dst_;
        if (pyopencv_CalibrateDebevec_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::CalibrateDebevec> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// CalibrateRobertson (Generic)
//================================================================================

// GetSet (CalibrateRobertson)



// Methods (CalibrateRobertson)

static PyObject* pyopencv_cv_CalibrateRobertson_getMaxIter(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateRobertson> * self1 = 0;
    if (!pyopencv_CalibrateRobertson_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    Ptr<cv::CalibrateRobertson> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxIter());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateRobertson_getRadiance(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateRobertson> * self1 = 0;
    if (!pyopencv_CalibrateRobertson_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    Ptr<cv::CalibrateRobertson> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getRadiance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateRobertson_getThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateRobertson> * self1 = 0;
    if (!pyopencv_CalibrateRobertson_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    Ptr<cv::CalibrateRobertson> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateRobertson_setMaxIter(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateRobertson> * self1 = 0;
    if (!pyopencv_CalibrateRobertson_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    Ptr<cv::CalibrateRobertson> _self_ = *(self1);
    PyObject* pyobj_max_iter = NULL;
    int max_iter=0;

    const char* keywords[] = { "max_iter", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:CalibrateRobertson.setMaxIter", (char**)keywords, &pyobj_max_iter) &&
        pyopencv_to_safe(pyobj_max_iter, max_iter, ArgInfo("max_iter", 0)) )
    {
        ERRWRAP2(_self_->setMaxIter(max_iter));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_CalibrateRobertson_setThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::CalibrateRobertson> * self1 = 0;
    if (!pyopencv_CalibrateRobertson_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'CalibrateRobertson' or its derivative)");
    Ptr<cv::CalibrateRobertson> _self_ = *(self1);
    PyObject* pyobj_threshold = NULL;
    float threshold=0.f;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:CalibrateRobertson.setThreshold", (char**)keywords, &pyobj_threshold) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (CalibrateRobertson)

static PyGetSetDef pyopencv_CalibrateRobertson_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_CalibrateRobertson_methods[] =
{
    {"getMaxIter", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateRobertson_getMaxIter, 0), "getMaxIter() -> retval\n."},
    {"getRadiance", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateRobertson_getRadiance, 0), "getRadiance() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateRobertson_getThreshold, 0), "getThreshold() -> retval\n."},
    {"setMaxIter", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateRobertson_setMaxIter, 0), "setMaxIter(max_iter) -> None\n."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_CalibrateRobertson_setThreshold, 0), "setThreshold(threshold) -> None\n."},

    {NULL,          NULL}
};

// Converter (CalibrateRobertson)

template<>
struct PyOpenCV_Converter< Ptr<cv::CalibrateRobertson> >
{
    static PyObject* from(const Ptr<cv::CalibrateRobertson>& r)
    {
        return pyopencv_CalibrateRobertson_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::CalibrateRobertson>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::CalibrateRobertson> * dst_;
        if (pyopencv_CalibrateRobertson_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::CalibrateRobertson> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// DISOpticalFlow (Generic)
//================================================================================

// GetSet (DISOpticalFlow)



// Methods (DISOpticalFlow)

static PyObject* pyopencv_cv_DISOpticalFlow_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_preset = NULL;
    int preset=DISOpticalFlow::PRESET_FAST;
    Ptr<DISOpticalFlow> retval;

    const char* keywords[] = { "preset", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:DISOpticalFlow.create", (char**)keywords, &pyobj_preset) &&
        pyopencv_to_safe(pyobj_preset, preset, ArgInfo("preset", 0)) )
    {
        ERRWRAP2(retval = cv::DISOpticalFlow::create(preset));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getFinestScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFinestScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getGradientDescentIterations(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getGradientDescentIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getPatchSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPatchSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getPatchStride(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPatchStride());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getUseMeanNormalization(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUseMeanNormalization());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getUseSpatialPropagation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUseSpatialPropagation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getVariationalRefinementAlpha(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVariationalRefinementAlpha());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getVariationalRefinementDelta(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVariationalRefinementDelta());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getVariationalRefinementGamma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVariationalRefinementGamma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_getVariationalRefinementIterations(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVariationalRefinementIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setFinestScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setFinestScale", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setFinestScale(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setGradientDescentIterations(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setGradientDescentIterations", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setGradientDescentIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setPatchSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setPatchSize", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setPatchSize(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setPatchStride(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setPatchStride", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setPatchStride(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setUseMeanNormalization(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setUseMeanNormalization", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setUseMeanNormalization(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setUseSpatialPropagation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setUseSpatialPropagation", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setUseSpatialPropagation(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setVariationalRefinementAlpha(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    float val=0.f;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setVariationalRefinementAlpha", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setVariationalRefinementAlpha(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setVariationalRefinementDelta(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    float val=0.f;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setVariationalRefinementDelta", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setVariationalRefinementDelta(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setVariationalRefinementGamma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    float val=0.f;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setVariationalRefinementGamma", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setVariationalRefinementGamma(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DISOpticalFlow_setVariationalRefinementIterations(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DISOpticalFlow> * self1 = 0;
    if (!pyopencv_DISOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DISOpticalFlow' or its derivative)");
    Ptr<cv::DISOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DISOpticalFlow.setVariationalRefinementIterations", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setVariationalRefinementIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (DISOpticalFlow)

static PyGetSetDef pyopencv_DISOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_DISOpticalFlow_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_create_static, METH_STATIC), "create([, preset]) -> retval\n.   @brief Creates an instance of DISOpticalFlow\n.   \n.       @param preset one of PRESET_ULTRAFAST, PRESET_FAST and PRESET_MEDIUM"},
    {"getFinestScale", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getFinestScale, 0), "getFinestScale() -> retval\n.   @brief Finest level of the Gaussian pyramid on which the flow is computed (zero level\n.           corresponds to the original image resolution). The final flow is obtained by bilinear upscaling.\n.   @see setFinestScale"},
    {"getGradientDescentIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getGradientDescentIterations, 0), "getGradientDescentIterations() -> retval\n.   @brief Maximum number of gradient descent iterations in the patch inverse search stage. Higher values\n.           may improve quality in some cases.\n.   @see setGradientDescentIterations"},
    {"getPatchSize", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getPatchSize, 0), "getPatchSize() -> retval\n.   @brief Size of an image patch for matching (in pixels). Normally, default 8x8 patches work well\n.           enough in most cases.\n.   @see setPatchSize"},
    {"getPatchStride", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getPatchStride, 0), "getPatchStride() -> retval\n.   @brief Stride between neighbor patches. Must be less than patch size. Lower values correspond\n.           to higher flow quality.\n.   @see setPatchStride"},
    {"getUseMeanNormalization", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getUseMeanNormalization, 0), "getUseMeanNormalization() -> retval\n.   @brief Whether to use mean-normalization of patches when computing patch distance. It is turned on\n.           by default as it typically provides a noticeable quality boost because of increased robustness to\n.           illumination variations. Turn it off if you are certain that your sequence doesn't contain any changes\n.           in illumination.\n.   @see setUseMeanNormalization"},
    {"getUseSpatialPropagation", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getUseSpatialPropagation, 0), "getUseSpatialPropagation() -> retval\n.   @brief Whether to use spatial propagation of good optical flow vectors. This option is turned on by\n.           default, as it tends to work better on average and can sometimes help recover from major errors\n.           introduced by the coarse-to-fine scheme employed by the DIS optical flow algorithm. Turning this\n.           option off can make the output flow field a bit smoother, however.\n.   @see setUseSpatialPropagation"},
    {"getVariationalRefinementAlpha", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getVariationalRefinementAlpha, 0), "getVariationalRefinementAlpha() -> retval\n.   @brief Weight of the smoothness term\n.   @see setVariationalRefinementAlpha"},
    {"getVariationalRefinementDelta", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getVariationalRefinementDelta, 0), "getVariationalRefinementDelta() -> retval\n.   @brief Weight of the color constancy term\n.   @see setVariationalRefinementDelta"},
    {"getVariationalRefinementGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getVariationalRefinementGamma, 0), "getVariationalRefinementGamma() -> retval\n.   @brief Weight of the gradient constancy term\n.   @see setVariationalRefinementGamma"},
    {"getVariationalRefinementIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_getVariationalRefinementIterations, 0), "getVariationalRefinementIterations() -> retval\n.   @brief Number of fixed point iterations of variational refinement per scale. Set to zero to\n.           disable variational refinement completely. Higher values will typically result in more smooth and\n.           high-quality flow.\n.   @see setGradientDescentIterations"},
    {"setFinestScale", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setFinestScale, 0), "setFinestScale(val) -> None\n.   @copybrief getFinestScale @see getFinestScale"},
    {"setGradientDescentIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setGradientDescentIterations, 0), "setGradientDescentIterations(val) -> None\n.   @copybrief getGradientDescentIterations @see getGradientDescentIterations"},
    {"setPatchSize", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setPatchSize, 0), "setPatchSize(val) -> None\n.   @copybrief getPatchSize @see getPatchSize"},
    {"setPatchStride", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setPatchStride, 0), "setPatchStride(val) -> None\n.   @copybrief getPatchStride @see getPatchStride"},
    {"setUseMeanNormalization", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setUseMeanNormalization, 0), "setUseMeanNormalization(val) -> None\n.   @copybrief getUseMeanNormalization @see getUseMeanNormalization"},
    {"setUseSpatialPropagation", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setUseSpatialPropagation, 0), "setUseSpatialPropagation(val) -> None\n.   @copybrief getUseSpatialPropagation @see getUseSpatialPropagation"},
    {"setVariationalRefinementAlpha", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setVariationalRefinementAlpha, 0), "setVariationalRefinementAlpha(val) -> None\n.   @copybrief getVariationalRefinementAlpha @see getVariationalRefinementAlpha"},
    {"setVariationalRefinementDelta", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setVariationalRefinementDelta, 0), "setVariationalRefinementDelta(val) -> None\n.   @copybrief getVariationalRefinementDelta @see getVariationalRefinementDelta"},
    {"setVariationalRefinementGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setVariationalRefinementGamma, 0), "setVariationalRefinementGamma(val) -> None\n.   @copybrief getVariationalRefinementGamma @see getVariationalRefinementGamma"},
    {"setVariationalRefinementIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_DISOpticalFlow_setVariationalRefinementIterations, 0), "setVariationalRefinementIterations(val) -> None\n.   @copybrief getGradientDescentIterations @see getGradientDescentIterations"},

    {NULL,          NULL}
};

// Converter (DISOpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::DISOpticalFlow> >
{
    static PyObject* from(const Ptr<cv::DISOpticalFlow>& r)
    {
        return pyopencv_DISOpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::DISOpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::DISOpticalFlow> * dst_;
        if (pyopencv_DISOpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::DISOpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// DMatch (Generic)
//================================================================================

// GetSet (DMatch)


static PyObject* pyopencv_DMatch_get_distance(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.distance);
}

static int pyopencv_DMatch_set_distance(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the distance attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.distance, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_DMatch_get_imgIdx(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.imgIdx);
}

static int pyopencv_DMatch_set_imgIdx(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the imgIdx attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.imgIdx, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_DMatch_get_queryIdx(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.queryIdx);
}

static int pyopencv_DMatch_set_queryIdx(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the queryIdx attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.queryIdx, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_DMatch_get_trainIdx(pyopencv_DMatch_t* p, void *closure)
{
    return pyopencv_from(p->v.trainIdx);
}

static int pyopencv_DMatch_set_trainIdx(pyopencv_DMatch_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the trainIdx attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.trainIdx, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (DMatch)

static int pyopencv_cv_DMatch_DMatch(pyopencv_DMatch_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(3);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::DMatch());
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj__queryIdx = NULL;
    int _queryIdx=0;
    PyObject* pyobj__trainIdx = NULL;
    int _trainIdx=0;
    PyObject* pyobj__distance = NULL;
    float _distance=0.f;

    const char* keywords[] = { "_queryIdx", "_trainIdx", "_distance", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:DMatch", (char**)keywords, &pyobj__queryIdx, &pyobj__trainIdx, &pyobj__distance) &&
        pyopencv_to_safe(pyobj__queryIdx, _queryIdx, ArgInfo("_queryIdx", 0)) &&
        pyopencv_to_safe(pyobj__trainIdx, _trainIdx, ArgInfo("_trainIdx", 0)) &&
        pyopencv_to_safe(pyobj__distance, _distance, ArgInfo("_distance", 0)) )
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::DMatch(_queryIdx, _trainIdx, _distance));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj__queryIdx = NULL;
    int _queryIdx=0;
    PyObject* pyobj__trainIdx = NULL;
    int _trainIdx=0;
    PyObject* pyobj__imgIdx = NULL;
    int _imgIdx=0;
    PyObject* pyobj__distance = NULL;
    float _distance=0.f;

    const char* keywords[] = { "_queryIdx", "_trainIdx", "_imgIdx", "_distance", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO:DMatch", (char**)keywords, &pyobj__queryIdx, &pyobj__trainIdx, &pyobj__imgIdx, &pyobj__distance) &&
        pyopencv_to_safe(pyobj__queryIdx, _queryIdx, ArgInfo("_queryIdx", 0)) &&
        pyopencv_to_safe(pyobj__trainIdx, _trainIdx, ArgInfo("_trainIdx", 0)) &&
        pyopencv_to_safe(pyobj__imgIdx, _imgIdx, ArgInfo("_imgIdx", 0)) &&
        pyopencv_to_safe(pyobj__distance, _distance, ArgInfo("_distance", 0)) )
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::DMatch(_queryIdx, _trainIdx, _imgIdx, _distance));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("DMatch");

    return -1;
}



// Tables (DMatch)

static PyGetSetDef pyopencv_DMatch_getseters[] =
{
    {(char*)"distance", (getter)pyopencv_DMatch_get_distance, (setter)pyopencv_DMatch_set_distance, (char*)"distance", NULL},
    {(char*)"imgIdx", (getter)pyopencv_DMatch_get_imgIdx, (setter)pyopencv_DMatch_set_imgIdx, (char*)"imgIdx", NULL},
    {(char*)"queryIdx", (getter)pyopencv_DMatch_get_queryIdx, (setter)pyopencv_DMatch_set_queryIdx, (char*)"queryIdx", NULL},
    {(char*)"trainIdx", (getter)pyopencv_DMatch_get_trainIdx, (setter)pyopencv_DMatch_set_trainIdx, (char*)"trainIdx", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_DMatch_methods[] =
{

    {NULL,          NULL}
};

// Converter (DMatch)

template<>
struct PyOpenCV_Converter< cv::DMatch >
{
    static PyObject* from(const cv::DMatch& r)
    {
        return pyopencv_DMatch_Instance(r);
    }
    static bool to(PyObject* src, cv::DMatch& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::DMatch * dst_;
        if (pyopencv_DMatch_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::DMatch for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// DenseOpticalFlow (Generic)
//================================================================================

// GetSet (DenseOpticalFlow)



// Methods (DenseOpticalFlow)

static PyObject* pyopencv_cv_DenseOpticalFlow_calc(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DenseOpticalFlow> * self1 = 0;
    if (!pyopencv_DenseOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DenseOpticalFlow' or its derivative)");
    Ptr<cv::DenseOpticalFlow> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_I0 = NULL;
    Mat I0;
    PyObject* pyobj_I1 = NULL;
    Mat I1;
    PyObject* pyobj_flow = NULL;
    Mat flow;

    const char* keywords[] = { "I0", "I1", "flow", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:DenseOpticalFlow.calc", (char**)keywords, &pyobj_I0, &pyobj_I1, &pyobj_flow) &&
        pyopencv_to_safe(pyobj_I0, I0, ArgInfo("I0", 0)) &&
        pyopencv_to_safe(pyobj_I1, I1, ArgInfo("I1", 0)) &&
        pyopencv_to_safe(pyobj_flow, flow, ArgInfo("flow", 1)) )
    {
        ERRWRAP2(_self_->calc(I0, I1, flow));
        return pyopencv_from(flow);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_I0 = NULL;
    UMat I0;
    PyObject* pyobj_I1 = NULL;
    UMat I1;
    PyObject* pyobj_flow = NULL;
    UMat flow;

    const char* keywords[] = { "I0", "I1", "flow", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:DenseOpticalFlow.calc", (char**)keywords, &pyobj_I0, &pyobj_I1, &pyobj_flow) &&
        pyopencv_to_safe(pyobj_I0, I0, ArgInfo("I0", 0)) &&
        pyopencv_to_safe(pyobj_I1, I1, ArgInfo("I1", 0)) &&
        pyopencv_to_safe(pyobj_flow, flow, ArgInfo("flow", 1)) )
    {
        ERRWRAP2(_self_->calc(I0, I1, flow));
        return pyopencv_from(flow);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("calc");

    return NULL;
}

static PyObject* pyopencv_cv_DenseOpticalFlow_collectGarbage(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DenseOpticalFlow> * self1 = 0;
    if (!pyopencv_DenseOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DenseOpticalFlow' or its derivative)");
    Ptr<cv::DenseOpticalFlow> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->collectGarbage());
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (DenseOpticalFlow)

static PyGetSetDef pyopencv_DenseOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_DenseOpticalFlow_methods[] =
{
    {"calc", CV_PY_FN_WITH_KW_(pyopencv_cv_DenseOpticalFlow_calc, 0), "calc(I0, I1, flow) -> flow\n.   @brief Calculates an optical flow.\n.   \n.       @param I0 first 8-bit single-channel input image.\n.       @param I1 second input image of the same size and the same type as prev.\n.       @param flow computed flow image that has the same size as prev and type CV_32FC2."},
    {"collectGarbage", CV_PY_FN_WITH_KW_(pyopencv_cv_DenseOpticalFlow_collectGarbage, 0), "collectGarbage() -> None\n.   @brief Releases all inner buffers."},

    {NULL,          NULL}
};

// Converter (DenseOpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::DenseOpticalFlow> >
{
    static PyObject* from(const Ptr<cv::DenseOpticalFlow>& r)
    {
        return pyopencv_DenseOpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::DenseOpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::DenseOpticalFlow> * dst_;
        if (pyopencv_DenseOpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::DenseOpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// DescriptorMatcher (Generic)
//================================================================================

// GetSet (DescriptorMatcher)



// Methods (DescriptorMatcher)

static PyObject* pyopencv_cv_DescriptorMatcher_add(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DescriptorMatcher.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_descriptors = NULL;
    vector_UMat descriptors;

    const char* keywords[] = { "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DescriptorMatcher.add", (char**)keywords, &pyobj_descriptors) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 0)) )
    {
        ERRWRAP2(_self_->add(descriptors));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("add");

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_clear(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->clear());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_clone(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    PyObject* pyobj_emptyTrainData = NULL;
    bool emptyTrainData=false;
    Ptr<DescriptorMatcher> retval;

    const char* keywords[] = { "emptyTrainData", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:DescriptorMatcher.clone", (char**)keywords, &pyobj_emptyTrainData) &&
        pyopencv_to_safe(pyobj_emptyTrainData, emptyTrainData, ArgInfo("emptyTrainData", 0)) )
    {
        ERRWRAP2(retval = _self_->clone(emptyTrainData));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_descriptorMatcherType = NULL;
    String descriptorMatcherType;
    Ptr<DescriptorMatcher> retval;

    const char* keywords[] = { "descriptorMatcherType", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DescriptorMatcher.create", (char**)keywords, &pyobj_descriptorMatcherType) &&
        pyopencv_to_safe(pyobj_descriptorMatcherType, descriptorMatcherType, ArgInfo("descriptorMatcherType", 0)) )
    {
        ERRWRAP2(retval = cv::DescriptorMatcher::create(descriptorMatcherType));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_matcherType = NULL;
    DescriptorMatcher_MatcherType matcherType=static_cast<DescriptorMatcher_MatcherType>(0);
    Ptr<DescriptorMatcher> retval;

    const char* keywords[] = { "matcherType", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DescriptorMatcher.create", (char**)keywords, &pyobj_matcherType) &&
        pyopencv_to_safe(pyobj_matcherType, matcherType, ArgInfo("matcherType", 0)) )
    {
        ERRWRAP2(retval = cv::DescriptorMatcher::create(matcherType));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("create");

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_empty(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_getTrainDescriptors(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    std::vector<Mat> retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrainDescriptors());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_isMaskSupported(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isMaskSupported());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_knnMatch(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_vector_DMatch matches;
    PyObject* pyobj_k = NULL;
    int k=0;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    PyObject* pyobj_compactResult = NULL;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "k", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|OO:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_k, &pyobj_mask, &pyobj_compactResult) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_k, k, ArgInfo("k", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_compactResult, compactResult, ArgInfo("compactResult", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, trainDescriptors, matches, k, mask, compactResult));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    UMat trainDescriptors;
    vector_vector_DMatch matches;
    PyObject* pyobj_k = NULL;
    int k=0;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    PyObject* pyobj_compactResult = NULL;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "k", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|OO:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_k, &pyobj_mask, &pyobj_compactResult) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_k, k, ArgInfo("k", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_compactResult, compactResult, ArgInfo("compactResult", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, trainDescriptors, matches, k, mask, compactResult));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_vector_DMatch matches;
    PyObject* pyobj_k = NULL;
    int k=0;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    PyObject* pyobj_compactResult = NULL;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "k", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OO:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_k, &pyobj_masks, &pyobj_compactResult) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_k, k, ArgInfo("k", 0)) &&
        pyopencv_to_safe(pyobj_masks, masks, ArgInfo("masks", 0)) &&
        pyopencv_to_safe(pyobj_compactResult, compactResult, ArgInfo("compactResult", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, matches, k, masks, compactResult));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    vector_vector_DMatch matches;
    PyObject* pyobj_k = NULL;
    int k=0;
    PyObject* pyobj_masks = NULL;
    vector_UMat masks;
    PyObject* pyobj_compactResult = NULL;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "k", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OO:DescriptorMatcher.knnMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_k, &pyobj_masks, &pyobj_compactResult) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_k, k, ArgInfo("k", 0)) &&
        pyopencv_to_safe(pyobj_masks, masks, ArgInfo("masks", 0)) &&
        pyopencv_to_safe(pyobj_compactResult, compactResult, ArgInfo("compactResult", 0)) )
    {
        ERRWRAP2(_self_->knnMatch(queryDescriptors, matches, k, masks, compactResult));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("knnMatch");

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_match(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_mask) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, trainDescriptors, matches, mask));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    UMat trainDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_mask = NULL;
    UMat mask;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_mask) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, trainDescriptors, matches, mask));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "queryDescriptors", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_masks) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, matches, masks));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    vector_DMatch matches;
    PyObject* pyobj_masks = NULL;
    vector_UMat masks;

    const char* keywords[] = { "queryDescriptors", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:DescriptorMatcher.match", (char**)keywords, &pyobj_queryDescriptors, &pyobj_masks) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->match(queryDescriptors, matches, masks));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("match");

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_radiusMatch(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    Mat trainDescriptors;
    vector_vector_DMatch matches;
    PyObject* pyobj_maxDistance = NULL;
    float maxDistance=0.f;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    PyObject* pyobj_compactResult = NULL;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "maxDistance", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|OO:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_maxDistance, &pyobj_mask, &pyobj_compactResult) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_maxDistance, maxDistance, ArgInfo("maxDistance", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_compactResult, compactResult, ArgInfo("compactResult", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, trainDescriptors, matches, maxDistance, mask, compactResult));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    PyObject* pyobj_trainDescriptors = NULL;
    UMat trainDescriptors;
    vector_vector_DMatch matches;
    PyObject* pyobj_maxDistance = NULL;
    float maxDistance=0.f;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    PyObject* pyobj_compactResult = NULL;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "trainDescriptors", "maxDistance", "mask", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|OO:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_trainDescriptors, &pyobj_maxDistance, &pyobj_mask, &pyobj_compactResult) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_trainDescriptors, trainDescriptors, ArgInfo("trainDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_maxDistance, maxDistance, ArgInfo("maxDistance", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_compactResult, compactResult, ArgInfo("compactResult", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, trainDescriptors, matches, maxDistance, mask, compactResult));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_queryDescriptors = NULL;
    Mat queryDescriptors;
    vector_vector_DMatch matches;
    PyObject* pyobj_maxDistance = NULL;
    float maxDistance=0.f;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;
    PyObject* pyobj_compactResult = NULL;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "maxDistance", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OO:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_maxDistance, &pyobj_masks, &pyobj_compactResult) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_maxDistance, maxDistance, ArgInfo("maxDistance", 0)) &&
        pyopencv_to_safe(pyobj_masks, masks, ArgInfo("masks", 0)) &&
        pyopencv_to_safe(pyobj_compactResult, compactResult, ArgInfo("compactResult", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, matches, maxDistance, masks, compactResult));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_queryDescriptors = NULL;
    UMat queryDescriptors;
    vector_vector_DMatch matches;
    PyObject* pyobj_maxDistance = NULL;
    float maxDistance=0.f;
    PyObject* pyobj_masks = NULL;
    vector_UMat masks;
    PyObject* pyobj_compactResult = NULL;
    bool compactResult=false;

    const char* keywords[] = { "queryDescriptors", "maxDistance", "masks", "compactResult", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OO:DescriptorMatcher.radiusMatch", (char**)keywords, &pyobj_queryDescriptors, &pyobj_maxDistance, &pyobj_masks, &pyobj_compactResult) &&
        pyopencv_to_safe(pyobj_queryDescriptors, queryDescriptors, ArgInfo("queryDescriptors", 0)) &&
        pyopencv_to_safe(pyobj_maxDistance, maxDistance, ArgInfo("maxDistance", 0)) &&
        pyopencv_to_safe(pyobj_masks, masks, ArgInfo("masks", 0)) &&
        pyopencv_to_safe(pyobj_compactResult, compactResult, ArgInfo("compactResult", 0)) )
    {
        ERRWRAP2(_self_->radiusMatch(queryDescriptors, matches, maxDistance, masks, compactResult));
        return pyopencv_from(matches);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("radiusMatch");

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_read(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DescriptorMatcher.read", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to_safe(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->read(fileName));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arg1 = NULL;
    cv::FileNode arg1;

    const char* keywords[] = { "arg1", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DescriptorMatcher.read", (char**)keywords, &pyobj_arg1) &&
        pyopencv_to_safe(pyobj_arg1, arg1, ArgInfo("arg1", 0)) )
    {
        ERRWRAP2(_self_->read(arg1));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("read");

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_train(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->train());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_DescriptorMatcher_write(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::DescriptorMatcher> * self1 = 0;
    if (!pyopencv_DescriptorMatcher_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'DescriptorMatcher' or its derivative)");
    Ptr<cv::DescriptorMatcher> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DescriptorMatcher.write", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to_safe(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->write(fileName));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_fs = NULL;
    Ptr<cv::FileStorage> fs;
    PyObject* pyobj_name = NULL;
    String name;

    const char* keywords[] = { "fs", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:DescriptorMatcher.write", (char**)keywords, &pyobj_fs, &pyobj_name) &&
        pyopencv_to_safe(pyobj_fs, fs, ArgInfo("fs", 0)) &&
        pyopencv_to_safe(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->write(*fs, name));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("write");

    return NULL;
}



// Tables (DescriptorMatcher)

static PyGetSetDef pyopencv_DescriptorMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_DescriptorMatcher_methods[] =
{
    {"add", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_add, 0), "add(descriptors) -> None\n.   @brief Adds descriptors to train a CPU(trainDescCollectionis) or GPU(utrainDescCollectionis) descriptor\n.       collection.\n.   \n.       If the collection is not empty, the new descriptors are added to existing train descriptors.\n.   \n.       @param descriptors Descriptors to add. Each descriptors[i] is a set of descriptors from the same\n.       train image."},
    {"clear", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_clear, 0), "clear() -> None\n.   @brief Clears the train descriptor collections."},
    {"clone", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_clone, 0), "clone([, emptyTrainData]) -> retval\n.   @brief Clones the matcher.\n.   \n.       @param emptyTrainData If emptyTrainData is false, the method creates a deep copy of the object,\n.       that is, copies both parameters and train data. If emptyTrainData is true, the method creates an\n.       object copy with the current parameters but with empty train data."},
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_create_static, METH_STATIC), "create(descriptorMatcherType) -> retval\n.   @brief Creates a descriptor matcher of a given type with the default parameters (using default\n.       constructor).\n.   \n.       @param descriptorMatcherType Descriptor matcher type. Now the following matcher types are\n.       supported:\n.       -   `BruteForce` (it uses L2 )\n.       -   `BruteForce-L1`\n.       -   `BruteForce-Hamming`\n.       -   `BruteForce-Hamming(2)`\n.       -   `FlannBased`\n\n\n\ncreate(matcherType) -> retval\n."},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_empty, 0), "empty() -> retval\n.   @brief Returns true if there are no train descriptors in the both collections."},
    {"getTrainDescriptors", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_getTrainDescriptors, 0), "getTrainDescriptors() -> retval\n.   @brief Returns a constant link to the train descriptor collection trainDescCollection ."},
    {"isMaskSupported", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_isMaskSupported, 0), "isMaskSupported() -> retval\n.   @brief Returns true if the descriptor matcher supports masking permissible matches."},
    {"knnMatch", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_knnMatch, 0), "knnMatch(queryDescriptors, trainDescriptors, k[, mask[, compactResult]]) -> matches\n.   @brief Finds the k best matches for each descriptor from a query set.\n.   \n.       @param queryDescriptors Query set of descriptors.\n.       @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors\n.       collection stored in the class object.\n.       @param mask Mask specifying permissible matches between an input query and train matrices of\n.       descriptors.\n.       @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.\n.       @param k Count of best matches found per each query descriptor or less if a query descriptor has\n.       less than k possible matches in total.\n.       @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.       false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.       the matches vector does not contain matches for fully masked-out query descriptors.\n.   \n.       These extended variants of DescriptorMatcher::match methods find several best matches for each query\n.       descriptor. The matches are returned in the distance increasing order. See DescriptorMatcher::match\n.       for the details about query and train descriptors.\n\n\n\nknnMatch(queryDescriptors, k[, masks[, compactResult]]) -> matches\n.   @overload\n.       @param queryDescriptors Query set of descriptors.\n.       @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.\n.       @param k Count of best matches found per each query descriptor or less if a query descriptor has\n.       less than k possible matches in total.\n.       @param masks Set of masks. Each masks[i] specifies permissible matches between the input query\n.       descriptors and stored train descriptors from the i-th image trainDescCollection[i].\n.       @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.       false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.       the matches vector does not contain matches for fully masked-out query descriptors."},
    {"match", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_match, 0), "match(queryDescriptors, trainDescriptors[, mask]) -> matches\n.   @brief Finds the best match for each descriptor from a query set.\n.   \n.       @param queryDescriptors Query set of descriptors.\n.       @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors\n.       collection stored in the class object.\n.       @param matches Matches. If a query descriptor is masked out in mask , no match is added for this\n.       descriptor. So, matches size may be smaller than the query descriptors count.\n.       @param mask Mask specifying permissible matches between an input query and train matrices of\n.       descriptors.\n.   \n.       In the first variant of this method, the train descriptors are passed as an input argument. In the\n.       second variant of the method, train descriptors collection that was set by DescriptorMatcher::add is\n.       used. Optional mask (or masks) can be passed to specify which query and training descriptors can be\n.       matched. Namely, queryDescriptors[i] can be matched with trainDescriptors[j] only if\n.       mask.at\\<uchar\\>(i,j) is non-zero.\n\n\n\nmatch(queryDescriptors[, masks]) -> matches\n.   @overload\n.       @param queryDescriptors Query set of descriptors.\n.       @param matches Matches. If a query descriptor is masked out in mask , no match is added for this\n.       descriptor. So, matches size may be smaller than the query descriptors count.\n.       @param masks Set of masks. Each masks[i] specifies permissible matches between the input query\n.       descriptors and stored train descriptors from the i-th image trainDescCollection[i]."},
    {"radiusMatch", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_radiusMatch, 0), "radiusMatch(queryDescriptors, trainDescriptors, maxDistance[, mask[, compactResult]]) -> matches\n.   @brief For each query descriptor, finds the training descriptors not farther than the specified distance.\n.   \n.       @param queryDescriptors Query set of descriptors.\n.       @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors\n.       collection stored in the class object.\n.       @param matches Found matches.\n.       @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.       false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.       the matches vector does not contain matches for fully masked-out query descriptors.\n.       @param maxDistance Threshold for the distance between matched descriptors. Distance means here\n.       metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured\n.       in Pixels)!\n.       @param mask Mask specifying permissible matches between an input query and train matrices of\n.       descriptors.\n.   \n.       For each query descriptor, the methods find such training descriptors that the distance between the\n.       query descriptor and the training descriptor is equal or smaller than maxDistance. Found matches are\n.       returned in the distance increasing order.\n\n\n\nradiusMatch(queryDescriptors, maxDistance[, masks[, compactResult]]) -> matches\n.   @overload\n.       @param queryDescriptors Query set of descriptors.\n.       @param matches Found matches.\n.       @param maxDistance Threshold for the distance between matched descriptors. Distance means here\n.       metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured\n.       in Pixels)!\n.       @param masks Set of masks. Each masks[i] specifies permissible matches between the input query\n.       descriptors and stored train descriptors from the i-th image trainDescCollection[i].\n.       @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is\n.       false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,\n.       the matches vector does not contain matches for fully masked-out query descriptors."},
    {"read", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_read, 0), "read(fileName) -> None\n.   \n\n\n\nread(arg1) -> None\n."},
    {"train", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_train, 0), "train() -> None\n.   @brief Trains a descriptor matcher\n.   \n.       Trains a descriptor matcher (for example, the flann index). In all methods to match, the method\n.       train() is run every time before matching. Some descriptor matchers (for example, BruteForceMatcher)\n.       have an empty implementation of this method. Other matchers really train their inner structures (for\n.       example, FlannBasedMatcher trains flann::Index )."},
    {"write", CV_PY_FN_WITH_KW_(pyopencv_cv_DescriptorMatcher_write, 0), "write(fileName) -> None\n.   \n\n\n\nwrite(fs, name) -> None\n."},

    {NULL,          NULL}
};

// Converter (DescriptorMatcher)

template<>
struct PyOpenCV_Converter< Ptr<cv::DescriptorMatcher> >
{
    static PyObject* from(const Ptr<cv::DescriptorMatcher>& r)
    {
        return pyopencv_DescriptorMatcher_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::DescriptorMatcher>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::DescriptorMatcher> * dst_;
        if (pyopencv_DescriptorMatcher_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::DescriptorMatcher> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// FarnebackOpticalFlow (Generic)
//================================================================================

// GetSet (FarnebackOpticalFlow)



// Methods (FarnebackOpticalFlow)

static PyObject* pyopencv_cv_FarnebackOpticalFlow_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_numLevels = NULL;
    int numLevels=5;
    PyObject* pyobj_pyrScale = NULL;
    double pyrScale=0.5;
    PyObject* pyobj_fastPyramids = NULL;
    bool fastPyramids=false;
    PyObject* pyobj_winSize = NULL;
    int winSize=13;
    PyObject* pyobj_numIters = NULL;
    int numIters=10;
    PyObject* pyobj_polyN = NULL;
    int polyN=5;
    PyObject* pyobj_polySigma = NULL;
    double polySigma=1.1;
    PyObject* pyobj_flags = NULL;
    int flags=0;
    Ptr<FarnebackOpticalFlow> retval;

    const char* keywords[] = { "numLevels", "pyrScale", "fastPyramids", "winSize", "numIters", "polyN", "polySigma", "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOOOOOOO:FarnebackOpticalFlow.create", (char**)keywords, &pyobj_numLevels, &pyobj_pyrScale, &pyobj_fastPyramids, &pyobj_winSize, &pyobj_numIters, &pyobj_polyN, &pyobj_polySigma, &pyobj_flags) &&
        pyopencv_to_safe(pyobj_numLevels, numLevels, ArgInfo("numLevels", 0)) &&
        pyopencv_to_safe(pyobj_pyrScale, pyrScale, ArgInfo("pyrScale", 0)) &&
        pyopencv_to_safe(pyobj_fastPyramids, fastPyramids, ArgInfo("fastPyramids", 0)) &&
        pyopencv_to_safe(pyobj_winSize, winSize, ArgInfo("winSize", 0)) &&
        pyopencv_to_safe(pyobj_numIters, numIters, ArgInfo("numIters", 0)) &&
        pyopencv_to_safe(pyobj_polyN, polyN, ArgInfo("polyN", 0)) &&
        pyopencv_to_safe(pyobj_polySigma, polySigma, ArgInfo("polySigma", 0)) &&
        pyopencv_to_safe(pyobj_flags, flags, ArgInfo("flags", 0)) )
    {
        ERRWRAP2(retval = cv::FarnebackOpticalFlow::create(numLevels, pyrScale, fastPyramids, winSize, numIters, polyN, polySigma, flags));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getFastPyramids(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFastPyramids());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getFlags(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFlags());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getNumIters(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNumIters());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getNumLevels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNumLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getPolyN(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPolyN());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getPolySigma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPolySigma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getPyrScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPyrScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_getWinSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWinSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setFastPyramids(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_fastPyramids = NULL;
    bool fastPyramids=0;

    const char* keywords[] = { "fastPyramids", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FarnebackOpticalFlow.setFastPyramids", (char**)keywords, &pyobj_fastPyramids) &&
        pyopencv_to_safe(pyobj_fastPyramids, fastPyramids, ArgInfo("fastPyramids", 0)) )
    {
        ERRWRAP2(_self_->setFastPyramids(fastPyramids));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setFlags(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_flags = NULL;
    int flags=0;

    const char* keywords[] = { "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FarnebackOpticalFlow.setFlags", (char**)keywords, &pyobj_flags) &&
        pyopencv_to_safe(pyobj_flags, flags, ArgInfo("flags", 0)) )
    {
        ERRWRAP2(_self_->setFlags(flags));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setNumIters(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_numIters = NULL;
    int numIters=0;

    const char* keywords[] = { "numIters", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FarnebackOpticalFlow.setNumIters", (char**)keywords, &pyobj_numIters) &&
        pyopencv_to_safe(pyobj_numIters, numIters, ArgInfo("numIters", 0)) )
    {
        ERRWRAP2(_self_->setNumIters(numIters));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setNumLevels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_numLevels = NULL;
    int numLevels=0;

    const char* keywords[] = { "numLevels", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FarnebackOpticalFlow.setNumLevels", (char**)keywords, &pyobj_numLevels) &&
        pyopencv_to_safe(pyobj_numLevels, numLevels, ArgInfo("numLevels", 0)) )
    {
        ERRWRAP2(_self_->setNumLevels(numLevels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setPolyN(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_polyN = NULL;
    int polyN=0;

    const char* keywords[] = { "polyN", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FarnebackOpticalFlow.setPolyN", (char**)keywords, &pyobj_polyN) &&
        pyopencv_to_safe(pyobj_polyN, polyN, ArgInfo("polyN", 0)) )
    {
        ERRWRAP2(_self_->setPolyN(polyN));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setPolySigma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_polySigma = NULL;
    double polySigma=0;

    const char* keywords[] = { "polySigma", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FarnebackOpticalFlow.setPolySigma", (char**)keywords, &pyobj_polySigma) &&
        pyopencv_to_safe(pyobj_polySigma, polySigma, ArgInfo("polySigma", 0)) )
    {
        ERRWRAP2(_self_->setPolySigma(polySigma));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setPyrScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_pyrScale = NULL;
    double pyrScale=0;

    const char* keywords[] = { "pyrScale", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FarnebackOpticalFlow.setPyrScale", (char**)keywords, &pyobj_pyrScale) &&
        pyopencv_to_safe(pyobj_pyrScale, pyrScale, ArgInfo("pyrScale", 0)) )
    {
        ERRWRAP2(_self_->setPyrScale(pyrScale));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FarnebackOpticalFlow_setWinSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FarnebackOpticalFlow> * self1 = 0;
    if (!pyopencv_FarnebackOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FarnebackOpticalFlow' or its derivative)");
    Ptr<cv::FarnebackOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_winSize = NULL;
    int winSize=0;

    const char* keywords[] = { "winSize", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FarnebackOpticalFlow.setWinSize", (char**)keywords, &pyobj_winSize) &&
        pyopencv_to_safe(pyobj_winSize, winSize, ArgInfo("winSize", 0)) )
    {
        ERRWRAP2(_self_->setWinSize(winSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (FarnebackOpticalFlow)

static PyGetSetDef pyopencv_FarnebackOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_FarnebackOpticalFlow_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_create_static, METH_STATIC), "create([, numLevels[, pyrScale[, fastPyramids[, winSize[, numIters[, polyN[, polySigma[, flags]]]]]]]]) -> retval\n."},
    {"getFastPyramids", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getFastPyramids, 0), "getFastPyramids() -> retval\n."},
    {"getFlags", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getFlags, 0), "getFlags() -> retval\n."},
    {"getNumIters", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getNumIters, 0), "getNumIters() -> retval\n."},
    {"getNumLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getNumLevels, 0), "getNumLevels() -> retval\n."},
    {"getPolyN", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getPolyN, 0), "getPolyN() -> retval\n."},
    {"getPolySigma", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getPolySigma, 0), "getPolySigma() -> retval\n."},
    {"getPyrScale", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getPyrScale, 0), "getPyrScale() -> retval\n."},
    {"getWinSize", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_getWinSize, 0), "getWinSize() -> retval\n."},
    {"setFastPyramids", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setFastPyramids, 0), "setFastPyramids(fastPyramids) -> None\n."},
    {"setFlags", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setFlags, 0), "setFlags(flags) -> None\n."},
    {"setNumIters", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setNumIters, 0), "setNumIters(numIters) -> None\n."},
    {"setNumLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setNumLevels, 0), "setNumLevels(numLevels) -> None\n."},
    {"setPolyN", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setPolyN, 0), "setPolyN(polyN) -> None\n."},
    {"setPolySigma", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setPolySigma, 0), "setPolySigma(polySigma) -> None\n."},
    {"setPyrScale", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setPyrScale, 0), "setPyrScale(pyrScale) -> None\n."},
    {"setWinSize", CV_PY_FN_WITH_KW_(pyopencv_cv_FarnebackOpticalFlow_setWinSize, 0), "setWinSize(winSize) -> None\n."},

    {NULL,          NULL}
};

// Converter (FarnebackOpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::FarnebackOpticalFlow> >
{
    static PyObject* from(const Ptr<cv::FarnebackOpticalFlow>& r)
    {
        return pyopencv_FarnebackOpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::FarnebackOpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::FarnebackOpticalFlow> * dst_;
        if (pyopencv_FarnebackOpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::FarnebackOpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// FastFeatureDetector (Generic)
//================================================================================

// GetSet (FastFeatureDetector)



// Methods (FastFeatureDetector)

static PyObject* pyopencv_cv_FastFeatureDetector_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_threshold = NULL;
    int threshold=10;
    PyObject* pyobj_nonmaxSuppression = NULL;
    bool nonmaxSuppression=true;
    PyObject* pyobj_type = NULL;
    FastFeatureDetector_DetectorType type=FastFeatureDetector::TYPE_9_16;
    Ptr<FastFeatureDetector> retval;

    const char* keywords[] = { "threshold", "nonmaxSuppression", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOO:FastFeatureDetector.create", (char**)keywords, &pyobj_threshold, &pyobj_nonmaxSuppression, &pyobj_type) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) &&
        pyopencv_to_safe(pyobj_nonmaxSuppression, nonmaxSuppression, ArgInfo("nonmaxSuppression", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(retval = cv::FastFeatureDetector::create(threshold, nonmaxSuppression, type));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getNonmaxSuppression(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNonmaxSuppression());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_getType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    FastFeatureDetector::DetectorType retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_setNonmaxSuppression(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    PyObject* pyobj_f = NULL;
    bool f=0;

    const char* keywords[] = { "f", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FastFeatureDetector.setNonmaxSuppression", (char**)keywords, &pyobj_f) &&
        pyopencv_to_safe(pyobj_f, f, ArgInfo("f", 0)) )
    {
        ERRWRAP2(_self_->setNonmaxSuppression(f));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_setThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    PyObject* pyobj_threshold = NULL;
    int threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FastFeatureDetector.setThreshold", (char**)keywords, &pyobj_threshold) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FastFeatureDetector_setType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FastFeatureDetector> * self1 = 0;
    if (!pyopencv_FastFeatureDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FastFeatureDetector' or its derivative)");
    Ptr<cv::FastFeatureDetector> _self_ = *(self1);
    PyObject* pyobj_type = NULL;
    FastFeatureDetector_DetectorType type=static_cast<FastFeatureDetector_DetectorType>(0);

    const char* keywords[] = { "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FastFeatureDetector.setType", (char**)keywords, &pyobj_type) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(_self_->setType(type));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (FastFeatureDetector)

static PyGetSetDef pyopencv_FastFeatureDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_FastFeatureDetector_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_create_static, METH_STATIC), "create([, threshold[, nonmaxSuppression[, type]]]) -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getNonmaxSuppression", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_getNonmaxSuppression, 0), "getNonmaxSuppression() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_getThreshold, 0), "getThreshold() -> retval\n."},
    {"getType", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_getType, 0), "getType() -> retval\n."},
    {"setNonmaxSuppression", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_setNonmaxSuppression, 0), "setNonmaxSuppression(f) -> None\n."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_setThreshold, 0), "setThreshold(threshold) -> None\n."},
    {"setType", CV_PY_FN_WITH_KW_(pyopencv_cv_FastFeatureDetector_setType, 0), "setType(type) -> None\n."},

    {NULL,          NULL}
};

// Converter (FastFeatureDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::FastFeatureDetector> >
{
    static PyObject* from(const Ptr<cv::FastFeatureDetector>& r)
    {
        return pyopencv_FastFeatureDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::FastFeatureDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::FastFeatureDetector> * dst_;
        if (pyopencv_FastFeatureDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::FastFeatureDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// Feature2D (Generic)
//================================================================================

// GetSet (Feature2D)



// Methods (Feature2D)

static PyObject* pyopencv_cv_Feature2D_compute(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;

    const char* keywords[] = { "image", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(image, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    UMat descriptors;

    const char* keywords[] = { "image", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_image, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(image, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    PyObject* pyobj_keypoints = NULL;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    vector_Mat descriptors;

    const char* keywords[] = { "images", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_images, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to_safe(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to_safe(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(images, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_images = NULL;
    vector_UMat images;
    PyObject* pyobj_keypoints = NULL;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    vector_UMat descriptors;

    const char* keywords[] = { "images", "keypoints", "descriptors", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:Feature2D.compute", (char**)keywords, &pyobj_images, &pyobj_keypoints, &pyobj_descriptors) &&
        pyopencv_to_safe(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to_safe(pyobj_keypoints, keypoints, ArgInfo("keypoints", 1)) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) )
    {
        ERRWRAP2(_self_->compute(images, keypoints, descriptors));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("compute");

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_defaultNorm(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->defaultNorm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_descriptorSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_descriptorType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->descriptorType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_detect(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_KeyPoint keypoints;
    PyObject* pyobj_mask = NULL;
    Mat mask;

    const char* keywords[] = { "image", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_image, &pyobj_mask) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->detect(image, keypoints, mask));
        return pyopencv_from(keypoints);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_KeyPoint keypoints;
    PyObject* pyobj_mask = NULL;
    UMat mask;

    const char* keywords[] = { "image", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_image, &pyobj_mask) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->detect(image, keypoints, mask));
        return pyopencv_from(keypoints);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_images = NULL;
    vector_Mat images;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_masks = NULL;
    vector_Mat masks;

    const char* keywords[] = { "images", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_images, &pyobj_masks) &&
        pyopencv_to_safe(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to_safe(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->detect(images, keypoints, masks));
        return pyopencv_from(keypoints);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_images = NULL;
    vector_UMat images;
    vector_vector_KeyPoint keypoints;
    PyObject* pyobj_masks = NULL;
    vector_UMat masks;

    const char* keywords[] = { "images", "masks", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:Feature2D.detect", (char**)keywords, &pyobj_images, &pyobj_masks) &&
        pyopencv_to_safe(pyobj_images, images, ArgInfo("images", 0)) &&
        pyopencv_to_safe(pyobj_masks, masks, ArgInfo("masks", 0)) )
    {
        ERRWRAP2(_self_->detect(images, keypoints, masks));
        return pyopencv_from(keypoints);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("detect");

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_detectAndCompute(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    Mat descriptors;
    PyObject* pyobj_useProvidedKeypoints = NULL;
    bool useProvidedKeypoints=false;

    const char* keywords[] = { "image", "mask", "descriptors", "useProvidedKeypoints", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OO:Feature2D.detectAndCompute", (char**)keywords, &pyobj_image, &pyobj_mask, &pyobj_descriptors, &pyobj_useProvidedKeypoints) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) &&
        pyopencv_to_safe(pyobj_useProvidedKeypoints, useProvidedKeypoints, ArgInfo("useProvidedKeypoints", 0)) )
    {
        ERRWRAP2(_self_->detectAndCompute(image, mask, keypoints, descriptors, useProvidedKeypoints));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    vector_KeyPoint keypoints;
    PyObject* pyobj_descriptors = NULL;
    UMat descriptors;
    PyObject* pyobj_useProvidedKeypoints = NULL;
    bool useProvidedKeypoints=false;

    const char* keywords[] = { "image", "mask", "descriptors", "useProvidedKeypoints", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OO:Feature2D.detectAndCompute", (char**)keywords, &pyobj_image, &pyobj_mask, &pyobj_descriptors, &pyobj_useProvidedKeypoints) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_descriptors, descriptors, ArgInfo("descriptors", 1)) &&
        pyopencv_to_safe(pyobj_useProvidedKeypoints, useProvidedKeypoints, ArgInfo("useProvidedKeypoints", 0)) )
    {
        ERRWRAP2(_self_->detectAndCompute(image, mask, keypoints, descriptors, useProvidedKeypoints));
        return Py_BuildValue("(NN)", pyopencv_from(keypoints), pyopencv_from(descriptors));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("detectAndCompute");

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_empty(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_read(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Feature2D.read", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to_safe(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->read(fileName));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arg1 = NULL;
    cv::FileNode arg1;

    const char* keywords[] = { "arg1", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Feature2D.read", (char**)keywords, &pyobj_arg1) &&
        pyopencv_to_safe(pyobj_arg1, arg1, ArgInfo("arg1", 0)) )
    {
        ERRWRAP2(_self_->read(arg1));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("read");

    return NULL;
}

static PyObject* pyopencv_cv_Feature2D_write(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Feature2D> * self1 = 0;
    if (!pyopencv_Feature2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Feature2D' or its derivative)");
    Ptr<cv::Feature2D> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_fileName = NULL;
    String fileName;

    const char* keywords[] = { "fileName", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Feature2D.write", (char**)keywords, &pyobj_fileName) &&
        pyopencv_to_safe(pyobj_fileName, fileName, ArgInfo("fileName", 0)) )
    {
        ERRWRAP2(_self_->write(fileName));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_fs = NULL;
    Ptr<cv::FileStorage> fs;
    PyObject* pyobj_name = NULL;
    String name;

    const char* keywords[] = { "fs", "name", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:Feature2D.write", (char**)keywords, &pyobj_fs, &pyobj_name) &&
        pyopencv_to_safe(pyobj_fs, fs, ArgInfo("fs", 0)) &&
        pyopencv_to_safe(pyobj_name, name, ArgInfo("name", 0)) )
    {
        ERRWRAP2(_self_->write(*fs, name));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("write");

    return NULL;
}



// Tables (Feature2D)

static PyGetSetDef pyopencv_Feature2D_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_Feature2D_methods[] =
{
    {"compute", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_compute, 0), "compute(image, keypoints[, descriptors]) -> keypoints, descriptors\n.   @brief Computes the descriptors for a set of keypoints detected in an image (first variant) or image set\n.       (second variant).\n.   \n.       @param image Image.\n.       @param keypoints Input collection of keypoints. Keypoints for which a descriptor cannot be\n.       computed are removed. Sometimes new keypoints can be added, for example: SIFT duplicates keypoint\n.       with several dominant orientations (for each orientation).\n.       @param descriptors Computed descriptors. In the second variant of the method descriptors[i] are\n.       descriptors computed for a keypoints[i]. Row j is the keypoints (or keypoints[i]) is the\n.       descriptor for keypoint j-th keypoint.\n\n\n\ncompute(images, keypoints[, descriptors]) -> keypoints, descriptors\n.   @overload\n.   \n.       @param images Image set.\n.       @param keypoints Input collection of keypoints. Keypoints for which a descriptor cannot be\n.       computed are removed. Sometimes new keypoints can be added, for example: SIFT duplicates keypoint\n.       with several dominant orientations (for each orientation).\n.       @param descriptors Computed descriptors. In the second variant of the method descriptors[i] are\n.       descriptors computed for a keypoints[i]. Row j is the keypoints (or keypoints[i]) is the\n.       descriptor for keypoint j-th keypoint."},
    {"defaultNorm", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_defaultNorm, 0), "defaultNorm() -> retval\n."},
    {"descriptorSize", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_descriptorSize, 0), "descriptorSize() -> retval\n."},
    {"descriptorType", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_descriptorType, 0), "descriptorType() -> retval\n."},
    {"detect", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_detect, 0), "detect(image[, mask]) -> keypoints\n.   @brief Detects keypoints in an image (first variant) or image set (second variant).\n.   \n.       @param image Image.\n.       @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set\n.       of keypoints detected in images[i] .\n.       @param mask Mask specifying where to look for keypoints (optional). It must be a 8-bit integer\n.       matrix with non-zero values in the region of interest.\n\n\n\ndetect(images[, masks]) -> keypoints\n.   @overload\n.       @param images Image set.\n.       @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set\n.       of keypoints detected in images[i] .\n.       @param masks Masks for each input image specifying where to look for keypoints (optional).\n.       masks[i] is a mask for images[i]."},
    {"detectAndCompute", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_detectAndCompute, 0), "detectAndCompute(image, mask[, descriptors[, useProvidedKeypoints]]) -> keypoints, descriptors\n.   Detects keypoints and computes the descriptors"},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_empty, 0), "empty() -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"read", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_read, 0), "read(fileName) -> None\n.   \n\n\n\nread(arg1) -> None\n."},
    {"write", CV_PY_FN_WITH_KW_(pyopencv_cv_Feature2D_write, 0), "write(fileName) -> None\n.   \n\n\n\nwrite(fs, name) -> None\n."},

    {NULL,          NULL}
};

// Converter (Feature2D)

template<>
struct PyOpenCV_Converter< Ptr<cv::Feature2D> >
{
    static PyObject* from(const Ptr<cv::Feature2D>& r)
    {
        return pyopencv_Feature2D_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::Feature2D>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::Feature2D> * dst_;
        if (pyopencv_Feature2D_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::Feature2D> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// FileNode (Generic)
//================================================================================

// GetSet (FileNode)



// Methods (FileNode)

static int pyopencv_cv_FileNode_FileNode(pyopencv_FileNode_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::FileNode());
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_FileNode_at(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    PyObject* pyobj_i = NULL;
    int i=0;
    FileNode retval;

    const char* keywords[] = { "i", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:FileNode.at", (char**)keywords, &pyobj_i) &&
        pyopencv_to_safe(pyobj_i, i, ArgInfo("i", 0)) )
    {
        ERRWRAP2(retval = _self_->operator[](i));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_empty(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_getNode(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    char* nodename=(char*)"";
    FileNode retval;

    const char* keywords[] = { "nodename", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "s:FileNode.getNode", (char**)keywords, &nodename) )
    {
        ERRWRAP2(retval = _self_->operator[](nodename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isInt(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isInt());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isMap(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isMap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isNamed(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isNamed());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isNone(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isNone());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isReal(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isReal());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isSeq(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isSeq());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_isString(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isString());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_keys(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    std::vector<String> retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->keys());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_mat(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    Mat retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->mat());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_name(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    std::string retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->name());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_rawSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->rawSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_real(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->real());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_size(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->size());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_string(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    std::string retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->string());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileNode_type(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::FileNode * self1 = 0;
    if (!pyopencv_FileNode_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileNode' or its derivative)");
    cv::FileNode* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->type());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (FileNode)

static PyGetSetDef pyopencv_FileNode_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_FileNode_methods[] =
{
    {"at", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_at, 0), "at(i) -> retval\n.   @overload\n.        @param i Index of an element in the sequence node."},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_empty, 0), "empty() -> retval\n."},
    {"getNode", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_getNode, 0), "getNode(nodename) -> retval\n.   @overload\n.        @param nodename Name of an element in the mapping node."},
    {"isInt", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_isInt, 0), "isInt() -> retval\n."},
    {"isMap", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_isMap, 0), "isMap() -> retval\n."},
    {"isNamed", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_isNamed, 0), "isNamed() -> retval\n."},
    {"isNone", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_isNone, 0), "isNone() -> retval\n."},
    {"isReal", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_isReal, 0), "isReal() -> retval\n."},
    {"isSeq", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_isSeq, 0), "isSeq() -> retval\n."},
    {"isString", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_isString, 0), "isString() -> retval\n."},
    {"keys", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_keys, 0), "keys() -> retval\n.   @brief Returns keys of a mapping node.\n.        @returns Keys of a mapping node."},
    {"mat", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_mat, 0), "mat() -> retval\n."},
    {"name", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_name, 0), "name() -> retval\n."},
    {"rawSize", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_rawSize, 0), "rawSize() -> retval\n."},
    {"real", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_real, 0), "real() -> retval\n.   Internal method used when reading FileStorage.\n.        Sets the type (int, real or string) and value of the previously created node."},
    {"size", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_size, 0), "size() -> retval\n."},
    {"string", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_string, 0), "string() -> retval\n."},
    {"type", CV_PY_FN_WITH_KW_(pyopencv_cv_FileNode_type, 0), "type() -> retval\n.   @brief Returns type of the node.\n.        @returns Type of the node. See FileNode::Type"},

    {NULL,          NULL}
};

// Converter (FileNode)

template<>
struct PyOpenCV_Converter< cv::FileNode >
{
    static PyObject* from(const cv::FileNode& r)
    {
        return pyopencv_FileNode_Instance(r);
    }
    static bool to(PyObject* src, cv::FileNode& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::FileNode * dst_;
        if (pyopencv_FileNode_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::FileNode for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// FileStorage (Generic)
//================================================================================

// GetSet (FileStorage)



// Methods (FileStorage)

static int pyopencv_cv_FileStorage_FileStorage(pyopencv_FileStorage_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(2);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::FileStorage>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::FileStorage()));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_flags = NULL;
    int flags=0;
    PyObject* pyobj_encoding = NULL;
    String encoding;

    const char* keywords[] = { "filename", "flags", "encoding", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:FileStorage", (char**)keywords, &pyobj_filename, &pyobj_flags, &pyobj_encoding) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_flags, flags, ArgInfo("flags", 0)) &&
        pyopencv_to_safe(pyobj_encoding, encoding, ArgInfo("encoding", 0)) )
    {
        new (&(self->v)) Ptr<cv::FileStorage>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::FileStorage(filename, flags, encoding)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("FileStorage");

    return -1;
}

static PyObject* pyopencv_cv_FileStorage_endWriteStruct(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->endWriteStruct());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_getFirstTopLevelNode(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    FileNode retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFirstTopLevelNode());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_getFormat(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFormat());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_getNode(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    char* nodename=(char*)"";
    FileNode retval;

    const char* keywords[] = { "nodename", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "s:FileStorage.getNode", (char**)keywords, &nodename) )
    {
        ERRWRAP2(retval = _self_->operator[](nodename));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_isOpened(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_open(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_flags = NULL;
    int flags=0;
    PyObject* pyobj_encoding = NULL;
    String encoding;
    bool retval;

    const char* keywords[] = { "filename", "flags", "encoding", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:FileStorage.open", (char**)keywords, &pyobj_filename, &pyobj_flags, &pyobj_encoding) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_flags, flags, ArgInfo("flags", 0)) &&
        pyopencv_to_safe(pyobj_encoding, encoding, ArgInfo("encoding", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, flags, encoding));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_release(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_releaseAndGetString(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->releaseAndGetString());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_root(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    PyObject* pyobj_streamidx = NULL;
    int streamidx=0;
    FileNode retval;

    const char* keywords[] = { "streamidx", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:FileStorage.root", (char**)keywords, &pyobj_streamidx) &&
        pyopencv_to_safe(pyobj_streamidx, streamidx, ArgInfo("streamidx", 0)) )
    {
        ERRWRAP2(retval = _self_->root(streamidx));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_startWriteStruct(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_flags = NULL;
    int flags=0;
    PyObject* pyobj_typeName = NULL;
    String typeName;

    const char* keywords[] = { "name", "flags", "typeName", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:FileStorage.startWriteStruct", (char**)keywords, &pyobj_name, &pyobj_flags, &pyobj_typeName) &&
        pyopencv_to_safe(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to_safe(pyobj_flags, flags, ArgInfo("flags", 0)) &&
        pyopencv_to_safe(pyobj_typeName, typeName, ArgInfo("typeName", 0)) )
    {
        ERRWRAP2(_self_->startWriteStruct(name, flags, typeName));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_write(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(5);

    {
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_val = NULL;
    int val=0;

    const char* keywords[] = { "name", "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:FileStorage.write", (char**)keywords, &pyobj_name, &pyobj_val) &&
        pyopencv_to_safe(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->write(name, val));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_val = NULL;
    double val=0;

    const char* keywords[] = { "name", "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:FileStorage.write", (char**)keywords, &pyobj_name, &pyobj_val) &&
        pyopencv_to_safe(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->write(name, val));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_val = NULL;
    String val;

    const char* keywords[] = { "name", "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:FileStorage.write", (char**)keywords, &pyobj_name, &pyobj_val) &&
        pyopencv_to_safe(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->write(name, val));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_val = NULL;
    Mat val;

    const char* keywords[] = { "name", "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:FileStorage.write", (char**)keywords, &pyobj_name, &pyobj_val) &&
        pyopencv_to_safe(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->write(name, val));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_name = NULL;
    String name;
    PyObject* pyobj_val = NULL;
    vector_String val;

    const char* keywords[] = { "name", "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:FileStorage.write", (char**)keywords, &pyobj_name, &pyobj_val) &&
        pyopencv_to_safe(pyobj_name, name, ArgInfo("name", 0)) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->write(name, val));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("write");

    return NULL;
}

static PyObject* pyopencv_cv_FileStorage_writeComment(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::FileStorage> * self1 = 0;
    if (!pyopencv_FileStorage_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'FileStorage' or its derivative)");
    Ptr<cv::FileStorage> _self_ = *(self1);
    PyObject* pyobj_comment = NULL;
    String comment;
    PyObject* pyobj_append = NULL;
    bool append=false;

    const char* keywords[] = { "comment", "append", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:FileStorage.writeComment", (char**)keywords, &pyobj_comment, &pyobj_append) &&
        pyopencv_to_safe(pyobj_comment, comment, ArgInfo("comment", 0)) &&
        pyopencv_to_safe(pyobj_append, append, ArgInfo("append", 0)) )
    {
        ERRWRAP2(_self_->writeComment(comment, append));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (FileStorage)

static PyGetSetDef pyopencv_FileStorage_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_FileStorage_methods[] =
{
    {"endWriteStruct", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_endWriteStruct, 0), "endWriteStruct() -> None\n.   @brief Finishes writing nested structure (should pair startWriteStruct())"},
    {"getFirstTopLevelNode", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_getFirstTopLevelNode, 0), "getFirstTopLevelNode() -> retval\n.   @brief Returns the first element of the top-level mapping.\n.        @returns The first element of the top-level mapping."},
    {"getFormat", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_getFormat, 0), "getFormat() -> retval\n.   @brief Returns the current format.\n.        * @returns The current format, see FileStorage::Mode"},
    {"getNode", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_getNode, 0), "getNode(nodename) -> retval\n.   @overload"},
    {"isOpened", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_isOpened, 0), "isOpened() -> retval\n.   @brief Checks whether the file is opened.\n.   \n.        @returns true if the object is associated with the current file and false otherwise. It is a\n.        good practice to call this method after you tried to open a file."},
    {"open", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_open, 0), "open(filename, flags[, encoding]) -> retval\n.   @brief Opens a file.\n.   \n.        See description of parameters in FileStorage::FileStorage. The method calls FileStorage::release\n.        before opening the file.\n.        @param filename Name of the file to open or the text string to read the data from.\n.        Extension of the file (.xml, .yml/.yaml or .json) determines its format (XML, YAML or JSON\n.        respectively). Also you can append .gz to work with compressed files, for example myHugeMatrix.xml.gz. If both\n.        FileStorage::WRITE and FileStorage::MEMORY flags are specified, source is used just to specify\n.        the output file format (e.g. mydata.xml, .yml etc.). A file name can also contain parameters.\n.        You can use this format, \"*?base64\" (e.g. \"file.json?base64\" (case sensitive)), as an alternative to\n.        FileStorage::BASE64 flag.\n.        @param flags Mode of operation. One of FileStorage::Mode\n.        @param encoding Encoding of the file. Note that UTF-16 XML encoding is not supported currently and\n.        you should use 8-bit encoding instead of it."},
    {"release", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_release, 0), "release() -> None\n.   @brief Closes the file and releases all the memory buffers.\n.   \n.        Call this method after all I/O operations with the storage are finished."},
    {"releaseAndGetString", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_releaseAndGetString, 0), "releaseAndGetString() -> retval\n.   @brief Closes the file and releases all the memory buffers.\n.   \n.        Call this method after all I/O operations with the storage are finished. If the storage was\n.        opened for writing data and FileStorage::WRITE was specified"},
    {"root", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_root, 0), "root([, streamidx]) -> retval\n.   @brief Returns the top-level mapping\n.        @param streamidx Zero-based index of the stream. In most cases there is only one stream in the file.\n.        However, YAML supports multiple streams and so there can be several.\n.        @returns The top-level mapping."},
    {"startWriteStruct", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_startWriteStruct, 0), "startWriteStruct(name, flags[, typeName]) -> None\n.   @brief Starts to write a nested structure (sequence or a mapping).\n.       @param name name of the structure. When writing to sequences (a.k.a. \"arrays\"), pass an empty string.\n.       @param flags type of the structure (FileNode::MAP or FileNode::SEQ (both with optional FileNode::FLOW)).\n.       @param typeName optional name of the type you store. The effect of setting this depends on the storage format.\n.       I.e. if the format has a specification for storing type information, this parameter is used."},
    {"write", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_write, 0), "write(name, val) -> None\n.   * @brief Simplified writing API to use with bindings.\n.        * @param name Name of the written object. When writing to sequences (a.k.a. \"arrays\"), pass an empty string.\n.        * @param val Value of the written object."},
    {"writeComment", CV_PY_FN_WITH_KW_(pyopencv_cv_FileStorage_writeComment, 0), "writeComment(comment[, append]) -> None\n.   @brief Writes a comment.\n.   \n.        The function writes a comment into file storage. The comments are skipped when the storage is read.\n.        @param comment The written comment, single-line or multi-line\n.        @param append If true, the function tries to put the comment at the end of current line.\n.        Else if the comment is multi-line, or if it does not fit at the end of the current\n.        line, the comment starts a new line."},

    {NULL,          NULL}
};

// Converter (FileStorage)

template<>
struct PyOpenCV_Converter< Ptr<cv::FileStorage> >
{
    static PyObject* from(const Ptr<cv::FileStorage>& r)
    {
        return pyopencv_FileStorage_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::FileStorage>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::FileStorage> * dst_;
        if (pyopencv_FileStorage_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::FileStorage> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// FlannBasedMatcher (Generic)
//================================================================================

// GetSet (FlannBasedMatcher)



// Methods (FlannBasedMatcher)

static int pyopencv_cv_FlannBasedMatcher_FlannBasedMatcher(pyopencv_FlannBasedMatcher_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_indexParams = NULL;
    Ptr<flann::IndexParams> indexParams=makePtr<flann::KDTreeIndexParams>();
    PyObject* pyobj_searchParams = NULL;
    Ptr<flann::SearchParams> searchParams=makePtr<flann::SearchParams>();

    const char* keywords[] = { "indexParams", "searchParams", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OO:FlannBasedMatcher", (char**)keywords, &pyobj_indexParams, &pyobj_searchParams) &&
        pyopencv_to_safe(pyobj_indexParams, indexParams, ArgInfo("indexParams", 0)) &&
        pyopencv_to_safe(pyobj_searchParams, searchParams, ArgInfo("searchParams", 0)) )
    {
        new (&(self->v)) Ptr<cv::FlannBasedMatcher>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::FlannBasedMatcher(indexParams, searchParams)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_FlannBasedMatcher_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    Ptr<FlannBasedMatcher> retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::FlannBasedMatcher::create());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (FlannBasedMatcher)

static PyGetSetDef pyopencv_FlannBasedMatcher_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_FlannBasedMatcher_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_FlannBasedMatcher_create_static, METH_STATIC), "create() -> retval\n."},

    {NULL,          NULL}
};

// Converter (FlannBasedMatcher)

template<>
struct PyOpenCV_Converter< Ptr<cv::FlannBasedMatcher> >
{
    static PyObject* from(const Ptr<cv::FlannBasedMatcher>& r)
    {
        return pyopencv_FlannBasedMatcher_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::FlannBasedMatcher>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::FlannBasedMatcher> * dst_;
        if (pyopencv_FlannBasedMatcher_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::FlannBasedMatcher> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// GFTTDetector (Generic)
//================================================================================

// GetSet (GFTTDetector)



// Methods (GFTTDetector)

static PyObject* pyopencv_cv_GFTTDetector_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_maxCorners = NULL;
    int maxCorners=1000;
    PyObject* pyobj_qualityLevel = NULL;
    double qualityLevel=0.01;
    PyObject* pyobj_minDistance = NULL;
    double minDistance=1;
    PyObject* pyobj_blockSize = NULL;
    int blockSize=3;
    PyObject* pyobj_useHarrisDetector = NULL;
    bool useHarrisDetector=false;
    PyObject* pyobj_k = NULL;
    double k=0.04;
    Ptr<GFTTDetector> retval;

    const char* keywords[] = { "maxCorners", "qualityLevel", "minDistance", "blockSize", "useHarrisDetector", "k", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOOOOO:GFTTDetector.create", (char**)keywords, &pyobj_maxCorners, &pyobj_qualityLevel, &pyobj_minDistance, &pyobj_blockSize, &pyobj_useHarrisDetector, &pyobj_k) &&
        pyopencv_to_safe(pyobj_maxCorners, maxCorners, ArgInfo("maxCorners", 0)) &&
        pyopencv_to_safe(pyobj_qualityLevel, qualityLevel, ArgInfo("qualityLevel", 0)) &&
        pyopencv_to_safe(pyobj_minDistance, minDistance, ArgInfo("minDistance", 0)) &&
        pyopencv_to_safe(pyobj_blockSize, blockSize, ArgInfo("blockSize", 0)) &&
        pyopencv_to_safe(pyobj_useHarrisDetector, useHarrisDetector, ArgInfo("useHarrisDetector", 0)) &&
        pyopencv_to_safe(pyobj_k, k, ArgInfo("k", 0)) )
    {
        ERRWRAP2(retval = cv::GFTTDetector::create(maxCorners, qualityLevel, minDistance, blockSize, useHarrisDetector, k));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_maxCorners = NULL;
    int maxCorners=0;
    PyObject* pyobj_qualityLevel = NULL;
    double qualityLevel=0;
    PyObject* pyobj_minDistance = NULL;
    double minDistance=0;
    PyObject* pyobj_blockSize = NULL;
    int blockSize=0;
    PyObject* pyobj_gradiantSize = NULL;
    int gradiantSize=0;
    PyObject* pyobj_useHarrisDetector = NULL;
    bool useHarrisDetector=false;
    PyObject* pyobj_k = NULL;
    double k=0.04;
    Ptr<GFTTDetector> retval;

    const char* keywords[] = { "maxCorners", "qualityLevel", "minDistance", "blockSize", "gradiantSize", "useHarrisDetector", "k", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOOO|OO:GFTTDetector.create", (char**)keywords, &pyobj_maxCorners, &pyobj_qualityLevel, &pyobj_minDistance, &pyobj_blockSize, &pyobj_gradiantSize, &pyobj_useHarrisDetector, &pyobj_k) &&
        pyopencv_to_safe(pyobj_maxCorners, maxCorners, ArgInfo("maxCorners", 0)) &&
        pyopencv_to_safe(pyobj_qualityLevel, qualityLevel, ArgInfo("qualityLevel", 0)) &&
        pyopencv_to_safe(pyobj_minDistance, minDistance, ArgInfo("minDistance", 0)) &&
        pyopencv_to_safe(pyobj_blockSize, blockSize, ArgInfo("blockSize", 0)) &&
        pyopencv_to_safe(pyobj_gradiantSize, gradiantSize, ArgInfo("gradiantSize", 0)) &&
        pyopencv_to_safe(pyobj_useHarrisDetector, useHarrisDetector, ArgInfo("useHarrisDetector", 0)) &&
        pyopencv_to_safe(pyobj_k, k, ArgInfo("k", 0)) )
    {
        ERRWRAP2(retval = cv::GFTTDetector::create(maxCorners, qualityLevel, minDistance, blockSize, gradiantSize, useHarrisDetector, k));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("create");

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getBlockSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBlockSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getGradientSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getGradientSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getHarrisDetector(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getHarrisDetector());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getK(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getK());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getMaxFeatures(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxFeatures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getMinDistance(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinDistance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_getQualityLevel(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getQualityLevel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setBlockSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    PyObject* pyobj_blockSize = NULL;
    int blockSize=0;

    const char* keywords[] = { "blockSize", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GFTTDetector.setBlockSize", (char**)keywords, &pyobj_blockSize) &&
        pyopencv_to_safe(pyobj_blockSize, blockSize, ArgInfo("blockSize", 0)) )
    {
        ERRWRAP2(_self_->setBlockSize(blockSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setGradientSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    PyObject* pyobj_gradientSize_ = NULL;
    int gradientSize_=0;

    const char* keywords[] = { "gradientSize_", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GFTTDetector.setGradientSize", (char**)keywords, &pyobj_gradientSize_) &&
        pyopencv_to_safe(pyobj_gradientSize_, gradientSize_, ArgInfo("gradientSize_", 0)) )
    {
        ERRWRAP2(_self_->setGradientSize(gradientSize_));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setHarrisDetector(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    bool val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GFTTDetector.setHarrisDetector", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setHarrisDetector(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setK(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    PyObject* pyobj_k = NULL;
    double k=0;

    const char* keywords[] = { "k", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GFTTDetector.setK", (char**)keywords, &pyobj_k) &&
        pyopencv_to_safe(pyobj_k, k, ArgInfo("k", 0)) )
    {
        ERRWRAP2(_self_->setK(k));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setMaxFeatures(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    PyObject* pyobj_maxFeatures = NULL;
    int maxFeatures=0;

    const char* keywords[] = { "maxFeatures", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GFTTDetector.setMaxFeatures", (char**)keywords, &pyobj_maxFeatures) &&
        pyopencv_to_safe(pyobj_maxFeatures, maxFeatures, ArgInfo("maxFeatures", 0)) )
    {
        ERRWRAP2(_self_->setMaxFeatures(maxFeatures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setMinDistance(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    PyObject* pyobj_minDistance = NULL;
    double minDistance=0;

    const char* keywords[] = { "minDistance", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GFTTDetector.setMinDistance", (char**)keywords, &pyobj_minDistance) &&
        pyopencv_to_safe(pyobj_minDistance, minDistance, ArgInfo("minDistance", 0)) )
    {
        ERRWRAP2(_self_->setMinDistance(minDistance));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GFTTDetector_setQualityLevel(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GFTTDetector> * self1 = 0;
    if (!pyopencv_GFTTDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GFTTDetector' or its derivative)");
    Ptr<cv::GFTTDetector> _self_ = *(self1);
    PyObject* pyobj_qlevel = NULL;
    double qlevel=0;

    const char* keywords[] = { "qlevel", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GFTTDetector.setQualityLevel", (char**)keywords, &pyobj_qlevel) &&
        pyopencv_to_safe(pyobj_qlevel, qlevel, ArgInfo("qlevel", 0)) )
    {
        ERRWRAP2(_self_->setQualityLevel(qlevel));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (GFTTDetector)

static PyGetSetDef pyopencv_GFTTDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_GFTTDetector_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_create_static, METH_STATIC), "create([, maxCorners[, qualityLevel[, minDistance[, blockSize[, useHarrisDetector[, k]]]]]]) -> retval\n.   \n\n\n\ncreate(maxCorners, qualityLevel, minDistance, blockSize, gradiantSize[, useHarrisDetector[, k]]) -> retval\n."},
    {"getBlockSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getBlockSize, 0), "getBlockSize() -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getGradientSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getGradientSize, 0), "getGradientSize() -> retval\n."},
    {"getHarrisDetector", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getHarrisDetector, 0), "getHarrisDetector() -> retval\n."},
    {"getK", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getK, 0), "getK() -> retval\n."},
    {"getMaxFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getMaxFeatures, 0), "getMaxFeatures() -> retval\n."},
    {"getMinDistance", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getMinDistance, 0), "getMinDistance() -> retval\n."},
    {"getQualityLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_getQualityLevel, 0), "getQualityLevel() -> retval\n."},
    {"setBlockSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setBlockSize, 0), "setBlockSize(blockSize) -> None\n."},
    {"setGradientSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setGradientSize, 0), "setGradientSize(gradientSize_) -> None\n."},
    {"setHarrisDetector", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setHarrisDetector, 0), "setHarrisDetector(val) -> None\n."},
    {"setK", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setK, 0), "setK(k) -> None\n."},
    {"setMaxFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setMaxFeatures, 0), "setMaxFeatures(maxFeatures) -> None\n."},
    {"setMinDistance", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setMinDistance, 0), "setMinDistance(minDistance) -> None\n."},
    {"setQualityLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_GFTTDetector_setQualityLevel, 0), "setQualityLevel(qlevel) -> None\n."},

    {NULL,          NULL}
};

// Converter (GFTTDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::GFTTDetector> >
{
    static PyObject* from(const Ptr<cv::GFTTDetector>& r)
    {
        return pyopencv_GFTTDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::GFTTDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::GFTTDetector> * dst_;
        if (pyopencv_GFTTDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::GFTTDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// GeneralizedHough (Generic)
//================================================================================

// GetSet (GeneralizedHough)



// Methods (GeneralizedHough)

static PyObject* pyopencv_cv_GeneralizedHough_detect(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_positions = NULL;
    Mat positions;
    PyObject* pyobj_votes = NULL;
    Mat votes;

    const char* keywords[] = { "image", "positions", "votes", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:GeneralizedHough.detect", (char**)keywords, &pyobj_image, &pyobj_positions, &pyobj_votes) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_positions, positions, ArgInfo("positions", 1)) &&
        pyopencv_to_safe(pyobj_votes, votes, ArgInfo("votes", 1)) )
    {
        ERRWRAP2(_self_->detect(image, positions, votes));
        return Py_BuildValue("(NN)", pyopencv_from(positions), pyopencv_from(votes));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_positions = NULL;
    UMat positions;
    PyObject* pyobj_votes = NULL;
    UMat votes;

    const char* keywords[] = { "image", "positions", "votes", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:GeneralizedHough.detect", (char**)keywords, &pyobj_image, &pyobj_positions, &pyobj_votes) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_positions, positions, ArgInfo("positions", 1)) &&
        pyopencv_to_safe(pyobj_votes, votes, ArgInfo("votes", 1)) )
    {
        ERRWRAP2(_self_->detect(image, positions, votes));
        return Py_BuildValue("(NN)", pyopencv_from(positions), pyopencv_from(votes));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_edges = NULL;
    Mat edges;
    PyObject* pyobj_dx = NULL;
    Mat dx;
    PyObject* pyobj_dy = NULL;
    Mat dy;
    PyObject* pyobj_positions = NULL;
    Mat positions;
    PyObject* pyobj_votes = NULL;
    Mat votes;

    const char* keywords[] = { "edges", "dx", "dy", "positions", "votes", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|OO:GeneralizedHough.detect", (char**)keywords, &pyobj_edges, &pyobj_dx, &pyobj_dy, &pyobj_positions, &pyobj_votes) &&
        pyopencv_to_safe(pyobj_edges, edges, ArgInfo("edges", 0)) &&
        pyopencv_to_safe(pyobj_dx, dx, ArgInfo("dx", 0)) &&
        pyopencv_to_safe(pyobj_dy, dy, ArgInfo("dy", 0)) &&
        pyopencv_to_safe(pyobj_positions, positions, ArgInfo("positions", 1)) &&
        pyopencv_to_safe(pyobj_votes, votes, ArgInfo("votes", 1)) )
    {
        ERRWRAP2(_self_->detect(edges, dx, dy, positions, votes));
        return Py_BuildValue("(NN)", pyopencv_from(positions), pyopencv_from(votes));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_edges = NULL;
    UMat edges;
    PyObject* pyobj_dx = NULL;
    UMat dx;
    PyObject* pyobj_dy = NULL;
    UMat dy;
    PyObject* pyobj_positions = NULL;
    UMat positions;
    PyObject* pyobj_votes = NULL;
    UMat votes;

    const char* keywords[] = { "edges", "dx", "dy", "positions", "votes", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|OO:GeneralizedHough.detect", (char**)keywords, &pyobj_edges, &pyobj_dx, &pyobj_dy, &pyobj_positions, &pyobj_votes) &&
        pyopencv_to_safe(pyobj_edges, edges, ArgInfo("edges", 0)) &&
        pyopencv_to_safe(pyobj_dx, dx, ArgInfo("dx", 0)) &&
        pyopencv_to_safe(pyobj_dy, dy, ArgInfo("dy", 0)) &&
        pyopencv_to_safe(pyobj_positions, positions, ArgInfo("positions", 1)) &&
        pyopencv_to_safe(pyobj_votes, votes, ArgInfo("votes", 1)) )
    {
        ERRWRAP2(_self_->detect(edges, dx, dy, positions, votes));
        return Py_BuildValue("(NN)", pyopencv_from(positions), pyopencv_from(votes));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("detect");

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getCannyHighThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCannyHighThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getCannyLowThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCannyLowThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getDp(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDp());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getMaxBufferSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxBufferSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_getMinDist(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinDist());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setCannyHighThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    PyObject* pyobj_cannyHighThresh = NULL;
    int cannyHighThresh=0;

    const char* keywords[] = { "cannyHighThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHough.setCannyHighThresh", (char**)keywords, &pyobj_cannyHighThresh) &&
        pyopencv_to_safe(pyobj_cannyHighThresh, cannyHighThresh, ArgInfo("cannyHighThresh", 0)) )
    {
        ERRWRAP2(_self_->setCannyHighThresh(cannyHighThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setCannyLowThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    PyObject* pyobj_cannyLowThresh = NULL;
    int cannyLowThresh=0;

    const char* keywords[] = { "cannyLowThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHough.setCannyLowThresh", (char**)keywords, &pyobj_cannyLowThresh) &&
        pyopencv_to_safe(pyobj_cannyLowThresh, cannyLowThresh, ArgInfo("cannyLowThresh", 0)) )
    {
        ERRWRAP2(_self_->setCannyLowThresh(cannyLowThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setDp(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    PyObject* pyobj_dp = NULL;
    double dp=0;

    const char* keywords[] = { "dp", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHough.setDp", (char**)keywords, &pyobj_dp) &&
        pyopencv_to_safe(pyobj_dp, dp, ArgInfo("dp", 0)) )
    {
        ERRWRAP2(_self_->setDp(dp));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setMaxBufferSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    PyObject* pyobj_maxBufferSize = NULL;
    int maxBufferSize=0;

    const char* keywords[] = { "maxBufferSize", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHough.setMaxBufferSize", (char**)keywords, &pyobj_maxBufferSize) &&
        pyopencv_to_safe(pyobj_maxBufferSize, maxBufferSize, ArgInfo("maxBufferSize", 0)) )
    {
        ERRWRAP2(_self_->setMaxBufferSize(maxBufferSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setMinDist(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    PyObject* pyobj_minDist = NULL;
    double minDist=0;

    const char* keywords[] = { "minDist", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHough.setMinDist", (char**)keywords, &pyobj_minDist) &&
        pyopencv_to_safe(pyobj_minDist, minDist, ArgInfo("minDist", 0)) )
    {
        ERRWRAP2(_self_->setMinDist(minDist));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHough_setTemplate(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHough> * self1 = 0;
    if (!pyopencv_GeneralizedHough_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHough' or its derivative)");
    Ptr<cv::GeneralizedHough> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_templ = NULL;
    Mat templ;
    PyObject* pyobj_templCenter = NULL;
    Point templCenter=Point(-1, -1);

    const char* keywords[] = { "templ", "templCenter", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:GeneralizedHough.setTemplate", (char**)keywords, &pyobj_templ, &pyobj_templCenter) &&
        pyopencv_to_safe(pyobj_templ, templ, ArgInfo("templ", 0)) &&
        pyopencv_to_safe(pyobj_templCenter, templCenter, ArgInfo("templCenter", 0)) )
    {
        ERRWRAP2(_self_->setTemplate(templ, templCenter));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_templ = NULL;
    UMat templ;
    PyObject* pyobj_templCenter = NULL;
    Point templCenter=Point(-1, -1);

    const char* keywords[] = { "templ", "templCenter", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:GeneralizedHough.setTemplate", (char**)keywords, &pyobj_templ, &pyobj_templCenter) &&
        pyopencv_to_safe(pyobj_templ, templ, ArgInfo("templ", 0)) &&
        pyopencv_to_safe(pyobj_templCenter, templCenter, ArgInfo("templCenter", 0)) )
    {
        ERRWRAP2(_self_->setTemplate(templ, templCenter));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_edges = NULL;
    Mat edges;
    PyObject* pyobj_dx = NULL;
    Mat dx;
    PyObject* pyobj_dy = NULL;
    Mat dy;
    PyObject* pyobj_templCenter = NULL;
    Point templCenter=Point(-1, -1);

    const char* keywords[] = { "edges", "dx", "dy", "templCenter", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:GeneralizedHough.setTemplate", (char**)keywords, &pyobj_edges, &pyobj_dx, &pyobj_dy, &pyobj_templCenter) &&
        pyopencv_to_safe(pyobj_edges, edges, ArgInfo("edges", 0)) &&
        pyopencv_to_safe(pyobj_dx, dx, ArgInfo("dx", 0)) &&
        pyopencv_to_safe(pyobj_dy, dy, ArgInfo("dy", 0)) &&
        pyopencv_to_safe(pyobj_templCenter, templCenter, ArgInfo("templCenter", 0)) )
    {
        ERRWRAP2(_self_->setTemplate(edges, dx, dy, templCenter));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_edges = NULL;
    UMat edges;
    PyObject* pyobj_dx = NULL;
    UMat dx;
    PyObject* pyobj_dy = NULL;
    UMat dy;
    PyObject* pyobj_templCenter = NULL;
    Point templCenter=Point(-1, -1);

    const char* keywords[] = { "edges", "dx", "dy", "templCenter", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:GeneralizedHough.setTemplate", (char**)keywords, &pyobj_edges, &pyobj_dx, &pyobj_dy, &pyobj_templCenter) &&
        pyopencv_to_safe(pyobj_edges, edges, ArgInfo("edges", 0)) &&
        pyopencv_to_safe(pyobj_dx, dx, ArgInfo("dx", 0)) &&
        pyopencv_to_safe(pyobj_dy, dy, ArgInfo("dy", 0)) &&
        pyopencv_to_safe(pyobj_templCenter, templCenter, ArgInfo("templCenter", 0)) )
    {
        ERRWRAP2(_self_->setTemplate(edges, dx, dy, templCenter));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("setTemplate");

    return NULL;
}



// Tables (GeneralizedHough)

static PyGetSetDef pyopencv_GeneralizedHough_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_GeneralizedHough_methods[] =
{
    {"detect", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_detect, 0), "detect(image[, positions[, votes]]) -> positions, votes\n.   \n\n\n\ndetect(edges, dx, dy[, positions[, votes]]) -> positions, votes\n."},
    {"getCannyHighThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getCannyHighThresh, 0), "getCannyHighThresh() -> retval\n."},
    {"getCannyLowThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getCannyLowThresh, 0), "getCannyLowThresh() -> retval\n."},
    {"getDp", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getDp, 0), "getDp() -> retval\n."},
    {"getMaxBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getMaxBufferSize, 0), "getMaxBufferSize() -> retval\n."},
    {"getMinDist", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_getMinDist, 0), "getMinDist() -> retval\n."},
    {"setCannyHighThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setCannyHighThresh, 0), "setCannyHighThresh(cannyHighThresh) -> None\n."},
    {"setCannyLowThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setCannyLowThresh, 0), "setCannyLowThresh(cannyLowThresh) -> None\n."},
    {"setDp", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setDp, 0), "setDp(dp) -> None\n."},
    {"setMaxBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setMaxBufferSize, 0), "setMaxBufferSize(maxBufferSize) -> None\n."},
    {"setMinDist", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setMinDist, 0), "setMinDist(minDist) -> None\n."},
    {"setTemplate", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHough_setTemplate, 0), "setTemplate(templ[, templCenter]) -> None\n.   \n\n\n\nsetTemplate(edges, dx, dy[, templCenter]) -> None\n."},

    {NULL,          NULL}
};

// Converter (GeneralizedHough)

template<>
struct PyOpenCV_Converter< Ptr<cv::GeneralizedHough> >
{
    static PyObject* from(const Ptr<cv::GeneralizedHough>& r)
    {
        return pyopencv_GeneralizedHough_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::GeneralizedHough>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::GeneralizedHough> * dst_;
        if (pyopencv_GeneralizedHough_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::GeneralizedHough> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// GeneralizedHoughBallard (Generic)
//================================================================================

// GetSet (GeneralizedHoughBallard)



// Methods (GeneralizedHoughBallard)

static PyObject* pyopencv_cv_GeneralizedHoughBallard_getLevels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughBallard> * self1 = 0;
    if (!pyopencv_GeneralizedHoughBallard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughBallard' or its derivative)");
    Ptr<cv::GeneralizedHoughBallard> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughBallard_getVotesThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughBallard> * self1 = 0;
    if (!pyopencv_GeneralizedHoughBallard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughBallard' or its derivative)");
    Ptr<cv::GeneralizedHoughBallard> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getVotesThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughBallard_setLevels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughBallard> * self1 = 0;
    if (!pyopencv_GeneralizedHoughBallard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughBallard' or its derivative)");
    Ptr<cv::GeneralizedHoughBallard> _self_ = *(self1);
    PyObject* pyobj_levels = NULL;
    int levels=0;

    const char* keywords[] = { "levels", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughBallard.setLevels", (char**)keywords, &pyobj_levels) &&
        pyopencv_to_safe(pyobj_levels, levels, ArgInfo("levels", 0)) )
    {
        ERRWRAP2(_self_->setLevels(levels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughBallard_setVotesThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughBallard> * self1 = 0;
    if (!pyopencv_GeneralizedHoughBallard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughBallard' or its derivative)");
    Ptr<cv::GeneralizedHoughBallard> _self_ = *(self1);
    PyObject* pyobj_votesThreshold = NULL;
    int votesThreshold=0;

    const char* keywords[] = { "votesThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughBallard.setVotesThreshold", (char**)keywords, &pyobj_votesThreshold) &&
        pyopencv_to_safe(pyobj_votesThreshold, votesThreshold, ArgInfo("votesThreshold", 0)) )
    {
        ERRWRAP2(_self_->setVotesThreshold(votesThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (GeneralizedHoughBallard)

static PyGetSetDef pyopencv_GeneralizedHoughBallard_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_GeneralizedHoughBallard_methods[] =
{
    {"getLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughBallard_getLevels, 0), "getLevels() -> retval\n."},
    {"getVotesThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughBallard_getVotesThreshold, 0), "getVotesThreshold() -> retval\n."},
    {"setLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughBallard_setLevels, 0), "setLevels(levels) -> None\n."},
    {"setVotesThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughBallard_setVotesThreshold, 0), "setVotesThreshold(votesThreshold) -> None\n."},

    {NULL,          NULL}
};

// Converter (GeneralizedHoughBallard)

template<>
struct PyOpenCV_Converter< Ptr<cv::GeneralizedHoughBallard> >
{
    static PyObject* from(const Ptr<cv::GeneralizedHoughBallard>& r)
    {
        return pyopencv_GeneralizedHoughBallard_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::GeneralizedHoughBallard>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::GeneralizedHoughBallard> * dst_;
        if (pyopencv_GeneralizedHoughBallard_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::GeneralizedHoughBallard> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// GeneralizedHoughGuil (Generic)
//================================================================================

// GetSet (GeneralizedHoughGuil)



// Methods (GeneralizedHoughGuil)

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getAngleEpsilon(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAngleEpsilon());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getAngleStep(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAngleStep());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getAngleThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAngleThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getLevels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getMaxAngle(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxAngle());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getMaxScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getMinAngle(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinAngle());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getMinScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getPosThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPosThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getScaleStep(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScaleStep());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getScaleThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScaleThresh());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_getXi(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getXi());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setAngleEpsilon(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_angleEpsilon = NULL;
    double angleEpsilon=0;

    const char* keywords[] = { "angleEpsilon", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setAngleEpsilon", (char**)keywords, &pyobj_angleEpsilon) &&
        pyopencv_to_safe(pyobj_angleEpsilon, angleEpsilon, ArgInfo("angleEpsilon", 0)) )
    {
        ERRWRAP2(_self_->setAngleEpsilon(angleEpsilon));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setAngleStep(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_angleStep = NULL;
    double angleStep=0;

    const char* keywords[] = { "angleStep", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setAngleStep", (char**)keywords, &pyobj_angleStep) &&
        pyopencv_to_safe(pyobj_angleStep, angleStep, ArgInfo("angleStep", 0)) )
    {
        ERRWRAP2(_self_->setAngleStep(angleStep));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setAngleThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_angleThresh = NULL;
    int angleThresh=0;

    const char* keywords[] = { "angleThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setAngleThresh", (char**)keywords, &pyobj_angleThresh) &&
        pyopencv_to_safe(pyobj_angleThresh, angleThresh, ArgInfo("angleThresh", 0)) )
    {
        ERRWRAP2(_self_->setAngleThresh(angleThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setLevels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_levels = NULL;
    int levels=0;

    const char* keywords[] = { "levels", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setLevels", (char**)keywords, &pyobj_levels) &&
        pyopencv_to_safe(pyobj_levels, levels, ArgInfo("levels", 0)) )
    {
        ERRWRAP2(_self_->setLevels(levels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setMaxAngle(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_maxAngle = NULL;
    double maxAngle=0;

    const char* keywords[] = { "maxAngle", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setMaxAngle", (char**)keywords, &pyobj_maxAngle) &&
        pyopencv_to_safe(pyobj_maxAngle, maxAngle, ArgInfo("maxAngle", 0)) )
    {
        ERRWRAP2(_self_->setMaxAngle(maxAngle));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setMaxScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_maxScale = NULL;
    double maxScale=0;

    const char* keywords[] = { "maxScale", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setMaxScale", (char**)keywords, &pyobj_maxScale) &&
        pyopencv_to_safe(pyobj_maxScale, maxScale, ArgInfo("maxScale", 0)) )
    {
        ERRWRAP2(_self_->setMaxScale(maxScale));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setMinAngle(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_minAngle = NULL;
    double minAngle=0;

    const char* keywords[] = { "minAngle", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setMinAngle", (char**)keywords, &pyobj_minAngle) &&
        pyopencv_to_safe(pyobj_minAngle, minAngle, ArgInfo("minAngle", 0)) )
    {
        ERRWRAP2(_self_->setMinAngle(minAngle));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setMinScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_minScale = NULL;
    double minScale=0;

    const char* keywords[] = { "minScale", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setMinScale", (char**)keywords, &pyobj_minScale) &&
        pyopencv_to_safe(pyobj_minScale, minScale, ArgInfo("minScale", 0)) )
    {
        ERRWRAP2(_self_->setMinScale(minScale));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setPosThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_posThresh = NULL;
    int posThresh=0;

    const char* keywords[] = { "posThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setPosThresh", (char**)keywords, &pyobj_posThresh) &&
        pyopencv_to_safe(pyobj_posThresh, posThresh, ArgInfo("posThresh", 0)) )
    {
        ERRWRAP2(_self_->setPosThresh(posThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setScaleStep(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_scaleStep = NULL;
    double scaleStep=0;

    const char* keywords[] = { "scaleStep", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setScaleStep", (char**)keywords, &pyobj_scaleStep) &&
        pyopencv_to_safe(pyobj_scaleStep, scaleStep, ArgInfo("scaleStep", 0)) )
    {
        ERRWRAP2(_self_->setScaleStep(scaleStep));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setScaleThresh(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_scaleThresh = NULL;
    int scaleThresh=0;

    const char* keywords[] = { "scaleThresh", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setScaleThresh", (char**)keywords, &pyobj_scaleThresh) &&
        pyopencv_to_safe(pyobj_scaleThresh, scaleThresh, ArgInfo("scaleThresh", 0)) )
    {
        ERRWRAP2(_self_->setScaleThresh(scaleThresh));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_GeneralizedHoughGuil_setXi(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::GeneralizedHoughGuil> * self1 = 0;
    if (!pyopencv_GeneralizedHoughGuil_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'GeneralizedHoughGuil' or its derivative)");
    Ptr<cv::GeneralizedHoughGuil> _self_ = *(self1);
    PyObject* pyobj_xi = NULL;
    double xi=0;

    const char* keywords[] = { "xi", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GeneralizedHoughGuil.setXi", (char**)keywords, &pyobj_xi) &&
        pyopencv_to_safe(pyobj_xi, xi, ArgInfo("xi", 0)) )
    {
        ERRWRAP2(_self_->setXi(xi));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (GeneralizedHoughGuil)

static PyGetSetDef pyopencv_GeneralizedHoughGuil_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_GeneralizedHoughGuil_methods[] =
{
    {"getAngleEpsilon", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getAngleEpsilon, 0), "getAngleEpsilon() -> retval\n."},
    {"getAngleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getAngleStep, 0), "getAngleStep() -> retval\n."},
    {"getAngleThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getAngleThresh, 0), "getAngleThresh() -> retval\n."},
    {"getLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getLevels, 0), "getLevels() -> retval\n."},
    {"getMaxAngle", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getMaxAngle, 0), "getMaxAngle() -> retval\n."},
    {"getMaxScale", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getMaxScale, 0), "getMaxScale() -> retval\n."},
    {"getMinAngle", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getMinAngle, 0), "getMinAngle() -> retval\n."},
    {"getMinScale", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getMinScale, 0), "getMinScale() -> retval\n."},
    {"getPosThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getPosThresh, 0), "getPosThresh() -> retval\n."},
    {"getScaleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getScaleStep, 0), "getScaleStep() -> retval\n."},
    {"getScaleThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getScaleThresh, 0), "getScaleThresh() -> retval\n."},
    {"getXi", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_getXi, 0), "getXi() -> retval\n."},
    {"setAngleEpsilon", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setAngleEpsilon, 0), "setAngleEpsilon(angleEpsilon) -> None\n."},
    {"setAngleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setAngleStep, 0), "setAngleStep(angleStep) -> None\n."},
    {"setAngleThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setAngleThresh, 0), "setAngleThresh(angleThresh) -> None\n."},
    {"setLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setLevels, 0), "setLevels(levels) -> None\n."},
    {"setMaxAngle", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setMaxAngle, 0), "setMaxAngle(maxAngle) -> None\n."},
    {"setMaxScale", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setMaxScale, 0), "setMaxScale(maxScale) -> None\n."},
    {"setMinAngle", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setMinAngle, 0), "setMinAngle(minAngle) -> None\n."},
    {"setMinScale", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setMinScale, 0), "setMinScale(minScale) -> None\n."},
    {"setPosThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setPosThresh, 0), "setPosThresh(posThresh) -> None\n."},
    {"setScaleStep", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setScaleStep, 0), "setScaleStep(scaleStep) -> None\n."},
    {"setScaleThresh", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setScaleThresh, 0), "setScaleThresh(scaleThresh) -> None\n."},
    {"setXi", CV_PY_FN_WITH_KW_(pyopencv_cv_GeneralizedHoughGuil_setXi, 0), "setXi(xi) -> None\n."},

    {NULL,          NULL}
};

// Converter (GeneralizedHoughGuil)

template<>
struct PyOpenCV_Converter< Ptr<cv::GeneralizedHoughGuil> >
{
    static PyObject* from(const Ptr<cv::GeneralizedHoughGuil>& r)
    {
        return pyopencv_GeneralizedHoughGuil_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::GeneralizedHoughGuil>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::GeneralizedHoughGuil> * dst_;
        if (pyopencv_GeneralizedHoughGuil_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::GeneralizedHoughGuil> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// KAZE (Generic)
//================================================================================

// GetSet (KAZE)



// Methods (KAZE)

static PyObject* pyopencv_cv_KAZE_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_extended = NULL;
    bool extended=false;
    PyObject* pyobj_upright = NULL;
    bool upright=false;
    PyObject* pyobj_threshold = NULL;
    float threshold=0.001f;
    PyObject* pyobj_nOctaves = NULL;
    int nOctaves=4;
    PyObject* pyobj_nOctaveLayers = NULL;
    int nOctaveLayers=4;
    PyObject* pyobj_diffusivity = NULL;
    KAZE_DiffusivityType diffusivity=KAZE::DIFF_PM_G2;
    Ptr<KAZE> retval;

    const char* keywords[] = { "extended", "upright", "threshold", "nOctaves", "nOctaveLayers", "diffusivity", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOOOOO:KAZE.create", (char**)keywords, &pyobj_extended, &pyobj_upright, &pyobj_threshold, &pyobj_nOctaves, &pyobj_nOctaveLayers, &pyobj_diffusivity) &&
        pyopencv_to_safe(pyobj_extended, extended, ArgInfo("extended", 0)) &&
        pyopencv_to_safe(pyobj_upright, upright, ArgInfo("upright", 0)) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) &&
        pyopencv_to_safe(pyobj_nOctaves, nOctaves, ArgInfo("nOctaves", 0)) &&
        pyopencv_to_safe(pyobj_nOctaveLayers, nOctaveLayers, ArgInfo("nOctaveLayers", 0)) &&
        pyopencv_to_safe(pyobj_diffusivity, diffusivity, ArgInfo("diffusivity", 0)) )
    {
        ERRWRAP2(retval = cv::KAZE::create(extended, upright, threshold, nOctaves, nOctaveLayers, diffusivity));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getDiffusivity(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    KAZE::DiffusivityType retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDiffusivity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getExtended(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getExtended());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getNOctaveLayers(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaveLayers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getNOctaves(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaves());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_getUpright(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getUpright());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setDiffusivity(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    PyObject* pyobj_diff = NULL;
    KAZE_DiffusivityType diff=static_cast<KAZE_DiffusivityType>(0);

    const char* keywords[] = { "diff", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:KAZE.setDiffusivity", (char**)keywords, &pyobj_diff) &&
        pyopencv_to_safe(pyobj_diff, diff, ArgInfo("diff", 0)) )
    {
        ERRWRAP2(_self_->setDiffusivity(diff));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setExtended(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    PyObject* pyobj_extended = NULL;
    bool extended=0;

    const char* keywords[] = { "extended", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:KAZE.setExtended", (char**)keywords, &pyobj_extended) &&
        pyopencv_to_safe(pyobj_extended, extended, ArgInfo("extended", 0)) )
    {
        ERRWRAP2(_self_->setExtended(extended));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setNOctaveLayers(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    PyObject* pyobj_octaveLayers = NULL;
    int octaveLayers=0;

    const char* keywords[] = { "octaveLayers", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:KAZE.setNOctaveLayers", (char**)keywords, &pyobj_octaveLayers) &&
        pyopencv_to_safe(pyobj_octaveLayers, octaveLayers, ArgInfo("octaveLayers", 0)) )
    {
        ERRWRAP2(_self_->setNOctaveLayers(octaveLayers));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setNOctaves(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    PyObject* pyobj_octaves = NULL;
    int octaves=0;

    const char* keywords[] = { "octaves", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:KAZE.setNOctaves", (char**)keywords, &pyobj_octaves) &&
        pyopencv_to_safe(pyobj_octaves, octaves, ArgInfo("octaves", 0)) )
    {
        ERRWRAP2(_self_->setNOctaves(octaves));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    PyObject* pyobj_threshold = NULL;
    double threshold=0;

    const char* keywords[] = { "threshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:KAZE.setThreshold", (char**)keywords, &pyobj_threshold) &&
        pyopencv_to_safe(pyobj_threshold, threshold, ArgInfo("threshold", 0)) )
    {
        ERRWRAP2(_self_->setThreshold(threshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_KAZE_setUpright(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KAZE> * self1 = 0;
    if (!pyopencv_KAZE_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KAZE' or its derivative)");
    Ptr<cv::KAZE> _self_ = *(self1);
    PyObject* pyobj_upright = NULL;
    bool upright=0;

    const char* keywords[] = { "upright", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:KAZE.setUpright", (char**)keywords, &pyobj_upright) &&
        pyopencv_to_safe(pyobj_upright, upright, ArgInfo("upright", 0)) )
    {
        ERRWRAP2(_self_->setUpright(upright));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (KAZE)

static PyGetSetDef pyopencv_KAZE_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_KAZE_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_create_static, METH_STATIC), "create([, extended[, upright[, threshold[, nOctaves[, nOctaveLayers[, diffusivity]]]]]]) -> retval\n.   @brief The KAZE constructor\n.   \n.       @param extended Set to enable extraction of extended (128-byte) descriptor.\n.       @param upright Set to enable use of upright descriptors (non rotation-invariant).\n.       @param threshold Detector response threshold to accept point\n.       @param nOctaves Maximum octave evolution of the image\n.       @param nOctaveLayers Default number of sublevels per scale level\n.       @param diffusivity Diffusivity type. DIFF_PM_G1, DIFF_PM_G2, DIFF_WEICKERT or\n.       DIFF_CHARBONNIER"},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getDiffusivity", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getDiffusivity, 0), "getDiffusivity() -> retval\n."},
    {"getExtended", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getExtended, 0), "getExtended() -> retval\n."},
    {"getNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getNOctaveLayers, 0), "getNOctaveLayers() -> retval\n."},
    {"getNOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getNOctaves, 0), "getNOctaves() -> retval\n."},
    {"getThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getThreshold, 0), "getThreshold() -> retval\n."},
    {"getUpright", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_getUpright, 0), "getUpright() -> retval\n."},
    {"setDiffusivity", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setDiffusivity, 0), "setDiffusivity(diff) -> None\n."},
    {"setExtended", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setExtended, 0), "setExtended(extended) -> None\n."},
    {"setNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setNOctaveLayers, 0), "setNOctaveLayers(octaveLayers) -> None\n."},
    {"setNOctaves", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setNOctaves, 0), "setNOctaves(octaves) -> None\n."},
    {"setThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setThreshold, 0), "setThreshold(threshold) -> None\n."},
    {"setUpright", CV_PY_FN_WITH_KW_(pyopencv_cv_KAZE_setUpright, 0), "setUpright(upright) -> None\n."},

    {NULL,          NULL}
};

// Converter (KAZE)

template<>
struct PyOpenCV_Converter< Ptr<cv::KAZE> >
{
    static PyObject* from(const Ptr<cv::KAZE>& r)
    {
        return pyopencv_KAZE_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::KAZE>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::KAZE> * dst_;
        if (pyopencv_KAZE_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::KAZE> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// KalmanFilter (Generic)
//================================================================================

// GetSet (KalmanFilter)


static PyObject* pyopencv_KalmanFilter_get_controlMatrix(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->controlMatrix);
}

static int pyopencv_KalmanFilter_set_controlMatrix(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the controlMatrix attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->controlMatrix, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_errorCovPost(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->errorCovPost);
}

static int pyopencv_KalmanFilter_set_errorCovPost(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the errorCovPost attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->errorCovPost, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_errorCovPre(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->errorCovPre);
}

static int pyopencv_KalmanFilter_set_errorCovPre(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the errorCovPre attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->errorCovPre, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_gain(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->gain);
}

static int pyopencv_KalmanFilter_set_gain(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the gain attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->gain, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_measurementMatrix(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->measurementMatrix);
}

static int pyopencv_KalmanFilter_set_measurementMatrix(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the measurementMatrix attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->measurementMatrix, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_measurementNoiseCov(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->measurementNoiseCov);
}

static int pyopencv_KalmanFilter_set_measurementNoiseCov(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the measurementNoiseCov attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->measurementNoiseCov, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_processNoiseCov(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->processNoiseCov);
}

static int pyopencv_KalmanFilter_set_processNoiseCov(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the processNoiseCov attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->processNoiseCov, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_statePost(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->statePost);
}

static int pyopencv_KalmanFilter_set_statePost(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the statePost attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->statePost, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_statePre(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->statePre);
}

static int pyopencv_KalmanFilter_set_statePre(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the statePre attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->statePre, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KalmanFilter_get_transitionMatrix(pyopencv_KalmanFilter_t* p, void *closure)
{
    return pyopencv_from(p->v->transitionMatrix);
}

static int pyopencv_KalmanFilter_set_transitionMatrix(pyopencv_KalmanFilter_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the transitionMatrix attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->transitionMatrix, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (KalmanFilter)

static int pyopencv_cv_KalmanFilter_KalmanFilter(pyopencv_KalmanFilter_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(2);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::KalmanFilter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::KalmanFilter()));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dynamParams = NULL;
    int dynamParams=0;
    PyObject* pyobj_measureParams = NULL;
    int measureParams=0;
    PyObject* pyobj_controlParams = NULL;
    int controlParams=0;
    PyObject* pyobj_type = NULL;
    int type=CV_32F;

    const char* keywords[] = { "dynamParams", "measureParams", "controlParams", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OO:KalmanFilter", (char**)keywords, &pyobj_dynamParams, &pyobj_measureParams, &pyobj_controlParams, &pyobj_type) &&
        pyopencv_to_safe(pyobj_dynamParams, dynamParams, ArgInfo("dynamParams", 0)) &&
        pyopencv_to_safe(pyobj_measureParams, measureParams, ArgInfo("measureParams", 0)) &&
        pyopencv_to_safe(pyobj_controlParams, controlParams, ArgInfo("controlParams", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        new (&(self->v)) Ptr<cv::KalmanFilter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::KalmanFilter(dynamParams, measureParams, controlParams, type)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("KalmanFilter");

    return -1;
}

static PyObject* pyopencv_cv_KalmanFilter_correct(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KalmanFilter> * self1 = 0;
    if (!pyopencv_KalmanFilter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    Ptr<cv::KalmanFilter> _self_ = *(self1);
    PyObject* pyobj_measurement = NULL;
    Mat measurement;
    Mat retval;

    const char* keywords[] = { "measurement", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:KalmanFilter.correct", (char**)keywords, &pyobj_measurement) &&
        pyopencv_to_safe(pyobj_measurement, measurement, ArgInfo("measurement", 0)) )
    {
        ERRWRAP2(retval = _self_->correct(measurement));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_KalmanFilter_predict(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::KalmanFilter> * self1 = 0;
    if (!pyopencv_KalmanFilter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'KalmanFilter' or its derivative)");
    Ptr<cv::KalmanFilter> _self_ = *(self1);
    PyObject* pyobj_control = NULL;
    Mat control;
    Mat retval;

    const char* keywords[] = { "control", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:KalmanFilter.predict", (char**)keywords, &pyobj_control) &&
        pyopencv_to_safe(pyobj_control, control, ArgInfo("control", 0)) )
    {
        ERRWRAP2(retval = _self_->predict(control));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (KalmanFilter)

static PyGetSetDef pyopencv_KalmanFilter_getseters[] =
{
    {(char*)"controlMatrix", (getter)pyopencv_KalmanFilter_get_controlMatrix, (setter)pyopencv_KalmanFilter_set_controlMatrix, (char*)"controlMatrix", NULL},
    {(char*)"errorCovPost", (getter)pyopencv_KalmanFilter_get_errorCovPost, (setter)pyopencv_KalmanFilter_set_errorCovPost, (char*)"errorCovPost", NULL},
    {(char*)"errorCovPre", (getter)pyopencv_KalmanFilter_get_errorCovPre, (setter)pyopencv_KalmanFilter_set_errorCovPre, (char*)"errorCovPre", NULL},
    {(char*)"gain", (getter)pyopencv_KalmanFilter_get_gain, (setter)pyopencv_KalmanFilter_set_gain, (char*)"gain", NULL},
    {(char*)"measurementMatrix", (getter)pyopencv_KalmanFilter_get_measurementMatrix, (setter)pyopencv_KalmanFilter_set_measurementMatrix, (char*)"measurementMatrix", NULL},
    {(char*)"measurementNoiseCov", (getter)pyopencv_KalmanFilter_get_measurementNoiseCov, (setter)pyopencv_KalmanFilter_set_measurementNoiseCov, (char*)"measurementNoiseCov", NULL},
    {(char*)"processNoiseCov", (getter)pyopencv_KalmanFilter_get_processNoiseCov, (setter)pyopencv_KalmanFilter_set_processNoiseCov, (char*)"processNoiseCov", NULL},
    {(char*)"statePost", (getter)pyopencv_KalmanFilter_get_statePost, (setter)pyopencv_KalmanFilter_set_statePost, (char*)"statePost", NULL},
    {(char*)"statePre", (getter)pyopencv_KalmanFilter_get_statePre, (setter)pyopencv_KalmanFilter_set_statePre, (char*)"statePre", NULL},
    {(char*)"transitionMatrix", (getter)pyopencv_KalmanFilter_get_transitionMatrix, (setter)pyopencv_KalmanFilter_set_transitionMatrix, (char*)"transitionMatrix", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_KalmanFilter_methods[] =
{
    {"correct", CV_PY_FN_WITH_KW_(pyopencv_cv_KalmanFilter_correct, 0), "correct(measurement) -> retval\n.   @brief Updates the predicted state from the measurement.\n.   \n.       @param measurement The measured system parameters"},
    {"predict", CV_PY_FN_WITH_KW_(pyopencv_cv_KalmanFilter_predict, 0), "predict([, control]) -> retval\n.   @brief Computes a predicted state.\n.   \n.       @param control The optional input control"},

    {NULL,          NULL}
};

// Converter (KalmanFilter)

template<>
struct PyOpenCV_Converter< Ptr<cv::KalmanFilter> >
{
    static PyObject* from(const Ptr<cv::KalmanFilter>& r)
    {
        return pyopencv_KalmanFilter_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::KalmanFilter>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::KalmanFilter> * dst_;
        if (pyopencv_KalmanFilter_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::KalmanFilter> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// KeyPoint (Generic)
//================================================================================

// GetSet (KeyPoint)


static PyObject* pyopencv_KeyPoint_get_angle(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.angle);
}

static int pyopencv_KeyPoint_set_angle(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the angle attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.angle, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_class_id(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.class_id);
}

static int pyopencv_KeyPoint_set_class_id(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the class_id attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.class_id, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_octave(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.octave);
}

static int pyopencv_KeyPoint_set_octave(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the octave attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.octave, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_pt(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.pt);
}

static int pyopencv_KeyPoint_set_pt(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the pt attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.pt, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_response(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.response);
}

static int pyopencv_KeyPoint_set_response(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the response attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.response, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_KeyPoint_get_size(pyopencv_KeyPoint_t* p, void *closure)
{
    return pyopencv_from(p->v.size);
}

static int pyopencv_KeyPoint_set_size(pyopencv_KeyPoint_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the size attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.size, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (KeyPoint)

static int pyopencv_cv_KeyPoint_KeyPoint(pyopencv_KeyPoint_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(2);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::KeyPoint());
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_x = NULL;
    float x=0.f;
    PyObject* pyobj_y = NULL;
    float y=0.f;
    PyObject* pyobj_size = NULL;
    float size=0.f;
    PyObject* pyobj_angle = NULL;
    float angle=-1;
    PyObject* pyobj_response = NULL;
    float response=0;
    PyObject* pyobj_octave = NULL;
    int octave=0;
    PyObject* pyobj_class_id = NULL;
    int class_id=-1;

    const char* keywords[] = { "x", "y", "size", "angle", "response", "octave", "class_id", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|OOOO:KeyPoint", (char**)keywords, &pyobj_x, &pyobj_y, &pyobj_size, &pyobj_angle, &pyobj_response, &pyobj_octave, &pyobj_class_id) &&
        pyopencv_to_safe(pyobj_x, x, ArgInfo("x", 0)) &&
        pyopencv_to_safe(pyobj_y, y, ArgInfo("y", 0)) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_angle, angle, ArgInfo("angle", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) &&
        pyopencv_to_safe(pyobj_octave, octave, ArgInfo("octave", 0)) &&
        pyopencv_to_safe(pyobj_class_id, class_id, ArgInfo("class_id", 0)) )
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::KeyPoint(x, y, size, angle, response, octave, class_id));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("KeyPoint");

    return -1;
}

static PyObject* pyopencv_cv_KeyPoint_convert_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_keypoints = NULL;
    vector_KeyPoint keypoints;
    vector_Point2f points2f;
    PyObject* pyobj_keypointIndexes = NULL;
    vector_int keypointIndexes=std::vector<int>();

    const char* keywords[] = { "keypoints", "keypointIndexes", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:KeyPoint.convert", (char**)keywords, &pyobj_keypoints, &pyobj_keypointIndexes) &&
        pyopencv_to_safe(pyobj_keypoints, keypoints, ArgInfo("keypoints", 0)) &&
        pyopencv_to_safe(pyobj_keypointIndexes, keypointIndexes, ArgInfo("keypointIndexes", 0)) )
    {
        ERRWRAP2(cv::KeyPoint::convert(keypoints, points2f, keypointIndexes));
        return pyopencv_from(points2f);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_points2f = NULL;
    vector_Point2f points2f;
    vector_KeyPoint keypoints;
    PyObject* pyobj_size = NULL;
    float size=1;
    PyObject* pyobj_response = NULL;
    float response=1;
    PyObject* pyobj_octave = NULL;
    int octave=0;
    PyObject* pyobj_class_id = NULL;
    int class_id=-1;

    const char* keywords[] = { "points2f", "size", "response", "octave", "class_id", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OOOO:KeyPoint.convert", (char**)keywords, &pyobj_points2f, &pyobj_size, &pyobj_response, &pyobj_octave, &pyobj_class_id) &&
        pyopencv_to_safe(pyobj_points2f, points2f, ArgInfo("points2f", 0)) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) &&
        pyopencv_to_safe(pyobj_octave, octave, ArgInfo("octave", 0)) &&
        pyopencv_to_safe(pyobj_class_id, class_id, ArgInfo("class_id", 0)) )
    {
        ERRWRAP2(cv::KeyPoint::convert(points2f, keypoints, size, response, octave, class_id));
        return pyopencv_from(keypoints);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("convert");

    return NULL;
}

static PyObject* pyopencv_cv_KeyPoint_overlap_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_kp1 = NULL;
    cv::KeyPoint kp1;
    PyObject* pyobj_kp2 = NULL;
    cv::KeyPoint kp2;
    float retval;

    const char* keywords[] = { "kp1", "kp2", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:KeyPoint.overlap", (char**)keywords, &pyobj_kp1, &pyobj_kp2) &&
        pyopencv_to_safe(pyobj_kp1, kp1, ArgInfo("kp1", 0)) &&
        pyopencv_to_safe(pyobj_kp2, kp2, ArgInfo("kp2", 0)) )
    {
        ERRWRAP2(retval = cv::KeyPoint::overlap(kp1, kp2));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (KeyPoint)

static PyGetSetDef pyopencv_KeyPoint_getseters[] =
{
    {(char*)"angle", (getter)pyopencv_KeyPoint_get_angle, (setter)pyopencv_KeyPoint_set_angle, (char*)"angle", NULL},
    {(char*)"class_id", (getter)pyopencv_KeyPoint_get_class_id, (setter)pyopencv_KeyPoint_set_class_id, (char*)"class_id", NULL},
    {(char*)"octave", (getter)pyopencv_KeyPoint_get_octave, (setter)pyopencv_KeyPoint_set_octave, (char*)"octave", NULL},
    {(char*)"pt", (getter)pyopencv_KeyPoint_get_pt, (setter)pyopencv_KeyPoint_set_pt, (char*)"pt", NULL},
    {(char*)"response", (getter)pyopencv_KeyPoint_get_response, (setter)pyopencv_KeyPoint_set_response, (char*)"response", NULL},
    {(char*)"size", (getter)pyopencv_KeyPoint_get_size, (setter)pyopencv_KeyPoint_set_size, (char*)"size", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_KeyPoint_methods[] =
{
    {"convert", CV_PY_FN_WITH_KW_(pyopencv_cv_KeyPoint_convert_static, METH_STATIC), "convert(keypoints[, keypointIndexes]) -> points2f\n.   This method converts vector of keypoints to vector of points or the reverse, where each keypoint is\n.       assigned the same size and the same orientation.\n.   \n.       @param keypoints Keypoints obtained from any feature detection algorithm like SIFT/SURF/ORB\n.       @param points2f Array of (x,y) coordinates of each keypoint\n.       @param keypointIndexes Array of indexes of keypoints to be converted to points. (Acts like a mask to\n.       convert only specified keypoints)\n\n\n\nconvert(points2f[, size[, response[, octave[, class_id]]]]) -> keypoints\n.   @overload\n.       @param points2f Array of (x,y) coordinates of each keypoint\n.       @param keypoints Keypoints obtained from any feature detection algorithm like SIFT/SURF/ORB\n.       @param size keypoint diameter\n.       @param response keypoint detector response on the keypoint (that is, strength of the keypoint)\n.       @param octave pyramid octave in which the keypoint has been detected\n.       @param class_id object id"},
    {"overlap", CV_PY_FN_WITH_KW_(pyopencv_cv_KeyPoint_overlap_static, METH_STATIC), "overlap(kp1, kp2) -> retval\n.   This method computes overlap for pair of keypoints. Overlap is the ratio between area of keypoint\n.       regions' intersection and area of keypoint regions' union (considering keypoint region as circle).\n.       If they don't overlap, we get zero. If they coincide at same location with same size, we get 1.\n.       @param kp1 First keypoint\n.       @param kp2 Second keypoint"},

    {NULL,          NULL}
};

// Converter (KeyPoint)

template<>
struct PyOpenCV_Converter< cv::KeyPoint >
{
    static PyObject* from(const cv::KeyPoint& r)
    {
        return pyopencv_KeyPoint_Instance(r);
    }
    static bool to(PyObject* src, cv::KeyPoint& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::KeyPoint * dst_;
        if (pyopencv_KeyPoint_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::KeyPoint for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// LineSegmentDetector (Generic)
//================================================================================

// GetSet (LineSegmentDetector)



// Methods (LineSegmentDetector)

static PyObject* pyopencv_cv_LineSegmentDetector_compareSegments(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::LineSegmentDetector> * self1 = 0;
    if (!pyopencv_LineSegmentDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    Ptr<cv::LineSegmentDetector> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_lines1 = NULL;
    Mat lines1;
    PyObject* pyobj_lines2 = NULL;
    Mat lines2;
    PyObject* pyobj_image = NULL;
    Mat image;
    int retval;

    const char* keywords[] = { "size", "lines1", "lines2", "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:LineSegmentDetector.compareSegments", (char**)keywords, &pyobj_size, &pyobj_lines1, &pyobj_lines2, &pyobj_image) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_lines1, lines1, ArgInfo("lines1", 0)) &&
        pyopencv_to_safe(pyobj_lines2, lines2, ArgInfo("lines2", 0)) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->compareSegments(size, lines1, lines2, image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_lines1 = NULL;
    UMat lines1;
    PyObject* pyobj_lines2 = NULL;
    UMat lines2;
    PyObject* pyobj_image = NULL;
    UMat image;
    int retval;

    const char* keywords[] = { "size", "lines1", "lines2", "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:LineSegmentDetector.compareSegments", (char**)keywords, &pyobj_size, &pyobj_lines1, &pyobj_lines2, &pyobj_image) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_lines1, lines1, ArgInfo("lines1", 0)) &&
        pyopencv_to_safe(pyobj_lines2, lines2, ArgInfo("lines2", 0)) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->compareSegments(size, lines1, lines2, image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("compareSegments");

    return NULL;
}

static PyObject* pyopencv_cv_LineSegmentDetector_detect(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::LineSegmentDetector> * self1 = 0;
    if (!pyopencv_LineSegmentDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    Ptr<cv::LineSegmentDetector> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_lines = NULL;
    Mat lines;
    PyObject* pyobj_width = NULL;
    Mat width;
    PyObject* pyobj_prec = NULL;
    Mat prec;
    PyObject* pyobj_nfa = NULL;
    Mat nfa;

    const char* keywords[] = { "image", "lines", "width", "prec", "nfa", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OOOO:LineSegmentDetector.detect", (char**)keywords, &pyobj_image, &pyobj_lines, &pyobj_width, &pyobj_prec, &pyobj_nfa) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_lines, lines, ArgInfo("lines", 1)) &&
        pyopencv_to_safe(pyobj_width, width, ArgInfo("width", 1)) &&
        pyopencv_to_safe(pyobj_prec, prec, ArgInfo("prec", 1)) &&
        pyopencv_to_safe(pyobj_nfa, nfa, ArgInfo("nfa", 1)) )
    {
        ERRWRAP2(_self_->detect(image, lines, width, prec, nfa));
        return Py_BuildValue("(NNNN)", pyopencv_from(lines), pyopencv_from(width), pyopencv_from(prec), pyopencv_from(nfa));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_lines = NULL;
    UMat lines;
    PyObject* pyobj_width = NULL;
    UMat width;
    PyObject* pyobj_prec = NULL;
    UMat prec;
    PyObject* pyobj_nfa = NULL;
    UMat nfa;

    const char* keywords[] = { "image", "lines", "width", "prec", "nfa", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OOOO:LineSegmentDetector.detect", (char**)keywords, &pyobj_image, &pyobj_lines, &pyobj_width, &pyobj_prec, &pyobj_nfa) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_lines, lines, ArgInfo("lines", 1)) &&
        pyopencv_to_safe(pyobj_width, width, ArgInfo("width", 1)) &&
        pyopencv_to_safe(pyobj_prec, prec, ArgInfo("prec", 1)) &&
        pyopencv_to_safe(pyobj_nfa, nfa, ArgInfo("nfa", 1)) )
    {
        ERRWRAP2(_self_->detect(image, lines, width, prec, nfa));
        return Py_BuildValue("(NNNN)", pyopencv_from(lines), pyopencv_from(width), pyopencv_from(prec), pyopencv_from(nfa));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("detect");

    return NULL;
}

static PyObject* pyopencv_cv_LineSegmentDetector_drawSegments(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::LineSegmentDetector> * self1 = 0;
    if (!pyopencv_LineSegmentDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'LineSegmentDetector' or its derivative)");
    Ptr<cv::LineSegmentDetector> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_lines = NULL;
    Mat lines;

    const char* keywords[] = { "image", "lines", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:LineSegmentDetector.drawSegments", (char**)keywords, &pyobj_image, &pyobj_lines) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 1)) &&
        pyopencv_to_safe(pyobj_lines, lines, ArgInfo("lines", 0)) )
    {
        ERRWRAP2(_self_->drawSegments(image, lines));
        return pyopencv_from(image);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_lines = NULL;
    UMat lines;

    const char* keywords[] = { "image", "lines", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:LineSegmentDetector.drawSegments", (char**)keywords, &pyobj_image, &pyobj_lines) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 1)) &&
        pyopencv_to_safe(pyobj_lines, lines, ArgInfo("lines", 0)) )
    {
        ERRWRAP2(_self_->drawSegments(image, lines));
        return pyopencv_from(image);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("drawSegments");

    return NULL;
}



// Tables (LineSegmentDetector)

static PyGetSetDef pyopencv_LineSegmentDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_LineSegmentDetector_methods[] =
{
    {"compareSegments", CV_PY_FN_WITH_KW_(pyopencv_cv_LineSegmentDetector_compareSegments, 0), "compareSegments(size, lines1, lines2[, image]) -> retval, image\n.   @brief Draws two groups of lines in blue and red, counting the non overlapping (mismatching) pixels.\n.   \n.       @param size The size of the image, where lines1 and lines2 were found.\n.       @param lines1 The first group of lines that needs to be drawn. It is visualized in blue color.\n.       @param lines2 The second group of lines. They visualized in red color.\n.       @param image Optional image, where the lines will be drawn. The image should be color(3-channel)\n.       in order for lines1 and lines2 to be drawn in the above mentioned colors."},
    {"detect", CV_PY_FN_WITH_KW_(pyopencv_cv_LineSegmentDetector_detect, 0), "detect(image[, lines[, width[, prec[, nfa]]]]) -> lines, width, prec, nfa\n.   @brief Finds lines in the input image.\n.   \n.       This is the output of the default parameters of the algorithm on the above shown image.\n.   \n.       ![image](pics/building_lsd.png)\n.   \n.       @param image A grayscale (CV_8UC1) input image. If only a roi needs to be selected, use:\n.       `lsd_ptr-\\>detect(image(roi), lines, ...); lines += Scalar(roi.x, roi.y, roi.x, roi.y);`\n.       @param lines A vector of Vec4f elements specifying the beginning and ending point of a line. Where\n.       Vec4f is (x1, y1, x2, y2), point 1 is the start, point 2 - end. Returned lines are strictly\n.       oriented depending on the gradient.\n.       @param width Vector of widths of the regions, where the lines are found. E.g. Width of line.\n.       @param prec Vector of precisions with which the lines are found.\n.       @param nfa Vector containing number of false alarms in the line region, with precision of 10%. The\n.       bigger the value, logarithmically better the detection.\n.       - -1 corresponds to 10 mean false alarms\n.       - 0 corresponds to 1 mean false alarm\n.       - 1 corresponds to 0.1 mean false alarms\n.       This vector will be calculated only when the objects type is #LSD_REFINE_ADV."},
    {"drawSegments", CV_PY_FN_WITH_KW_(pyopencv_cv_LineSegmentDetector_drawSegments, 0), "drawSegments(image, lines) -> image\n.   @brief Draws the line segments on a given image.\n.       @param image The image, where the lines will be drawn. Should be bigger or equal to the image,\n.       where the lines were found.\n.       @param lines A vector of the lines that needed to be drawn."},

    {NULL,          NULL}
};

// Converter (LineSegmentDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::LineSegmentDetector> >
{
    static PyObject* from(const Ptr<cv::LineSegmentDetector>& r)
    {
        return pyopencv_LineSegmentDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::LineSegmentDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::LineSegmentDetector> * dst_;
        if (pyopencv_LineSegmentDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::LineSegmentDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// MSER (Generic)
//================================================================================

// GetSet (MSER)



// Methods (MSER)

static PyObject* pyopencv_cv_MSER_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_delta = NULL;
    int delta=5;
    PyObject* pyobj_min_area = NULL;
    int min_area=60;
    PyObject* pyobj_max_area = NULL;
    int max_area=14400;
    PyObject* pyobj_max_variation = NULL;
    double max_variation=0.25;
    PyObject* pyobj_min_diversity = NULL;
    double min_diversity=.2;
    PyObject* pyobj_max_evolution = NULL;
    int max_evolution=200;
    PyObject* pyobj_area_threshold = NULL;
    double area_threshold=1.01;
    PyObject* pyobj_min_margin = NULL;
    double min_margin=0.003;
    PyObject* pyobj_edge_blur_size = NULL;
    int edge_blur_size=5;
    Ptr<MSER> retval;

    const char* keywords[] = { "delta", "min_area", "max_area", "max_variation", "min_diversity", "max_evolution", "area_threshold", "min_margin", "edge_blur_size", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOOOOOOOO:MSER.create", (char**)keywords, &pyobj_delta, &pyobj_min_area, &pyobj_max_area, &pyobj_max_variation, &pyobj_min_diversity, &pyobj_max_evolution, &pyobj_area_threshold, &pyobj_min_margin, &pyobj_edge_blur_size) &&
        pyopencv_to_safe(pyobj_delta, delta, ArgInfo("delta", 0)) &&
        pyopencv_to_safe(pyobj_min_area, min_area, ArgInfo("min_area", 0)) &&
        pyopencv_to_safe(pyobj_max_area, max_area, ArgInfo("max_area", 0)) &&
        pyopencv_to_safe(pyobj_max_variation, max_variation, ArgInfo("max_variation", 0)) &&
        pyopencv_to_safe(pyobj_min_diversity, min_diversity, ArgInfo("min_diversity", 0)) &&
        pyopencv_to_safe(pyobj_max_evolution, max_evolution, ArgInfo("max_evolution", 0)) &&
        pyopencv_to_safe(pyobj_area_threshold, area_threshold, ArgInfo("area_threshold", 0)) &&
        pyopencv_to_safe(pyobj_min_margin, min_margin, ArgInfo("min_margin", 0)) &&
        pyopencv_to_safe(pyobj_edge_blur_size, edge_blur_size, ArgInfo("edge_blur_size", 0)) )
    {
        ERRWRAP2(retval = cv::MSER::create(delta, min_area, max_area, max_variation, min_diversity, max_evolution, area_threshold, min_margin, edge_blur_size));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_detectRegions(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    vector_vector_Point msers;
    vector_Rect bboxes;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.detectRegions", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->detectRegions(image, msers, bboxes));
        return Py_BuildValue("(NN)", pyopencv_from(msers), pyopencv_from(bboxes));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    vector_vector_Point msers;
    vector_Rect bboxes;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.detectRegions", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->detectRegions(image, msers, bboxes));
        return Py_BuildValue("(NN)", pyopencv_from(msers), pyopencv_from(bboxes));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("detectRegions");

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getAreaThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAreaThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getDelta(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDelta());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getEdgeBlurSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getEdgeBlurSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMaxArea(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxArea());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMaxEvolution(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxEvolution());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMaxVariation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxVariation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMinArea(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinArea());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMinDiversity(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinDiversity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getMinMargin(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinMargin());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_getPass2Only(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPass2Only());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setAreaThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_areaThreshold = NULL;
    double areaThreshold=0;

    const char* keywords[] = { "areaThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setAreaThreshold", (char**)keywords, &pyobj_areaThreshold) &&
        pyopencv_to_safe(pyobj_areaThreshold, areaThreshold, ArgInfo("areaThreshold", 0)) )
    {
        ERRWRAP2(_self_->setAreaThreshold(areaThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setDelta(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_delta = NULL;
    int delta=0;

    const char* keywords[] = { "delta", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setDelta", (char**)keywords, &pyobj_delta) &&
        pyopencv_to_safe(pyobj_delta, delta, ArgInfo("delta", 0)) )
    {
        ERRWRAP2(_self_->setDelta(delta));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setEdgeBlurSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_edge_blur_size = NULL;
    int edge_blur_size=0;

    const char* keywords[] = { "edge_blur_size", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setEdgeBlurSize", (char**)keywords, &pyobj_edge_blur_size) &&
        pyopencv_to_safe(pyobj_edge_blur_size, edge_blur_size, ArgInfo("edge_blur_size", 0)) )
    {
        ERRWRAP2(_self_->setEdgeBlurSize(edge_blur_size));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMaxArea(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_maxArea = NULL;
    int maxArea=0;

    const char* keywords[] = { "maxArea", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setMaxArea", (char**)keywords, &pyobj_maxArea) &&
        pyopencv_to_safe(pyobj_maxArea, maxArea, ArgInfo("maxArea", 0)) )
    {
        ERRWRAP2(_self_->setMaxArea(maxArea));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMaxEvolution(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_maxEvolution = NULL;
    int maxEvolution=0;

    const char* keywords[] = { "maxEvolution", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setMaxEvolution", (char**)keywords, &pyobj_maxEvolution) &&
        pyopencv_to_safe(pyobj_maxEvolution, maxEvolution, ArgInfo("maxEvolution", 0)) )
    {
        ERRWRAP2(_self_->setMaxEvolution(maxEvolution));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMaxVariation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_maxVariation = NULL;
    double maxVariation=0;

    const char* keywords[] = { "maxVariation", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setMaxVariation", (char**)keywords, &pyobj_maxVariation) &&
        pyopencv_to_safe(pyobj_maxVariation, maxVariation, ArgInfo("maxVariation", 0)) )
    {
        ERRWRAP2(_self_->setMaxVariation(maxVariation));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMinArea(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_minArea = NULL;
    int minArea=0;

    const char* keywords[] = { "minArea", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setMinArea", (char**)keywords, &pyobj_minArea) &&
        pyopencv_to_safe(pyobj_minArea, minArea, ArgInfo("minArea", 0)) )
    {
        ERRWRAP2(_self_->setMinArea(minArea));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMinDiversity(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_minDiversity = NULL;
    double minDiversity=0;

    const char* keywords[] = { "minDiversity", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setMinDiversity", (char**)keywords, &pyobj_minDiversity) &&
        pyopencv_to_safe(pyobj_minDiversity, minDiversity, ArgInfo("minDiversity", 0)) )
    {
        ERRWRAP2(_self_->setMinDiversity(minDiversity));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setMinMargin(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_min_margin = NULL;
    double min_margin=0;

    const char* keywords[] = { "min_margin", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setMinMargin", (char**)keywords, &pyobj_min_margin) &&
        pyopencv_to_safe(pyobj_min_margin, min_margin, ArgInfo("min_margin", 0)) )
    {
        ERRWRAP2(_self_->setMinMargin(min_margin));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MSER_setPass2Only(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MSER> * self1 = 0;
    if (!pyopencv_MSER_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MSER' or its derivative)");
    Ptr<cv::MSER> _self_ = *(self1);
    PyObject* pyobj_f = NULL;
    bool f=0;

    const char* keywords[] = { "f", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MSER.setPass2Only", (char**)keywords, &pyobj_f) &&
        pyopencv_to_safe(pyobj_f, f, ArgInfo("f", 0)) )
    {
        ERRWRAP2(_self_->setPass2Only(f));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (MSER)

static PyGetSetDef pyopencv_MSER_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_MSER_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_create_static, METH_STATIC), "create([, delta[, min_area[, max_area[, max_variation[, min_diversity[, max_evolution[, area_threshold[, min_margin[, edge_blur_size]]]]]]]]]) -> retval\n.   @brief Full constructor for %MSER detector\n.   \n.       @param delta it compares \\f$(size_{i}-size_{i-delta})/size_{i-delta}\\f$\n.       @param min_area prune the area which smaller than minArea\n.       @param max_area prune the area which bigger than maxArea\n.       @param max_variation prune the area have similar size to its children\n.       @param min_diversity for color image, trace back to cut off mser with diversity less than min_diversity\n.       @param max_evolution  for color image, the evolution steps\n.       @param area_threshold for color image, the area threshold to cause re-initialize\n.       @param min_margin for color image, ignore too small margin\n.       @param edge_blur_size for color image, the aperture size for edge blur"},
    {"detectRegions", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_detectRegions, 0), "detectRegions(image) -> msers, bboxes\n.   @brief Detect %MSER regions\n.   \n.       @param image input image (8UC1, 8UC3 or 8UC4, must be greater or equal than 3x3)\n.       @param msers resulting list of point sets\n.       @param bboxes resulting bounding boxes"},
    {"getAreaThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getAreaThreshold, 0), "getAreaThreshold() -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getDelta", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getDelta, 0), "getDelta() -> retval\n."},
    {"getEdgeBlurSize", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getEdgeBlurSize, 0), "getEdgeBlurSize() -> retval\n."},
    {"getMaxArea", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getMaxArea, 0), "getMaxArea() -> retval\n."},
    {"getMaxEvolution", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getMaxEvolution, 0), "getMaxEvolution() -> retval\n."},
    {"getMaxVariation", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getMaxVariation, 0), "getMaxVariation() -> retval\n."},
    {"getMinArea", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getMinArea, 0), "getMinArea() -> retval\n."},
    {"getMinDiversity", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getMinDiversity, 0), "getMinDiversity() -> retval\n."},
    {"getMinMargin", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getMinMargin, 0), "getMinMargin() -> retval\n."},
    {"getPass2Only", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_getPass2Only, 0), "getPass2Only() -> retval\n."},
    {"setAreaThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setAreaThreshold, 0), "setAreaThreshold(areaThreshold) -> None\n."},
    {"setDelta", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setDelta, 0), "setDelta(delta) -> None\n."},
    {"setEdgeBlurSize", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setEdgeBlurSize, 0), "setEdgeBlurSize(edge_blur_size) -> None\n."},
    {"setMaxArea", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setMaxArea, 0), "setMaxArea(maxArea) -> None\n."},
    {"setMaxEvolution", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setMaxEvolution, 0), "setMaxEvolution(maxEvolution) -> None\n."},
    {"setMaxVariation", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setMaxVariation, 0), "setMaxVariation(maxVariation) -> None\n."},
    {"setMinArea", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setMinArea, 0), "setMinArea(minArea) -> None\n."},
    {"setMinDiversity", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setMinDiversity, 0), "setMinDiversity(minDiversity) -> None\n."},
    {"setMinMargin", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setMinMargin, 0), "setMinMargin(min_margin) -> None\n."},
    {"setPass2Only", CV_PY_FN_WITH_KW_(pyopencv_cv_MSER_setPass2Only, 0), "setPass2Only(f) -> None\n."},

    {NULL,          NULL}
};

// Converter (MSER)

template<>
struct PyOpenCV_Converter< Ptr<cv::MSER> >
{
    static PyObject* from(const Ptr<cv::MSER>& r)
    {
        return pyopencv_MSER_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::MSER>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::MSER> * dst_;
        if (pyopencv_MSER_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::MSER> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// MergeDebevec (Generic)
//================================================================================

// GetSet (MergeDebevec)



// Methods (MergeDebevec)

static PyObject* pyopencv_cv_MergeDebevec_process(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeDebevec> * self1 = 0;
    if (!pyopencv_MergeDebevec_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeDebevec' or its derivative)");
    Ptr<cv::MergeDebevec> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:MergeDebevec.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("process");

    return NULL;
}



// Tables (MergeDebevec)

static PyGetSetDef pyopencv_MergeDebevec_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_MergeDebevec_methods[] =
{
    {"process", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeDebevec_process, 0), "process(src, times, response[, dst]) -> dst\n.   \n\n\n\nprocess(src, times[, dst]) -> dst\n."},

    {NULL,          NULL}
};

// Converter (MergeDebevec)

template<>
struct PyOpenCV_Converter< Ptr<cv::MergeDebevec> >
{
    static PyObject* from(const Ptr<cv::MergeDebevec>& r)
    {
        return pyopencv_MergeDebevec_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::MergeDebevec>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::MergeDebevec> * dst_;
        if (pyopencv_MergeDebevec_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::MergeDebevec> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// MergeExposures (Generic)
//================================================================================

// GetSet (MergeExposures)



// Methods (MergeExposures)

static PyObject* pyopencv_cv_MergeExposures_process(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeExposures> * self1 = 0;
    if (!pyopencv_MergeExposures_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeExposures' or its derivative)");
    Ptr<cv::MergeExposures> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:MergeExposures.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:MergeExposures.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("process");

    return NULL;
}



// Tables (MergeExposures)

static PyGetSetDef pyopencv_MergeExposures_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_MergeExposures_methods[] =
{
    {"process", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeExposures_process, 0), "process(src, times, response[, dst]) -> dst\n.   @brief Merges images.\n.   \n.       @param src vector of input images\n.       @param dst result image\n.       @param times vector of exposure time values for each image\n.       @param response 256x1 matrix with inverse camera response function for each pixel value, it should\n.       have the same number of channels as images."},

    {NULL,          NULL}
};

// Converter (MergeExposures)

template<>
struct PyOpenCV_Converter< Ptr<cv::MergeExposures> >
{
    static PyObject* from(const Ptr<cv::MergeExposures>& r)
    {
        return pyopencv_MergeExposures_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::MergeExposures>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::MergeExposures> * dst_;
        if (pyopencv_MergeExposures_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::MergeExposures> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// MergeMertens (Generic)
//================================================================================

// GetSet (MergeMertens)



// Methods (MergeMertens)

static PyObject* pyopencv_cv_MergeMertens_getContrastWeight(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeMertens> * self1 = 0;
    if (!pyopencv_MergeMertens_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    Ptr<cv::MergeMertens> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getContrastWeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_getExposureWeight(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeMertens> * self1 = 0;
    if (!pyopencv_MergeMertens_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    Ptr<cv::MergeMertens> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getExposureWeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_getSaturationWeight(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeMertens> * self1 = 0;
    if (!pyopencv_MergeMertens_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    Ptr<cv::MergeMertens> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSaturationWeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_process(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeMertens> * self1 = 0;
    if (!pyopencv_MergeMertens_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    Ptr<cv::MergeMertens> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:MergeMertens.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("process");

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_setContrastWeight(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeMertens> * self1 = 0;
    if (!pyopencv_MergeMertens_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    Ptr<cv::MergeMertens> _self_ = *(self1);
    PyObject* pyobj_contrast_weiht = NULL;
    float contrast_weiht=0.f;

    const char* keywords[] = { "contrast_weiht", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MergeMertens.setContrastWeight", (char**)keywords, &pyobj_contrast_weiht) &&
        pyopencv_to_safe(pyobj_contrast_weiht, contrast_weiht, ArgInfo("contrast_weiht", 0)) )
    {
        ERRWRAP2(_self_->setContrastWeight(contrast_weiht));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_setExposureWeight(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeMertens> * self1 = 0;
    if (!pyopencv_MergeMertens_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    Ptr<cv::MergeMertens> _self_ = *(self1);
    PyObject* pyobj_exposure_weight = NULL;
    float exposure_weight=0.f;

    const char* keywords[] = { "exposure_weight", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MergeMertens.setExposureWeight", (char**)keywords, &pyobj_exposure_weight) &&
        pyopencv_to_safe(pyobj_exposure_weight, exposure_weight, ArgInfo("exposure_weight", 0)) )
    {
        ERRWRAP2(_self_->setExposureWeight(exposure_weight));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_MergeMertens_setSaturationWeight(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeMertens> * self1 = 0;
    if (!pyopencv_MergeMertens_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeMertens' or its derivative)");
    Ptr<cv::MergeMertens> _self_ = *(self1);
    PyObject* pyobj_saturation_weight = NULL;
    float saturation_weight=0.f;

    const char* keywords[] = { "saturation_weight", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:MergeMertens.setSaturationWeight", (char**)keywords, &pyobj_saturation_weight) &&
        pyopencv_to_safe(pyobj_saturation_weight, saturation_weight, ArgInfo("saturation_weight", 0)) )
    {
        ERRWRAP2(_self_->setSaturationWeight(saturation_weight));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (MergeMertens)

static PyGetSetDef pyopencv_MergeMertens_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_MergeMertens_methods[] =
{
    {"getContrastWeight", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeMertens_getContrastWeight, 0), "getContrastWeight() -> retval\n."},
    {"getExposureWeight", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeMertens_getExposureWeight, 0), "getExposureWeight() -> retval\n."},
    {"getSaturationWeight", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeMertens_getSaturationWeight, 0), "getSaturationWeight() -> retval\n."},
    {"process", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeMertens_process, 0), "process(src, times, response[, dst]) -> dst\n.   \n\n\n\nprocess(src[, dst]) -> dst\n.   @brief Short version of process, that doesn't take extra arguments.\n.   \n.       @param src vector of input images\n.       @param dst result image"},
    {"setContrastWeight", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeMertens_setContrastWeight, 0), "setContrastWeight(contrast_weiht) -> None\n."},
    {"setExposureWeight", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeMertens_setExposureWeight, 0), "setExposureWeight(exposure_weight) -> None\n."},
    {"setSaturationWeight", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeMertens_setSaturationWeight, 0), "setSaturationWeight(saturation_weight) -> None\n."},

    {NULL,          NULL}
};

// Converter (MergeMertens)

template<>
struct PyOpenCV_Converter< Ptr<cv::MergeMertens> >
{
    static PyObject* from(const Ptr<cv::MergeMertens>& r)
    {
        return pyopencv_MergeMertens_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::MergeMertens>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::MergeMertens> * dst_;
        if (pyopencv_MergeMertens_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::MergeMertens> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// MergeRobertson (Generic)
//================================================================================

// GetSet (MergeRobertson)



// Methods (MergeRobertson)

static PyObject* pyopencv_cv_MergeRobertson_process(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::MergeRobertson> * self1 = 0;
    if (!pyopencv_MergeRobertson_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'MergeRobertson' or its derivative)");
    Ptr<cv::MergeRobertson> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;
    PyObject* pyobj_response = NULL;
    Mat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;
    PyObject* pyobj_response = NULL;
    UMat response;

    const char* keywords[] = { "src", "times", "response", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_response, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) &&
        pyopencv_to_safe(pyobj_response, response, ArgInfo("response", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times, response));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_times = NULL;
    Mat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    vector_UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_times = NULL;
    UMat times;

    const char* keywords[] = { "src", "times", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:MergeRobertson.process", (char**)keywords, &pyobj_src, &pyobj_times, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_times, times, ArgInfo("times", 0)) )
    {
        ERRWRAP2(_self_->process(src, dst, times));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("process");

    return NULL;
}



// Tables (MergeRobertson)

static PyGetSetDef pyopencv_MergeRobertson_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_MergeRobertson_methods[] =
{
    {"process", CV_PY_FN_WITH_KW_(pyopencv_cv_MergeRobertson_process, 0), "process(src, times, response[, dst]) -> dst\n.   \n\n\n\nprocess(src, times[, dst]) -> dst\n."},

    {NULL,          NULL}
};

// Converter (MergeRobertson)

template<>
struct PyOpenCV_Converter< Ptr<cv::MergeRobertson> >
{
    static PyObject* from(const Ptr<cv::MergeRobertson>& r)
    {
        return pyopencv_MergeRobertson_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::MergeRobertson>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::MergeRobertson> * dst_;
        if (pyopencv_MergeRobertson_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::MergeRobertson> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// Moments (Map)
//================================================================================
static bool pyopencv_to(PyObject* src, cv::Moments& dst, const ArgInfo& info)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"m00") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m00");
        ok = tmp && pyopencv_to_safe(tmp, dst.m00, ArgInfo("m00", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m10") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m10");
        ok = tmp && pyopencv_to_safe(tmp, dst.m10, ArgInfo("m10", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m01") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m01");
        ok = tmp && pyopencv_to_safe(tmp, dst.m01, ArgInfo("m01", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m20");
        ok = tmp && pyopencv_to_safe(tmp, dst.m20, ArgInfo("m20", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m11");
        ok = tmp && pyopencv_to_safe(tmp, dst.m11, ArgInfo("m11", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m02");
        ok = tmp && pyopencv_to_safe(tmp, dst.m02, ArgInfo("m02", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m30");
        ok = tmp && pyopencv_to_safe(tmp, dst.m30, ArgInfo("m30", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m21");
        ok = tmp && pyopencv_to_safe(tmp, dst.m21, ArgInfo("m21", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m12");
        ok = tmp && pyopencv_to_safe(tmp, dst.m12, ArgInfo("m12", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"m03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"m03");
        ok = tmp && pyopencv_to_safe(tmp, dst.m03, ArgInfo("m03", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu20");
        ok = tmp && pyopencv_to_safe(tmp, dst.mu20, ArgInfo("mu20", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu11");
        ok = tmp && pyopencv_to_safe(tmp, dst.mu11, ArgInfo("mu11", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu02");
        ok = tmp && pyopencv_to_safe(tmp, dst.mu02, ArgInfo("mu02", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu30");
        ok = tmp && pyopencv_to_safe(tmp, dst.mu30, ArgInfo("mu30", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu21");
        ok = tmp && pyopencv_to_safe(tmp, dst.mu21, ArgInfo("mu21", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu12");
        ok = tmp && pyopencv_to_safe(tmp, dst.mu12, ArgInfo("mu12", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"mu03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"mu03");
        ok = tmp && pyopencv_to_safe(tmp, dst.mu03, ArgInfo("mu03", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu20") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu20");
        ok = tmp && pyopencv_to_safe(tmp, dst.nu20, ArgInfo("nu20", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu11") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu11");
        ok = tmp && pyopencv_to_safe(tmp, dst.nu11, ArgInfo("nu11", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu02") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu02");
        ok = tmp && pyopencv_to_safe(tmp, dst.nu02, ArgInfo("nu02", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu30") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu30");
        ok = tmp && pyopencv_to_safe(tmp, dst.nu30, ArgInfo("nu30", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu21") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu21");
        ok = tmp && pyopencv_to_safe(tmp, dst.nu21, ArgInfo("nu21", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu12") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu12");
        ok = tmp && pyopencv_to_safe(tmp, dst.nu12, ArgInfo("nu12", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"nu03") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"nu03");
        ok = tmp && pyopencv_to_safe(tmp, dst.nu03, ArgInfo("nu03", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

template<> bool pyopencv_to(PyObject* src, cv::Moments& dst, const ArgInfo& info);

//================================================================================
// ORB (Generic)
//================================================================================

// GetSet (ORB)



// Methods (ORB)

static PyObject* pyopencv_cv_ORB_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_nfeatures = NULL;
    int nfeatures=500;
    PyObject* pyobj_scaleFactor = NULL;
    float scaleFactor=1.2f;
    PyObject* pyobj_nlevels = NULL;
    int nlevels=8;
    PyObject* pyobj_edgeThreshold = NULL;
    int edgeThreshold=31;
    PyObject* pyobj_firstLevel = NULL;
    int firstLevel=0;
    PyObject* pyobj_WTA_K = NULL;
    int WTA_K=2;
    PyObject* pyobj_scoreType = NULL;
    ORB_ScoreType scoreType=ORB::HARRIS_SCORE;
    PyObject* pyobj_patchSize = NULL;
    int patchSize=31;
    PyObject* pyobj_fastThreshold = NULL;
    int fastThreshold=20;
    Ptr<ORB> retval;

    const char* keywords[] = { "nfeatures", "scaleFactor", "nlevels", "edgeThreshold", "firstLevel", "WTA_K", "scoreType", "patchSize", "fastThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOOOOOOOO:ORB.create", (char**)keywords, &pyobj_nfeatures, &pyobj_scaleFactor, &pyobj_nlevels, &pyobj_edgeThreshold, &pyobj_firstLevel, &pyobj_WTA_K, &pyobj_scoreType, &pyobj_patchSize, &pyobj_fastThreshold) &&
        pyopencv_to_safe(pyobj_nfeatures, nfeatures, ArgInfo("nfeatures", 0)) &&
        pyopencv_to_safe(pyobj_scaleFactor, scaleFactor, ArgInfo("scaleFactor", 0)) &&
        pyopencv_to_safe(pyobj_nlevels, nlevels, ArgInfo("nlevels", 0)) &&
        pyopencv_to_safe(pyobj_edgeThreshold, edgeThreshold, ArgInfo("edgeThreshold", 0)) &&
        pyopencv_to_safe(pyobj_firstLevel, firstLevel, ArgInfo("firstLevel", 0)) &&
        pyopencv_to_safe(pyobj_WTA_K, WTA_K, ArgInfo("WTA_K", 0)) &&
        pyopencv_to_safe(pyobj_scoreType, scoreType, ArgInfo("scoreType", 0)) &&
        pyopencv_to_safe(pyobj_patchSize, patchSize, ArgInfo("patchSize", 0)) &&
        pyopencv_to_safe(pyobj_fastThreshold, fastThreshold, ArgInfo("fastThreshold", 0)) )
    {
        ERRWRAP2(retval = cv::ORB::create(nfeatures, scaleFactor, nlevels, edgeThreshold, firstLevel, WTA_K, scoreType, patchSize, fastThreshold));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getEdgeThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getEdgeThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getFastThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFastThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getFirstLevel(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFirstLevel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getMaxFeatures(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxFeatures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getNLevels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNLevels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getPatchSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getPatchSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getScaleFactor(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScaleFactor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getScoreType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    ORB::ScoreType retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScoreType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_getWTA_K(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWTA_K());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setEdgeThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    PyObject* pyobj_edgeThreshold = NULL;
    int edgeThreshold=0;

    const char* keywords[] = { "edgeThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ORB.setEdgeThreshold", (char**)keywords, &pyobj_edgeThreshold) &&
        pyopencv_to_safe(pyobj_edgeThreshold, edgeThreshold, ArgInfo("edgeThreshold", 0)) )
    {
        ERRWRAP2(_self_->setEdgeThreshold(edgeThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setFastThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    PyObject* pyobj_fastThreshold = NULL;
    int fastThreshold=0;

    const char* keywords[] = { "fastThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ORB.setFastThreshold", (char**)keywords, &pyobj_fastThreshold) &&
        pyopencv_to_safe(pyobj_fastThreshold, fastThreshold, ArgInfo("fastThreshold", 0)) )
    {
        ERRWRAP2(_self_->setFastThreshold(fastThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setFirstLevel(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    PyObject* pyobj_firstLevel = NULL;
    int firstLevel=0;

    const char* keywords[] = { "firstLevel", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ORB.setFirstLevel", (char**)keywords, &pyobj_firstLevel) &&
        pyopencv_to_safe(pyobj_firstLevel, firstLevel, ArgInfo("firstLevel", 0)) )
    {
        ERRWRAP2(_self_->setFirstLevel(firstLevel));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setMaxFeatures(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    PyObject* pyobj_maxFeatures = NULL;
    int maxFeatures=0;

    const char* keywords[] = { "maxFeatures", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ORB.setMaxFeatures", (char**)keywords, &pyobj_maxFeatures) &&
        pyopencv_to_safe(pyobj_maxFeatures, maxFeatures, ArgInfo("maxFeatures", 0)) )
    {
        ERRWRAP2(_self_->setMaxFeatures(maxFeatures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setNLevels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    PyObject* pyobj_nlevels = NULL;
    int nlevels=0;

    const char* keywords[] = { "nlevels", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ORB.setNLevels", (char**)keywords, &pyobj_nlevels) &&
        pyopencv_to_safe(pyobj_nlevels, nlevels, ArgInfo("nlevels", 0)) )
    {
        ERRWRAP2(_self_->setNLevels(nlevels));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setPatchSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    PyObject* pyobj_patchSize = NULL;
    int patchSize=0;

    const char* keywords[] = { "patchSize", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ORB.setPatchSize", (char**)keywords, &pyobj_patchSize) &&
        pyopencv_to_safe(pyobj_patchSize, patchSize, ArgInfo("patchSize", 0)) )
    {
        ERRWRAP2(_self_->setPatchSize(patchSize));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setScaleFactor(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    PyObject* pyobj_scaleFactor = NULL;
    double scaleFactor=0;

    const char* keywords[] = { "scaleFactor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ORB.setScaleFactor", (char**)keywords, &pyobj_scaleFactor) &&
        pyopencv_to_safe(pyobj_scaleFactor, scaleFactor, ArgInfo("scaleFactor", 0)) )
    {
        ERRWRAP2(_self_->setScaleFactor(scaleFactor));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setScoreType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    PyObject* pyobj_scoreType = NULL;
    ORB_ScoreType scoreType=static_cast<ORB_ScoreType>(0);

    const char* keywords[] = { "scoreType", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ORB.setScoreType", (char**)keywords, &pyobj_scoreType) &&
        pyopencv_to_safe(pyobj_scoreType, scoreType, ArgInfo("scoreType", 0)) )
    {
        ERRWRAP2(_self_->setScoreType(scoreType));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_ORB_setWTA_K(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::ORB> * self1 = 0;
    if (!pyopencv_ORB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ORB' or its derivative)");
    Ptr<cv::ORB> _self_ = *(self1);
    PyObject* pyobj_wta_k = NULL;
    int wta_k=0;

    const char* keywords[] = { "wta_k", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ORB.setWTA_K", (char**)keywords, &pyobj_wta_k) &&
        pyopencv_to_safe(pyobj_wta_k, wta_k, ArgInfo("wta_k", 0)) )
    {
        ERRWRAP2(_self_->setWTA_K(wta_k));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (ORB)

static PyGetSetDef pyopencv_ORB_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ORB_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_create_static, METH_STATIC), "create([, nfeatures[, scaleFactor[, nlevels[, edgeThreshold[, firstLevel[, WTA_K[, scoreType[, patchSize[, fastThreshold]]]]]]]]]) -> retval\n.   @brief The ORB constructor\n.   \n.       @param nfeatures The maximum number of features to retain.\n.       @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical\n.       pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor\n.       will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor\n.       will mean that to cover certain scale range you will need more pyramid levels and so the speed\n.       will suffer.\n.       @param nlevels The number of pyramid levels. The smallest level will have linear size equal to\n.       input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).\n.       @param edgeThreshold This is size of the border where the features are not detected. It should\n.       roughly match the patchSize parameter.\n.       @param firstLevel The level of pyramid to put source image to. Previous layers are filled\n.       with upscaled source image.\n.       @param WTA_K The number of points that produce each element of the oriented BRIEF descriptor. The\n.       default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,\n.       so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3\n.       random points (of course, those point coordinates are random, but they are generated from the\n.       pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel\n.       rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such\n.       output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,\n.       denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each\n.       bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).\n.       @param scoreType The default HARRIS_SCORE means that Harris algorithm is used to rank features\n.       (the score is written to KeyPoint::score and is used to retain best nfeatures features);\n.       FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,\n.       but it is a little faster to compute.\n.       @param patchSize size of the patch used by the oriented BRIEF descriptor. Of course, on smaller\n.       pyramid layers the perceived image area covered by a feature will be larger.\n.       @param fastThreshold the fast threshold"},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getEdgeThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getEdgeThreshold, 0), "getEdgeThreshold() -> retval\n."},
    {"getFastThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getFastThreshold, 0), "getFastThreshold() -> retval\n."},
    {"getFirstLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getFirstLevel, 0), "getFirstLevel() -> retval\n."},
    {"getMaxFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getMaxFeatures, 0), "getMaxFeatures() -> retval\n."},
    {"getNLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getNLevels, 0), "getNLevels() -> retval\n."},
    {"getPatchSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getPatchSize, 0), "getPatchSize() -> retval\n."},
    {"getScaleFactor", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getScaleFactor, 0), "getScaleFactor() -> retval\n."},
    {"getScoreType", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getScoreType, 0), "getScoreType() -> retval\n."},
    {"getWTA_K", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_getWTA_K, 0), "getWTA_K() -> retval\n."},
    {"setEdgeThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setEdgeThreshold, 0), "setEdgeThreshold(edgeThreshold) -> None\n."},
    {"setFastThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setFastThreshold, 0), "setFastThreshold(fastThreshold) -> None\n."},
    {"setFirstLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setFirstLevel, 0), "setFirstLevel(firstLevel) -> None\n."},
    {"setMaxFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setMaxFeatures, 0), "setMaxFeatures(maxFeatures) -> None\n."},
    {"setNLevels", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setNLevels, 0), "setNLevels(nlevels) -> None\n."},
    {"setPatchSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setPatchSize, 0), "setPatchSize(patchSize) -> None\n."},
    {"setScaleFactor", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setScaleFactor, 0), "setScaleFactor(scaleFactor) -> None\n."},
    {"setScoreType", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setScoreType, 0), "setScoreType(scoreType) -> None\n."},
    {"setWTA_K", CV_PY_FN_WITH_KW_(pyopencv_cv_ORB_setWTA_K, 0), "setWTA_K(wta_k) -> None\n."},

    {NULL,          NULL}
};

// Converter (ORB)

template<>
struct PyOpenCV_Converter< Ptr<cv::ORB> >
{
    static PyObject* from(const Ptr<cv::ORB>& r)
    {
        return pyopencv_ORB_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ORB>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ORB> * dst_;
        if (pyopencv_ORB_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ORB> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// RotatedRect (Generic)
//================================================================================

// GetSet (RotatedRect)


static PyObject* pyopencv_RotatedRect_get_angle(pyopencv_RotatedRect_t* p, void *closure)
{
    return pyopencv_from(p->v.angle);
}

static int pyopencv_RotatedRect_set_angle(pyopencv_RotatedRect_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the angle attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.angle, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_RotatedRect_get_center(pyopencv_RotatedRect_t* p, void *closure)
{
    return pyopencv_from(p->v.center);
}

static int pyopencv_RotatedRect_set_center(pyopencv_RotatedRect_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the center attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.center, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_RotatedRect_get_size(pyopencv_RotatedRect_t* p, void *closure)
{
    return pyopencv_from(p->v.size);
}

static int pyopencv_RotatedRect_set_size(pyopencv_RotatedRect_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the size attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.size, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (RotatedRect)

static int pyopencv_cv_RotatedRect_RotatedRect(pyopencv_RotatedRect_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(3);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::RotatedRect());
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_center = NULL;
    Point2f center;
    PyObject* pyobj_size = NULL;
    Size2f size;
    PyObject* pyobj_angle = NULL;
    float angle=0.f;

    const char* keywords[] = { "center", "size", "angle", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:RotatedRect", (char**)keywords, &pyobj_center, &pyobj_size, &pyobj_angle) &&
        pyopencv_to_safe(pyobj_center, center, ArgInfo("center", 0)) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_angle, angle, ArgInfo("angle", 0)) )
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::RotatedRect(center, size, angle));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_point1 = NULL;
    Point2f point1;
    PyObject* pyobj_point2 = NULL;
    Point2f point2;
    PyObject* pyobj_point3 = NULL;
    Point2f point3;

    const char* keywords[] = { "point1", "point2", "point3", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:RotatedRect", (char**)keywords, &pyobj_point1, &pyobj_point2, &pyobj_point3) &&
        pyopencv_to_safe(pyobj_point1, point1, ArgInfo("point1", 0)) &&
        pyopencv_to_safe(pyobj_point2, point2, ArgInfo("point2", 0)) &&
        pyopencv_to_safe(pyobj_point3, point3, ArgInfo("point3", 0)) )
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::RotatedRect(point1, point2, point3));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("RotatedRect");

    return -1;
}

static PyObject* pyopencv_cv_RotatedRect_boundingRect(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::RotatedRect * self1 = 0;
    if (!pyopencv_RotatedRect_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'RotatedRect' or its derivative)");
    cv::RotatedRect* _self_ = (self1);
    Rect retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->boundingRect());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_RotatedRect_points(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    cv::RotatedRect * self1 = 0;
    if (!pyopencv_RotatedRect_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'RotatedRect' or its derivative)");
    cv::RotatedRect* _self_ = (self1);
    vector_Point2f pts;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->points(pts));
        return pyopencv_from(pts);
    }

    return NULL;
}



// Tables (RotatedRect)

static PyGetSetDef pyopencv_RotatedRect_getseters[] =
{
    {(char*)"angle", (getter)pyopencv_RotatedRect_get_angle, (setter)pyopencv_RotatedRect_set_angle, (char*)"angle", NULL},
    {(char*)"center", (getter)pyopencv_RotatedRect_get_center, (setter)pyopencv_RotatedRect_set_center, (char*)"center", NULL},
    {(char*)"size", (getter)pyopencv_RotatedRect_get_size, (setter)pyopencv_RotatedRect_set_size, (char*)"size", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_RotatedRect_methods[] =
{
    {"boundingRect", CV_PY_FN_WITH_KW_(pyopencv_cv_RotatedRect_boundingRect, 0), "boundingRect() -> retval\n."},
    {"points", CV_PY_FN_WITH_KW_(pyopencv_cv_RotatedRect_points, 0), "points() -> pts\n.   returns 4 vertices of the rotated rectangle\n.       @param pts The points array for storing rectangle vertices. The order is _bottomLeft_, _topLeft_, topRight, bottomRight.\n.       @note _Bottom_, _Top_, _Left_ and _Right_ sides refer to the original rectangle (angle is 0),\n.       so after 180 degree rotation _bottomLeft_ point will be located at the top right corner of the\n.       rectangle."},

    {NULL,          NULL}
};

// Converter (RotatedRect)

template<>
struct PyOpenCV_Converter< cv::RotatedRect >
{
    static PyObject* from(const cv::RotatedRect& r)
    {
        return pyopencv_RotatedRect_Instance(r);
    }
    static bool to(PyObject* src, cv::RotatedRect& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::RotatedRect * dst_;
        if (pyopencv_RotatedRect_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::RotatedRect for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// SIFT (Generic)
//================================================================================

// GetSet (SIFT)



// Methods (SIFT)

static PyObject* pyopencv_cv_SIFT_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_nfeatures = NULL;
    int nfeatures=0;
    PyObject* pyobj_nOctaveLayers = NULL;
    int nOctaveLayers=3;
    PyObject* pyobj_contrastThreshold = NULL;
    double contrastThreshold=0.04;
    PyObject* pyobj_edgeThreshold = NULL;
    double edgeThreshold=10;
    PyObject* pyobj_sigma = NULL;
    double sigma=1.6;
    PyObject* pyobj_enable_precise_upscale = NULL;
    bool enable_precise_upscale=false;
    Ptr<SIFT> retval;

    const char* keywords[] = { "nfeatures", "nOctaveLayers", "contrastThreshold", "edgeThreshold", "sigma", "enable_precise_upscale", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOOOOO:SIFT.create", (char**)keywords, &pyobj_nfeatures, &pyobj_nOctaveLayers, &pyobj_contrastThreshold, &pyobj_edgeThreshold, &pyobj_sigma, &pyobj_enable_precise_upscale) &&
        pyopencv_to_safe(pyobj_nfeatures, nfeatures, ArgInfo("nfeatures", 0)) &&
        pyopencv_to_safe(pyobj_nOctaveLayers, nOctaveLayers, ArgInfo("nOctaveLayers", 0)) &&
        pyopencv_to_safe(pyobj_contrastThreshold, contrastThreshold, ArgInfo("contrastThreshold", 0)) &&
        pyopencv_to_safe(pyobj_edgeThreshold, edgeThreshold, ArgInfo("edgeThreshold", 0)) &&
        pyopencv_to_safe(pyobj_sigma, sigma, ArgInfo("sigma", 0)) &&
        pyopencv_to_safe(pyobj_enable_precise_upscale, enable_precise_upscale, ArgInfo("enable_precise_upscale", 0)) )
    {
        ERRWRAP2(retval = cv::SIFT::create(nfeatures, nOctaveLayers, contrastThreshold, edgeThreshold, sigma, enable_precise_upscale));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_nfeatures = NULL;
    int nfeatures=0;
    PyObject* pyobj_nOctaveLayers = NULL;
    int nOctaveLayers=0;
    PyObject* pyobj_contrastThreshold = NULL;
    double contrastThreshold=0;
    PyObject* pyobj_edgeThreshold = NULL;
    double edgeThreshold=0;
    PyObject* pyobj_sigma = NULL;
    double sigma=0;
    PyObject* pyobj_descriptorType = NULL;
    int descriptorType=0;
    PyObject* pyobj_enable_precise_upscale = NULL;
    bool enable_precise_upscale=false;
    Ptr<SIFT> retval;

    const char* keywords[] = { "nfeatures", "nOctaveLayers", "contrastThreshold", "edgeThreshold", "sigma", "descriptorType", "enable_precise_upscale", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOOOO|O:SIFT.create", (char**)keywords, &pyobj_nfeatures, &pyobj_nOctaveLayers, &pyobj_contrastThreshold, &pyobj_edgeThreshold, &pyobj_sigma, &pyobj_descriptorType, &pyobj_enable_precise_upscale) &&
        pyopencv_to_safe(pyobj_nfeatures, nfeatures, ArgInfo("nfeatures", 0)) &&
        pyopencv_to_safe(pyobj_nOctaveLayers, nOctaveLayers, ArgInfo("nOctaveLayers", 0)) &&
        pyopencv_to_safe(pyobj_contrastThreshold, contrastThreshold, ArgInfo("contrastThreshold", 0)) &&
        pyopencv_to_safe(pyobj_edgeThreshold, edgeThreshold, ArgInfo("edgeThreshold", 0)) &&
        pyopencv_to_safe(pyobj_sigma, sigma, ArgInfo("sigma", 0)) &&
        pyopencv_to_safe(pyobj_descriptorType, descriptorType, ArgInfo("descriptorType", 0)) &&
        pyopencv_to_safe(pyobj_enable_precise_upscale, enable_precise_upscale, ArgInfo("enable_precise_upscale", 0)) )
    {
        ERRWRAP2(retval = cv::SIFT::create(nfeatures, nOctaveLayers, contrastThreshold, edgeThreshold, sigma, descriptorType, enable_precise_upscale));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("create");

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_getContrastThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getContrastThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_getEdgeThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getEdgeThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_getNFeatures(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNFeatures());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_getNOctaveLayers(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getNOctaveLayers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_getSigma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSigma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_setContrastThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    PyObject* pyobj_contrastThreshold = NULL;
    double contrastThreshold=0;

    const char* keywords[] = { "contrastThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SIFT.setContrastThreshold", (char**)keywords, &pyobj_contrastThreshold) &&
        pyopencv_to_safe(pyobj_contrastThreshold, contrastThreshold, ArgInfo("contrastThreshold", 0)) )
    {
        ERRWRAP2(_self_->setContrastThreshold(contrastThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_setEdgeThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    PyObject* pyobj_edgeThreshold = NULL;
    double edgeThreshold=0;

    const char* keywords[] = { "edgeThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SIFT.setEdgeThreshold", (char**)keywords, &pyobj_edgeThreshold) &&
        pyopencv_to_safe(pyobj_edgeThreshold, edgeThreshold, ArgInfo("edgeThreshold", 0)) )
    {
        ERRWRAP2(_self_->setEdgeThreshold(edgeThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_setNFeatures(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    PyObject* pyobj_maxFeatures = NULL;
    int maxFeatures=0;

    const char* keywords[] = { "maxFeatures", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SIFT.setNFeatures", (char**)keywords, &pyobj_maxFeatures) &&
        pyopencv_to_safe(pyobj_maxFeatures, maxFeatures, ArgInfo("maxFeatures", 0)) )
    {
        ERRWRAP2(_self_->setNFeatures(maxFeatures));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_setNOctaveLayers(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    PyObject* pyobj_nOctaveLayers = NULL;
    int nOctaveLayers=0;

    const char* keywords[] = { "nOctaveLayers", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SIFT.setNOctaveLayers", (char**)keywords, &pyobj_nOctaveLayers) &&
        pyopencv_to_safe(pyobj_nOctaveLayers, nOctaveLayers, ArgInfo("nOctaveLayers", 0)) )
    {
        ERRWRAP2(_self_->setNOctaveLayers(nOctaveLayers));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SIFT_setSigma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SIFT> * self1 = 0;
    if (!pyopencv_SIFT_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SIFT' or its derivative)");
    Ptr<cv::SIFT> _self_ = *(self1);
    PyObject* pyobj_sigma = NULL;
    double sigma=0;

    const char* keywords[] = { "sigma", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SIFT.setSigma", (char**)keywords, &pyobj_sigma) &&
        pyopencv_to_safe(pyobj_sigma, sigma, ArgInfo("sigma", 0)) )
    {
        ERRWRAP2(_self_->setSigma(sigma));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (SIFT)

static PyGetSetDef pyopencv_SIFT_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_SIFT_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_create_static, METH_STATIC), "create([, nfeatures[, nOctaveLayers[, contrastThreshold[, edgeThreshold[, sigma[, enable_precise_upscale]]]]]]) -> retval\n.   @param nfeatures The number of best features to retain. The features are ranked by their scores\n.       (measured in SIFT algorithm as the local contrast)\n.   \n.       @param nOctaveLayers The number of layers in each octave. 3 is the value used in D. Lowe paper. The\n.       number of octaves is computed automatically from the image resolution.\n.   \n.       @param contrastThreshold The contrast threshold used to filter out weak features in semi-uniform\n.       (low-contrast) regions. The larger the threshold, the less features are produced by the detector.\n.   \n.       @note The contrast threshold will be divided by nOctaveLayers when the filtering is applied. When\n.       nOctaveLayers is set to default and if you want to use the value used in D. Lowe paper, 0.03, set\n.       this argument to 0.09.\n.   \n.       @param edgeThreshold The threshold used to filter out edge-like features. Note that the its meaning\n.       is different from the contrastThreshold, i.e. the larger the edgeThreshold, the less features are\n.       filtered out (more features are retained).\n.   \n.       @param sigma The sigma of the Gaussian applied to the input image at the octave \\#0. If your image\n.       is captured with a weak camera with soft lenses, you might want to reduce the number.\n.   \n.       @param enable_precise_upscale Whether to enable precise upscaling in the scale pyramid, which maps\n.       index \\f$\\texttt{x}\\f$ to \\f$\\texttt{2x}\\f$. This prevents localization bias. The option\n.       is disabled by default.\n\n\n\ncreate(nfeatures, nOctaveLayers, contrastThreshold, edgeThreshold, sigma, descriptorType[, enable_precise_upscale]) -> retval\n.   @brief Create SIFT with specified descriptorType.\n.       @param nfeatures The number of best features to retain. The features are ranked by their scores\n.       (measured in SIFT algorithm as the local contrast)\n.   \n.       @param nOctaveLayers The number of layers in each octave. 3 is the value used in D. Lowe paper. The\n.       number of octaves is computed automatically from the image resolution.\n.   \n.       @param contrastThreshold The contrast threshold used to filter out weak features in semi-uniform\n.       (low-contrast) regions. The larger the threshold, the less features are produced by the detector.\n.   \n.       @note The contrast threshold will be divided by nOctaveLayers when the filtering is applied. When\n.       nOctaveLayers is set to default and if you want to use the value used in D. Lowe paper, 0.03, set\n.       this argument to 0.09.\n.   \n.       @param edgeThreshold The threshold used to filter out edge-like features. Note that the its meaning\n.       is different from the contrastThreshold, i.e. the larger the edgeThreshold, the less features are\n.       filtered out (more features are retained).\n.   \n.       @param sigma The sigma of the Gaussian applied to the input image at the octave \\#0. If your image\n.       is captured with a weak camera with soft lenses, you might want to reduce the number.\n.   \n.       @param descriptorType The type of descriptors. Only CV_32F and CV_8U are supported.\n.   \n.       @param enable_precise_upscale Whether to enable precise upscaling in the scale pyramid, which maps\n.       index \\f$\\texttt{x}\\f$ to \\f$\\texttt{2x}\\f$. This prevents localization bias. The option\n.       is disabled by default."},
    {"getContrastThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_getContrastThreshold, 0), "getContrastThreshold() -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getEdgeThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_getEdgeThreshold, 0), "getEdgeThreshold() -> retval\n."},
    {"getNFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_getNFeatures, 0), "getNFeatures() -> retval\n."},
    {"getNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_getNOctaveLayers, 0), "getNOctaveLayers() -> retval\n."},
    {"getSigma", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_getSigma, 0), "getSigma() -> retval\n."},
    {"setContrastThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_setContrastThreshold, 0), "setContrastThreshold(contrastThreshold) -> None\n."},
    {"setEdgeThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_setEdgeThreshold, 0), "setEdgeThreshold(edgeThreshold) -> None\n."},
    {"setNFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_setNFeatures, 0), "setNFeatures(maxFeatures) -> None\n."},
    {"setNOctaveLayers", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_setNOctaveLayers, 0), "setNOctaveLayers(nOctaveLayers) -> None\n."},
    {"setSigma", CV_PY_FN_WITH_KW_(pyopencv_cv_SIFT_setSigma, 0), "setSigma(sigma) -> None\n."},

    {NULL,          NULL}
};

// Converter (SIFT)

template<>
struct PyOpenCV_Converter< Ptr<cv::SIFT> >
{
    static PyObject* from(const Ptr<cv::SIFT>& r)
    {
        return pyopencv_SIFT_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::SIFT>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::SIFT> * dst_;
        if (pyopencv_SIFT_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::SIFT> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// SimpleBlobDetector (Generic)
//================================================================================

// GetSet (SimpleBlobDetector)



// Methods (SimpleBlobDetector)

static PyObject* pyopencv_cv_SimpleBlobDetector_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_parameters = NULL;
    cv::SimpleBlobDetector::Params parameters=SimpleBlobDetector::Params();
    Ptr<SimpleBlobDetector> retval;

    const char* keywords[] = { "parameters", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:SimpleBlobDetector.create", (char**)keywords, &pyobj_parameters) &&
        pyopencv_to_safe(pyobj_parameters, parameters, ArgInfo("parameters", 0)) )
    {
        ERRWRAP2(retval = cv::SimpleBlobDetector::create(parameters));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SimpleBlobDetector_getBlobContours(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SimpleBlobDetector> * self1 = 0;
    if (!pyopencv_SimpleBlobDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SimpleBlobDetector' or its derivative)");
    Ptr<cv::SimpleBlobDetector> _self_ = *(self1);
    std::vector<std::vector<cv::Point> > retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBlobContours());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SimpleBlobDetector_getDefaultName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SimpleBlobDetector> * self1 = 0;
    if (!pyopencv_SimpleBlobDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SimpleBlobDetector' or its derivative)");
    Ptr<cv::SimpleBlobDetector> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDefaultName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SimpleBlobDetector_getParams(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SimpleBlobDetector> * self1 = 0;
    if (!pyopencv_SimpleBlobDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SimpleBlobDetector' or its derivative)");
    Ptr<cv::SimpleBlobDetector> _self_ = *(self1);
    SimpleBlobDetector::Params retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getParams());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SimpleBlobDetector_setParams(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SimpleBlobDetector> * self1 = 0;
    if (!pyopencv_SimpleBlobDetector_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SimpleBlobDetector' or its derivative)");
    Ptr<cv::SimpleBlobDetector> _self_ = *(self1);
    PyObject* pyobj_params = NULL;
    cv::SimpleBlobDetector::Params params;

    const char* keywords[] = { "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SimpleBlobDetector.setParams", (char**)keywords, &pyobj_params) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(_self_->setParams(params));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (SimpleBlobDetector)

static PyGetSetDef pyopencv_SimpleBlobDetector_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_SimpleBlobDetector_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_SimpleBlobDetector_create_static, METH_STATIC), "create([, parameters]) -> retval\n."},
    {"getBlobContours", CV_PY_FN_WITH_KW_(pyopencv_cv_SimpleBlobDetector_getBlobContours, 0), "getBlobContours() -> retval\n."},
    {"getDefaultName", CV_PY_FN_WITH_KW_(pyopencv_cv_SimpleBlobDetector_getDefaultName, 0), "getDefaultName() -> retval\n."},
    {"getParams", CV_PY_FN_WITH_KW_(pyopencv_cv_SimpleBlobDetector_getParams, 0), "getParams() -> retval\n."},
    {"setParams", CV_PY_FN_WITH_KW_(pyopencv_cv_SimpleBlobDetector_setParams, 0), "setParams(params) -> None\n."},

    {NULL,          NULL}
};

// Converter (SimpleBlobDetector)

template<>
struct PyOpenCV_Converter< Ptr<cv::SimpleBlobDetector> >
{
    static PyObject* from(const Ptr<cv::SimpleBlobDetector>& r)
    {
        return pyopencv_SimpleBlobDetector_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::SimpleBlobDetector>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::SimpleBlobDetector> * dst_;
        if (pyopencv_SimpleBlobDetector_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::SimpleBlobDetector> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// SimpleBlobDetector_Params (Generic)
//================================================================================

// GetSet (SimpleBlobDetector_Params)


static PyObject* pyopencv_SimpleBlobDetector_Params_get_blobColor(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.blobColor);
}

static int pyopencv_SimpleBlobDetector_Params_set_blobColor(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the blobColor attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.blobColor, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_collectContours(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.collectContours);
}

static int pyopencv_SimpleBlobDetector_Params_set_collectContours(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the collectContours attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.collectContours, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByArea attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.filterByArea, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByCircularity attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.filterByCircularity, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByColor(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByColor);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByColor(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByColor attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.filterByColor, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByConvexity attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.filterByConvexity, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_filterByInertia(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.filterByInertia);
}

static int pyopencv_SimpleBlobDetector_Params_set_filterByInertia(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the filterByInertia attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.filterByInertia, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxArea attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.maxArea, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxCircularity attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.maxCircularity, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxConvexity attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.maxConvexity, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxInertiaRatio);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxInertiaRatio attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.maxInertiaRatio, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_maxThreshold(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.maxThreshold);
}

static int pyopencv_SimpleBlobDetector_Params_set_maxThreshold(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the maxThreshold attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.maxThreshold, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minArea(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minArea);
}

static int pyopencv_SimpleBlobDetector_Params_set_minArea(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minArea attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.minArea, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minCircularity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minCircularity);
}

static int pyopencv_SimpleBlobDetector_Params_set_minCircularity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minCircularity attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.minCircularity, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minConvexity(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minConvexity);
}

static int pyopencv_SimpleBlobDetector_Params_set_minConvexity(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minConvexity attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.minConvexity, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minDistBetweenBlobs(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minDistBetweenBlobs);
}

static int pyopencv_SimpleBlobDetector_Params_set_minDistBetweenBlobs(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minDistBetweenBlobs attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.minDistBetweenBlobs, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minInertiaRatio);
}

static int pyopencv_SimpleBlobDetector_Params_set_minInertiaRatio(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minInertiaRatio attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.minInertiaRatio, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minRepeatability(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minRepeatability);
}

static int pyopencv_SimpleBlobDetector_Params_set_minRepeatability(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minRepeatability attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.minRepeatability, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_minThreshold(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.minThreshold);
}

static int pyopencv_SimpleBlobDetector_Params_set_minThreshold(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the minThreshold attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.minThreshold, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_SimpleBlobDetector_Params_get_thresholdStep(pyopencv_SimpleBlobDetector_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.thresholdStep);
}

static int pyopencv_SimpleBlobDetector_Params_set_thresholdStep(pyopencv_SimpleBlobDetector_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the thresholdStep attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.thresholdStep, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (SimpleBlobDetector_Params)

static int pyopencv_cv_SimpleBlobDetector_Params_SimpleBlobDetector_Params(pyopencv_SimpleBlobDetector_Params_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::SimpleBlobDetector::Params());
        return 0;
    }

    return -1;
}



// Tables (SimpleBlobDetector_Params)

static PyGetSetDef pyopencv_SimpleBlobDetector_Params_getseters[] =
{
    {(char*)"blobColor", (getter)pyopencv_SimpleBlobDetector_Params_get_blobColor, (setter)pyopencv_SimpleBlobDetector_Params_set_blobColor, (char*)"blobColor", NULL},
    {(char*)"collectContours", (getter)pyopencv_SimpleBlobDetector_Params_get_collectContours, (setter)pyopencv_SimpleBlobDetector_Params_set_collectContours, (char*)"collectContours", NULL},
    {(char*)"filterByArea", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByArea, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByArea, (char*)"filterByArea", NULL},
    {(char*)"filterByCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByCircularity, (char*)"filterByCircularity", NULL},
    {(char*)"filterByColor", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByColor, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByColor, (char*)"filterByColor", NULL},
    {(char*)"filterByConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByConvexity, (char*)"filterByConvexity", NULL},
    {(char*)"filterByInertia", (getter)pyopencv_SimpleBlobDetector_Params_get_filterByInertia, (setter)pyopencv_SimpleBlobDetector_Params_set_filterByInertia, (char*)"filterByInertia", NULL},
    {(char*)"maxArea", (getter)pyopencv_SimpleBlobDetector_Params_get_maxArea, (setter)pyopencv_SimpleBlobDetector_Params_set_maxArea, (char*)"maxArea", NULL},
    {(char*)"maxCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_maxCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_maxCircularity, (char*)"maxCircularity", NULL},
    {(char*)"maxConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_maxConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_maxConvexity, (char*)"maxConvexity", NULL},
    {(char*)"maxInertiaRatio", (getter)pyopencv_SimpleBlobDetector_Params_get_maxInertiaRatio, (setter)pyopencv_SimpleBlobDetector_Params_set_maxInertiaRatio, (char*)"maxInertiaRatio", NULL},
    {(char*)"maxThreshold", (getter)pyopencv_SimpleBlobDetector_Params_get_maxThreshold, (setter)pyopencv_SimpleBlobDetector_Params_set_maxThreshold, (char*)"maxThreshold", NULL},
    {(char*)"minArea", (getter)pyopencv_SimpleBlobDetector_Params_get_minArea, (setter)pyopencv_SimpleBlobDetector_Params_set_minArea, (char*)"minArea", NULL},
    {(char*)"minCircularity", (getter)pyopencv_SimpleBlobDetector_Params_get_minCircularity, (setter)pyopencv_SimpleBlobDetector_Params_set_minCircularity, (char*)"minCircularity", NULL},
    {(char*)"minConvexity", (getter)pyopencv_SimpleBlobDetector_Params_get_minConvexity, (setter)pyopencv_SimpleBlobDetector_Params_set_minConvexity, (char*)"minConvexity", NULL},
    {(char*)"minDistBetweenBlobs", (getter)pyopencv_SimpleBlobDetector_Params_get_minDistBetweenBlobs, (setter)pyopencv_SimpleBlobDetector_Params_set_minDistBetweenBlobs, (char*)"minDistBetweenBlobs", NULL},
    {(char*)"minInertiaRatio", (getter)pyopencv_SimpleBlobDetector_Params_get_minInertiaRatio, (setter)pyopencv_SimpleBlobDetector_Params_set_minInertiaRatio, (char*)"minInertiaRatio", NULL},
    {(char*)"minRepeatability", (getter)pyopencv_SimpleBlobDetector_Params_get_minRepeatability, (setter)pyopencv_SimpleBlobDetector_Params_set_minRepeatability, (char*)"minRepeatability", NULL},
    {(char*)"minThreshold", (getter)pyopencv_SimpleBlobDetector_Params_get_minThreshold, (setter)pyopencv_SimpleBlobDetector_Params_set_minThreshold, (char*)"minThreshold", NULL},
    {(char*)"thresholdStep", (getter)pyopencv_SimpleBlobDetector_Params_get_thresholdStep, (setter)pyopencv_SimpleBlobDetector_Params_set_thresholdStep, (char*)"thresholdStep", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_SimpleBlobDetector_Params_methods[] =
{

    {NULL,          NULL}
};

// Converter (SimpleBlobDetector_Params)

template<>
struct PyOpenCV_Converter< cv::SimpleBlobDetector::Params >
{
    static PyObject* from(const cv::SimpleBlobDetector::Params& r)
    {
        return pyopencv_SimpleBlobDetector_Params_Instance(r);
    }
    static bool to(PyObject* src, cv::SimpleBlobDetector::Params& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::SimpleBlobDetector::Params * dst_;
        if (pyopencv_SimpleBlobDetector_Params_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::SimpleBlobDetector::Params for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// SparseOpticalFlow (Generic)
//================================================================================

// GetSet (SparseOpticalFlow)



// Methods (SparseOpticalFlow)

static PyObject* pyopencv_cv_SparseOpticalFlow_calc(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparseOpticalFlow> * self1 = 0;
    if (!pyopencv_SparseOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparseOpticalFlow' or its derivative)");
    Ptr<cv::SparseOpticalFlow> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_prevImg = NULL;
    Mat prevImg;
    PyObject* pyobj_nextImg = NULL;
    Mat nextImg;
    PyObject* pyobj_prevPts = NULL;
    Mat prevPts;
    PyObject* pyobj_nextPts = NULL;
    Mat nextPts;
    PyObject* pyobj_status = NULL;
    Mat status;
    PyObject* pyobj_err = NULL;
    Mat err;

    const char* keywords[] = { "prevImg", "nextImg", "prevPts", "nextPts", "status", "err", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO|OO:SparseOpticalFlow.calc", (char**)keywords, &pyobj_prevImg, &pyobj_nextImg, &pyobj_prevPts, &pyobj_nextPts, &pyobj_status, &pyobj_err) &&
        pyopencv_to_safe(pyobj_prevImg, prevImg, ArgInfo("prevImg", 0)) &&
        pyopencv_to_safe(pyobj_nextImg, nextImg, ArgInfo("nextImg", 0)) &&
        pyopencv_to_safe(pyobj_prevPts, prevPts, ArgInfo("prevPts", 0)) &&
        pyopencv_to_safe(pyobj_nextPts, nextPts, ArgInfo("nextPts", 1)) &&
        pyopencv_to_safe(pyobj_status, status, ArgInfo("status", 1)) &&
        pyopencv_to_safe(pyobj_err, err, ArgInfo("err", 1)) )
    {
        ERRWRAP2(_self_->calc(prevImg, nextImg, prevPts, nextPts, status, err));
        return Py_BuildValue("(NNN)", pyopencv_from(nextPts), pyopencv_from(status), pyopencv_from(err));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_prevImg = NULL;
    UMat prevImg;
    PyObject* pyobj_nextImg = NULL;
    UMat nextImg;
    PyObject* pyobj_prevPts = NULL;
    UMat prevPts;
    PyObject* pyobj_nextPts = NULL;
    UMat nextPts;
    PyObject* pyobj_status = NULL;
    UMat status;
    PyObject* pyobj_err = NULL;
    UMat err;

    const char* keywords[] = { "prevImg", "nextImg", "prevPts", "nextPts", "status", "err", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO|OO:SparseOpticalFlow.calc", (char**)keywords, &pyobj_prevImg, &pyobj_nextImg, &pyobj_prevPts, &pyobj_nextPts, &pyobj_status, &pyobj_err) &&
        pyopencv_to_safe(pyobj_prevImg, prevImg, ArgInfo("prevImg", 0)) &&
        pyopencv_to_safe(pyobj_nextImg, nextImg, ArgInfo("nextImg", 0)) &&
        pyopencv_to_safe(pyobj_prevPts, prevPts, ArgInfo("prevPts", 0)) &&
        pyopencv_to_safe(pyobj_nextPts, nextPts, ArgInfo("nextPts", 1)) &&
        pyopencv_to_safe(pyobj_status, status, ArgInfo("status", 1)) &&
        pyopencv_to_safe(pyobj_err, err, ArgInfo("err", 1)) )
    {
        ERRWRAP2(_self_->calc(prevImg, nextImg, prevPts, nextPts, status, err));
        return Py_BuildValue("(NNN)", pyopencv_from(nextPts), pyopencv_from(status), pyopencv_from(err));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("calc");

    return NULL;
}



// Tables (SparseOpticalFlow)

static PyGetSetDef pyopencv_SparseOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_SparseOpticalFlow_methods[] =
{
    {"calc", CV_PY_FN_WITH_KW_(pyopencv_cv_SparseOpticalFlow_calc, 0), "calc(prevImg, nextImg, prevPts, nextPts[, status[, err]]) -> nextPts, status, err\n.   @brief Calculates a sparse optical flow.\n.   \n.       @param prevImg First input image.\n.       @param nextImg Second input image of the same size and the same type as prevImg.\n.       @param prevPts Vector of 2D points for which the flow needs to be found.\n.       @param nextPts Output vector of 2D points containing the calculated new positions of input features in the second image.\n.       @param status Output status vector. Each element of the vector is set to 1 if the\n.                     flow for the corresponding features has been found. Otherwise, it is set to 0.\n.       @param err Optional output vector that contains error response for each point (inverse confidence)."},

    {NULL,          NULL}
};

// Converter (SparseOpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::SparseOpticalFlow> >
{
    static PyObject* from(const Ptr<cv::SparseOpticalFlow>& r)
    {
        return pyopencv_SparseOpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::SparseOpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::SparseOpticalFlow> * dst_;
        if (pyopencv_SparseOpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::SparseOpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// SparsePyrLKOpticalFlow (Generic)
//================================================================================

// GetSet (SparsePyrLKOpticalFlow)



// Methods (SparsePyrLKOpticalFlow)

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_winSize = NULL;
    Size winSize=Size(21, 21);
    PyObject* pyobj_maxLevel = NULL;
    int maxLevel=3;
    PyObject* pyobj_crit = NULL;
    TermCriteria crit=TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01);
    PyObject* pyobj_flags = NULL;
    int flags=0;
    PyObject* pyobj_minEigThreshold = NULL;
    double minEigThreshold=1e-4;
    Ptr<SparsePyrLKOpticalFlow> retval;

    const char* keywords[] = { "winSize", "maxLevel", "crit", "flags", "minEigThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OOOOO:SparsePyrLKOpticalFlow.create", (char**)keywords, &pyobj_winSize, &pyobj_maxLevel, &pyobj_crit, &pyobj_flags, &pyobj_minEigThreshold) &&
        pyopencv_to_safe(pyobj_winSize, winSize, ArgInfo("winSize", 0)) &&
        pyopencv_to_safe(pyobj_maxLevel, maxLevel, ArgInfo("maxLevel", 0)) &&
        pyopencv_to_safe(pyobj_crit, crit, ArgInfo("crit", 0)) &&
        pyopencv_to_safe(pyobj_flags, flags, ArgInfo("flags", 0)) &&
        pyopencv_to_safe(pyobj_minEigThreshold, minEigThreshold, ArgInfo("minEigThreshold", 0)) )
    {
        ERRWRAP2(retval = cv::SparsePyrLKOpticalFlow::create(winSize, maxLevel, crit, flags, minEigThreshold));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getFlags(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFlags());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getMaxLevel(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMaxLevel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getMinEigThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getMinEigThreshold());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getTermCriteria(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    TermCriteria retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTermCriteria());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_getWinSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    Size retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getWinSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setFlags(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_flags = NULL;
    int flags=0;

    const char* keywords[] = { "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SparsePyrLKOpticalFlow.setFlags", (char**)keywords, &pyobj_flags) &&
        pyopencv_to_safe(pyobj_flags, flags, ArgInfo("flags", 0)) )
    {
        ERRWRAP2(_self_->setFlags(flags));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setMaxLevel(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_maxLevel = NULL;
    int maxLevel=0;

    const char* keywords[] = { "maxLevel", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SparsePyrLKOpticalFlow.setMaxLevel", (char**)keywords, &pyobj_maxLevel) &&
        pyopencv_to_safe(pyobj_maxLevel, maxLevel, ArgInfo("maxLevel", 0)) )
    {
        ERRWRAP2(_self_->setMaxLevel(maxLevel));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setMinEigThreshold(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_minEigThreshold = NULL;
    double minEigThreshold=0;

    const char* keywords[] = { "minEigThreshold", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SparsePyrLKOpticalFlow.setMinEigThreshold", (char**)keywords, &pyobj_minEigThreshold) &&
        pyopencv_to_safe(pyobj_minEigThreshold, minEigThreshold, ArgInfo("minEigThreshold", 0)) )
    {
        ERRWRAP2(_self_->setMinEigThreshold(minEigThreshold));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setTermCriteria(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_crit = NULL;
    TermCriteria crit;

    const char* keywords[] = { "crit", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SparsePyrLKOpticalFlow.setTermCriteria", (char**)keywords, &pyobj_crit) &&
        pyopencv_to_safe(pyobj_crit, crit, ArgInfo("crit", 0)) )
    {
        ERRWRAP2(_self_->setTermCriteria(crit));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_SparsePyrLKOpticalFlow_setWinSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::SparsePyrLKOpticalFlow> * self1 = 0;
    if (!pyopencv_SparsePyrLKOpticalFlow_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'SparsePyrLKOpticalFlow' or its derivative)");
    Ptr<cv::SparsePyrLKOpticalFlow> _self_ = *(self1);
    PyObject* pyobj_winSize = NULL;
    Size winSize;

    const char* keywords[] = { "winSize", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:SparsePyrLKOpticalFlow.setWinSize", (char**)keywords, &pyobj_winSize) &&
        pyopencv_to_safe(pyobj_winSize, winSize, ArgInfo("winSize", 0)) )
    {
        ERRWRAP2(_self_->setWinSize(winSize));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (SparsePyrLKOpticalFlow)

static PyGetSetDef pyopencv_SparsePyrLKOpticalFlow_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_SparsePyrLKOpticalFlow_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_create_static, METH_STATIC), "create([, winSize[, maxLevel[, crit[, flags[, minEigThreshold]]]]]) -> retval\n."},
    {"getFlags", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getFlags, 0), "getFlags() -> retval\n."},
    {"getMaxLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getMaxLevel, 0), "getMaxLevel() -> retval\n."},
    {"getMinEigThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getMinEigThreshold, 0), "getMinEigThreshold() -> retval\n."},
    {"getTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getTermCriteria, 0), "getTermCriteria() -> retval\n."},
    {"getWinSize", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_getWinSize, 0), "getWinSize() -> retval\n."},
    {"setFlags", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setFlags, 0), "setFlags(flags) -> None\n."},
    {"setMaxLevel", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setMaxLevel, 0), "setMaxLevel(maxLevel) -> None\n."},
    {"setMinEigThreshold", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setMinEigThreshold, 0), "setMinEigThreshold(minEigThreshold) -> None\n."},
    {"setTermCriteria", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setTermCriteria, 0), "setTermCriteria(crit) -> None\n."},
    {"setWinSize", CV_PY_FN_WITH_KW_(pyopencv_cv_SparsePyrLKOpticalFlow_setWinSize, 0), "setWinSize(winSize) -> None\n."},

    {NULL,          NULL}
};

// Converter (SparsePyrLKOpticalFlow)

template<>
struct PyOpenCV_Converter< Ptr<cv::SparsePyrLKOpticalFlow> >
{
    static PyObject* from(const Ptr<cv::SparsePyrLKOpticalFlow>& r)
    {
        return pyopencv_SparsePyrLKOpticalFlow_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::SparsePyrLKOpticalFlow>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::SparsePyrLKOpticalFlow> * dst_;
        if (pyopencv_SparsePyrLKOpticalFlow_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::SparsePyrLKOpticalFlow> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// Subdiv2D (Generic)
//================================================================================

// GetSet (Subdiv2D)



// Methods (Subdiv2D)

static int pyopencv_cv_Subdiv2D_Subdiv2D(pyopencv_Subdiv2D_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(2);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::Subdiv2D>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::Subdiv2D()));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_rect = NULL;
    Rect rect;

    const char* keywords[] = { "rect", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D", (char**)keywords, &pyobj_rect) &&
        pyopencv_to_safe(pyobj_rect, rect, ArgInfo("rect", 0)) )
    {
        new (&(self->v)) Ptr<cv::Subdiv2D>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::Subdiv2D(rect)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("Subdiv2D");

    return -1;
}

static PyObject* pyopencv_cv_Subdiv2D_edgeDst(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_edge = NULL;
    int edge=0;
    Point2f dstpt;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.edgeDst", (char**)keywords, &pyobj_edge) &&
        pyopencv_to_safe(pyobj_edge, edge, ArgInfo("edge", 0)) )
    {
        ERRWRAP2(retval = _self_->edgeDst(edge, &dstpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(dstpt));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_edgeOrg(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_edge = NULL;
    int edge=0;
    Point2f orgpt;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.edgeOrg", (char**)keywords, &pyobj_edge) &&
        pyopencv_to_safe(pyobj_edge, edge, ArgInfo("edge", 0)) )
    {
        ERRWRAP2(retval = _self_->edgeOrg(edge, &orgpt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(orgpt));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_findNearest(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    Point2f nearestPt;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.findNearest", (char**)keywords, &pyobj_pt) &&
        pyopencv_to_safe(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->findNearest(pt, &nearestPt));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(nearestPt));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getEdge(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_edge = NULL;
    int edge=0;
    PyObject* pyobj_nextEdgeType = NULL;
    int nextEdgeType=0;
    int retval;

    const char* keywords[] = { "edge", "nextEdgeType", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:Subdiv2D.getEdge", (char**)keywords, &pyobj_edge, &pyobj_nextEdgeType) &&
        pyopencv_to_safe(pyobj_edge, edge, ArgInfo("edge", 0)) &&
        pyopencv_to_safe(pyobj_nextEdgeType, nextEdgeType, ArgInfo("nextEdgeType", 0)) )
    {
        ERRWRAP2(retval = _self_->getEdge(edge, nextEdgeType));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getEdgeList(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    vector_Vec4f edgeList;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getEdgeList(edgeList));
        return pyopencv_from(edgeList);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getLeadingEdgeList(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    vector_int leadingEdgeList;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getLeadingEdgeList(leadingEdgeList));
        return pyopencv_from(leadingEdgeList);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getTriangleList(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    vector_Vec6f triangleList;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->getTriangleList(triangleList));
        return pyopencv_from(triangleList);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getVertex(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_vertex = NULL;
    int vertex=0;
    int firstEdge;
    Point2f retval;

    const char* keywords[] = { "vertex", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.getVertex", (char**)keywords, &pyobj_vertex) &&
        pyopencv_to_safe(pyobj_vertex, vertex, ArgInfo("vertex", 0)) )
    {
        ERRWRAP2(retval = _self_->getVertex(vertex, &firstEdge));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(firstEdge));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_getVoronoiFacetList(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_idx = NULL;
    vector_int idx;
    vector_vector_Point2f facetList;
    vector_Point2f facetCenters;

    const char* keywords[] = { "idx", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.getVoronoiFacetList", (char**)keywords, &pyobj_idx) &&
        pyopencv_to_safe(pyobj_idx, idx, ArgInfo("idx", 0)) )
    {
        ERRWRAP2(_self_->getVoronoiFacetList(idx, facetList, facetCenters));
        return Py_BuildValue("(NN)", pyopencv_from(facetList), pyopencv_from(facetCenters));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_initDelaunay(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_rect = NULL;
    Rect rect;

    const char* keywords[] = { "rect", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.initDelaunay", (char**)keywords, &pyobj_rect) &&
        pyopencv_to_safe(pyobj_rect, rect, ArgInfo("rect", 0)) )
    {
        ERRWRAP2(_self_->initDelaunay(rect));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_insert(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_pt) &&
        pyopencv_to_safe(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->insert(pt));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_ptvec = NULL;
    vector_Point2f ptvec;

    const char* keywords[] = { "ptvec", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.insert", (char**)keywords, &pyobj_ptvec) &&
        pyopencv_to_safe(pyobj_ptvec, ptvec, ArgInfo("ptvec", 0)) )
    {
        ERRWRAP2(_self_->insert(ptvec));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("insert");

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_locate(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_pt = NULL;
    Point2f pt;
    int edge;
    int vertex;
    int retval;

    const char* keywords[] = { "pt", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.locate", (char**)keywords, &pyobj_pt) &&
        pyopencv_to_safe(pyobj_pt, pt, ArgInfo("pt", 0)) )
    {
        ERRWRAP2(retval = _self_->locate(pt, edge, vertex));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(edge), pyopencv_from(vertex));
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_nextEdge(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_edge = NULL;
    int edge=0;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.nextEdge", (char**)keywords, &pyobj_edge) &&
        pyopencv_to_safe(pyobj_edge, edge, ArgInfo("edge", 0)) )
    {
        ERRWRAP2(retval = _self_->nextEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_rotateEdge(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_edge = NULL;
    int edge=0;
    PyObject* pyobj_rotate = NULL;
    int rotate=0;
    int retval;

    const char* keywords[] = { "edge", "rotate", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:Subdiv2D.rotateEdge", (char**)keywords, &pyobj_edge, &pyobj_rotate) &&
        pyopencv_to_safe(pyobj_edge, edge, ArgInfo("edge", 0)) &&
        pyopencv_to_safe(pyobj_rotate, rotate, ArgInfo("rotate", 0)) )
    {
        ERRWRAP2(retval = _self_->rotateEdge(edge, rotate));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Subdiv2D_symEdge(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Subdiv2D> * self1 = 0;
    if (!pyopencv_Subdiv2D_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Subdiv2D' or its derivative)");
    Ptr<cv::Subdiv2D> _self_ = *(self1);
    PyObject* pyobj_edge = NULL;
    int edge=0;
    int retval;

    const char* keywords[] = { "edge", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Subdiv2D.symEdge", (char**)keywords, &pyobj_edge) &&
        pyopencv_to_safe(pyobj_edge, edge, ArgInfo("edge", 0)) )
    {
        ERRWRAP2(retval = _self_->symEdge(edge));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (Subdiv2D)

static PyGetSetDef pyopencv_Subdiv2D_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_Subdiv2D_methods[] =
{
    {"edgeDst", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_edgeDst, 0), "edgeDst(edge) -> retval, dstpt\n.   @brief Returns the edge destination.\n.   \n.       @param edge Subdivision edge ID.\n.       @param dstpt Output vertex location.\n.   \n.       @returns vertex ID."},
    {"edgeOrg", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_edgeOrg, 0), "edgeOrg(edge) -> retval, orgpt\n.   @brief Returns the edge origin.\n.   \n.       @param edge Subdivision edge ID.\n.       @param orgpt Output vertex location.\n.   \n.       @returns vertex ID."},
    {"findNearest", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_findNearest, 0), "findNearest(pt) -> retval, nearestPt\n.   @brief Finds the subdivision vertex closest to the given point.\n.   \n.       @param pt Input point.\n.       @param nearestPt Output subdivision vertex point.\n.   \n.       The function is another function that locates the input point within the subdivision. It finds the\n.       subdivision vertex that is the closest to the input point. It is not necessarily one of vertices\n.       of the facet containing the input point, though the facet (located using locate() ) is used as a\n.       starting point.\n.   \n.       @returns vertex ID."},
    {"getEdge", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getEdge, 0), "getEdge(edge, nextEdgeType) -> retval\n.   @brief Returns one of the edges related to the given edge.\n.   \n.       @param edge Subdivision edge ID.\n.       @param nextEdgeType Parameter specifying which of the related edges to return.\n.       The following values are possible:\n.       -   NEXT_AROUND_ORG next around the edge origin ( eOnext on the picture below if e is the input edge)\n.       -   NEXT_AROUND_DST next around the edge vertex ( eDnext )\n.       -   PREV_AROUND_ORG previous around the edge origin (reversed eRnext )\n.       -   PREV_AROUND_DST previous around the edge destination (reversed eLnext )\n.       -   NEXT_AROUND_LEFT next around the left facet ( eLnext )\n.       -   NEXT_AROUND_RIGHT next around the right facet ( eRnext )\n.       -   PREV_AROUND_LEFT previous around the left facet (reversed eOnext )\n.       -   PREV_AROUND_RIGHT previous around the right facet (reversed eDnext )\n.   \n.       ![sample output](pics/quadedge.png)\n.   \n.       @returns edge ID related to the input edge."},
    {"getEdgeList", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getEdgeList, 0), "getEdgeList() -> edgeList\n.   @brief Returns a list of all edges.\n.   \n.       @param edgeList Output vector.\n.   \n.       The function gives each edge as a 4 numbers vector, where each two are one of the edge\n.       vertices. i.e. org_x = v[0], org_y = v[1], dst_x = v[2], dst_y = v[3]."},
    {"getLeadingEdgeList", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getLeadingEdgeList, 0), "getLeadingEdgeList() -> leadingEdgeList\n.   @brief Returns a list of the leading edge ID connected to each triangle.\n.   \n.       @param leadingEdgeList Output vector.\n.   \n.       The function gives one edge ID for each triangle."},
    {"getTriangleList", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getTriangleList, 0), "getTriangleList() -> triangleList\n.   @brief Returns a list of all triangles.\n.   \n.       @param triangleList Output vector.\n.   \n.       The function gives each triangle as a 6 numbers vector, where each two are one of the triangle\n.       vertices. i.e. p1_x = v[0], p1_y = v[1], p2_x = v[2], p2_y = v[3], p3_x = v[4], p3_y = v[5]."},
    {"getVertex", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getVertex, 0), "getVertex(vertex) -> retval, firstEdge\n.   @brief Returns vertex location from vertex ID.\n.   \n.       @param vertex vertex ID.\n.       @param firstEdge Optional. The first edge ID which is connected to the vertex.\n.       @returns vertex (x,y)"},
    {"getVoronoiFacetList", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_getVoronoiFacetList, 0), "getVoronoiFacetList(idx) -> facetList, facetCenters\n.   @brief Returns a list of all Voronoi facets.\n.   \n.       @param idx Vector of vertices IDs to consider. For all vertices you can pass empty vector.\n.       @param facetList Output vector of the Voronoi facets.\n.       @param facetCenters Output vector of the Voronoi facets center points."},
    {"initDelaunay", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_initDelaunay, 0), "initDelaunay(rect) -> None\n.   @brief Creates a new empty Delaunay subdivision\n.   \n.       @param rect Rectangle that includes all of the 2D points that are to be added to the subdivision."},
    {"insert", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_insert, 0), "insert(pt) -> retval\n.   @brief Insert a single point into a Delaunay triangulation.\n.   \n.       @param pt Point to insert.\n.   \n.       The function inserts a single point into a subdivision and modifies the subdivision topology\n.       appropriately. If a point with the same coordinates exists already, no new point is added.\n.       @returns the ID of the point.\n.   \n.       @note If the point is outside of the triangulation specified rect a runtime error is raised.\n\n\n\ninsert(ptvec) -> None\n.   @brief Insert multiple points into a Delaunay triangulation.\n.   \n.       @param ptvec Points to insert.\n.   \n.       The function inserts a vector of points into a subdivision and modifies the subdivision topology\n.       appropriately."},
    {"locate", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_locate, 0), "locate(pt) -> retval, edge, vertex\n.   @brief Returns the location of a point within a Delaunay triangulation.\n.   \n.       @param pt Point to locate.\n.       @param edge Output edge that the point belongs to or is located to the right of it.\n.       @param vertex Optional output vertex the input point coincides with.\n.   \n.       The function locates the input point within the subdivision and gives one of the triangle edges\n.       or vertices.\n.   \n.       @returns an integer which specify one of the following five cases for point location:\n.       -  The point falls into some facet. The function returns #PTLOC_INSIDE and edge will contain one of\n.          edges of the facet.\n.       -  The point falls onto the edge. The function returns #PTLOC_ON_EDGE and edge will contain this edge.\n.       -  The point coincides with one of the subdivision vertices. The function returns #PTLOC_VERTEX and\n.          vertex will contain a pointer to the vertex.\n.       -  The point is outside the subdivision reference rectangle. The function returns #PTLOC_OUTSIDE_RECT\n.          and no pointers are filled.\n.       -  One of input arguments is invalid. A runtime error is raised or, if silent or \"parent\" error\n.          processing mode is selected, #PTLOC_ERROR is returned."},
    {"nextEdge", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_nextEdge, 0), "nextEdge(edge) -> retval\n.   @brief Returns next edge around the edge origin.\n.   \n.       @param edge Subdivision edge ID.\n.   \n.       @returns an integer which is next edge ID around the edge origin: eOnext on the\n.       picture above if e is the input edge)."},
    {"rotateEdge", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_rotateEdge, 0), "rotateEdge(edge, rotate) -> retval\n.   @brief Returns another edge of the same quad-edge.\n.   \n.       @param edge Subdivision edge ID.\n.       @param rotate Parameter specifying which of the edges of the same quad-edge as the input\n.       one to return. The following values are possible:\n.       -   0 - the input edge ( e on the picture below if e is the input edge)\n.       -   1 - the rotated edge ( eRot )\n.       -   2 - the reversed edge (reversed e (in green))\n.       -   3 - the reversed rotated edge (reversed eRot (in green))\n.   \n.       @returns one of the edges ID of the same quad-edge as the input edge."},
    {"symEdge", CV_PY_FN_WITH_KW_(pyopencv_cv_Subdiv2D_symEdge, 0), "symEdge(edge) -> retval\n."},

    {NULL,          NULL}
};

// Converter (Subdiv2D)

template<>
struct PyOpenCV_Converter< Ptr<cv::Subdiv2D> >
{
    static PyObject* from(const Ptr<cv::Subdiv2D>& r)
    {
        return pyopencv_Subdiv2D_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::Subdiv2D>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::Subdiv2D> * dst_;
        if (pyopencv_Subdiv2D_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::Subdiv2D> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TickMeter (Generic)
//================================================================================

// GetSet (TickMeter)



// Methods (TickMeter)

static int pyopencv_cv_TickMeter_TickMeter(pyopencv_TickMeter_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::TickMeter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::TickMeter()));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_TickMeter_getAvgTimeMilli(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAvgTimeMilli());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getAvgTimeSec(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAvgTimeSec());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getCounter(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);
    int64 retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getCounter());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getFPS(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFPS());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getTimeMicro(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTimeMicro());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getTimeMilli(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTimeMilli());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getTimeSec(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);
    double retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTimeSec());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_getTimeTicks(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);
    int64 retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTimeTicks());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_reset(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->reset());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_start(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->start());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TickMeter_stop(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TickMeter> * self1 = 0;
    if (!pyopencv_TickMeter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TickMeter' or its derivative)");
    Ptr<cv::TickMeter> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->stop());
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (TickMeter)

static PyGetSetDef pyopencv_TickMeter_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TickMeter_methods[] =
{
    {"getAvgTimeMilli", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_getAvgTimeMilli, 0), "getAvgTimeMilli() -> retval\n."},
    {"getAvgTimeSec", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_getAvgTimeSec, 0), "getAvgTimeSec() -> retval\n."},
    {"getCounter", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_getCounter, 0), "getCounter() -> retval\n."},
    {"getFPS", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_getFPS, 0), "getFPS() -> retval\n."},
    {"getTimeMicro", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_getTimeMicro, 0), "getTimeMicro() -> retval\n."},
    {"getTimeMilli", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_getTimeMilli, 0), "getTimeMilli() -> retval\n."},
    {"getTimeSec", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_getTimeSec, 0), "getTimeSec() -> retval\n."},
    {"getTimeTicks", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_getTimeTicks, 0), "getTimeTicks() -> retval\n."},
    {"reset", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_reset, 0), "reset() -> None\n."},
    {"start", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_start, 0), "start() -> None\n."},
    {"stop", CV_PY_FN_WITH_KW_(pyopencv_cv_TickMeter_stop, 0), "stop() -> None\n."},

    {NULL,          NULL}
};

// Converter (TickMeter)

template<>
struct PyOpenCV_Converter< Ptr<cv::TickMeter> >
{
    static PyObject* from(const Ptr<cv::TickMeter>& r)
    {
        return pyopencv_TickMeter_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::TickMeter>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::TickMeter> * dst_;
        if (pyopencv_TickMeter_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::TickMeter> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// Tonemap (Generic)
//================================================================================

// GetSet (Tonemap)



// Methods (Tonemap)

static PyObject* pyopencv_cv_Tonemap_getGamma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Tonemap> * self1 = 0;
    if (!pyopencv_Tonemap_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Tonemap' or its derivative)");
    Ptr<cv::Tonemap> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getGamma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_Tonemap_process(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Tonemap> * self1 = 0;
    if (!pyopencv_Tonemap_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Tonemap' or its derivative)");
    Ptr<cv::Tonemap> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_src = NULL;
    Mat src;
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:Tonemap.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_src = NULL;
    UMat src;
    PyObject* pyobj_dst = NULL;
    UMat dst;

    const char* keywords[] = { "src", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:Tonemap.process", (char**)keywords, &pyobj_src, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_src, src, ArgInfo("src", 0)) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->process(src, dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("process");

    return NULL;
}

static PyObject* pyopencv_cv_Tonemap_setGamma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Tonemap> * self1 = 0;
    if (!pyopencv_Tonemap_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Tonemap' or its derivative)");
    Ptr<cv::Tonemap> _self_ = *(self1);
    PyObject* pyobj_gamma = NULL;
    float gamma=0.f;

    const char* keywords[] = { "gamma", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Tonemap.setGamma", (char**)keywords, &pyobj_gamma) &&
        pyopencv_to_safe(pyobj_gamma, gamma, ArgInfo("gamma", 0)) )
    {
        ERRWRAP2(_self_->setGamma(gamma));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (Tonemap)

static PyGetSetDef pyopencv_Tonemap_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_Tonemap_methods[] =
{
    {"getGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_Tonemap_getGamma, 0), "getGamma() -> retval\n."},
    {"process", CV_PY_FN_WITH_KW_(pyopencv_cv_Tonemap_process, 0), "process(src[, dst]) -> dst\n.   @brief Tonemaps image\n.   \n.       @param src source image - CV_32FC3 Mat (float 32 bits 3 channels)\n.       @param dst destination image - CV_32FC3 Mat with values in [0, 1] range"},
    {"setGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_Tonemap_setGamma, 0), "setGamma(gamma) -> None\n."},

    {NULL,          NULL}
};

// Converter (Tonemap)

template<>
struct PyOpenCV_Converter< Ptr<cv::Tonemap> >
{
    static PyObject* from(const Ptr<cv::Tonemap>& r)
    {
        return pyopencv_Tonemap_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::Tonemap>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::Tonemap> * dst_;
        if (pyopencv_Tonemap_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::Tonemap> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TonemapDrago (Generic)
//================================================================================

// GetSet (TonemapDrago)



// Methods (TonemapDrago)

static PyObject* pyopencv_cv_TonemapDrago_getBias(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapDrago> * self1 = 0;
    if (!pyopencv_TonemapDrago_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    Ptr<cv::TonemapDrago> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBias());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDrago_getSaturation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapDrago> * self1 = 0;
    if (!pyopencv_TonemapDrago_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    Ptr<cv::TonemapDrago> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSaturation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDrago_setBias(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapDrago> * self1 = 0;
    if (!pyopencv_TonemapDrago_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    Ptr<cv::TonemapDrago> _self_ = *(self1);
    PyObject* pyobj_bias = NULL;
    float bias=0.f;

    const char* keywords[] = { "bias", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:TonemapDrago.setBias", (char**)keywords, &pyobj_bias) &&
        pyopencv_to_safe(pyobj_bias, bias, ArgInfo("bias", 0)) )
    {
        ERRWRAP2(_self_->setBias(bias));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapDrago_setSaturation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapDrago> * self1 = 0;
    if (!pyopencv_TonemapDrago_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapDrago' or its derivative)");
    Ptr<cv::TonemapDrago> _self_ = *(self1);
    PyObject* pyobj_saturation = NULL;
    float saturation=0.f;

    const char* keywords[] = { "saturation", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:TonemapDrago.setSaturation", (char**)keywords, &pyobj_saturation) &&
        pyopencv_to_safe(pyobj_saturation, saturation, ArgInfo("saturation", 0)) )
    {
        ERRWRAP2(_self_->setSaturation(saturation));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (TonemapDrago)

static PyGetSetDef pyopencv_TonemapDrago_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TonemapDrago_methods[] =
{
    {"getBias", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapDrago_getBias, 0), "getBias() -> retval\n."},
    {"getSaturation", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapDrago_getSaturation, 0), "getSaturation() -> retval\n."},
    {"setBias", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapDrago_setBias, 0), "setBias(bias) -> None\n."},
    {"setSaturation", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapDrago_setSaturation, 0), "setSaturation(saturation) -> None\n."},

    {NULL,          NULL}
};

// Converter (TonemapDrago)

template<>
struct PyOpenCV_Converter< Ptr<cv::TonemapDrago> >
{
    static PyObject* from(const Ptr<cv::TonemapDrago>& r)
    {
        return pyopencv_TonemapDrago_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::TonemapDrago>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::TonemapDrago> * dst_;
        if (pyopencv_TonemapDrago_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::TonemapDrago> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TonemapMantiuk (Generic)
//================================================================================

// GetSet (TonemapMantiuk)



// Methods (TonemapMantiuk)

static PyObject* pyopencv_cv_TonemapMantiuk_getSaturation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapMantiuk> * self1 = 0;
    if (!pyopencv_TonemapMantiuk_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    Ptr<cv::TonemapMantiuk> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSaturation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapMantiuk_getScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapMantiuk> * self1 = 0;
    if (!pyopencv_TonemapMantiuk_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    Ptr<cv::TonemapMantiuk> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getScale());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapMantiuk_setSaturation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapMantiuk> * self1 = 0;
    if (!pyopencv_TonemapMantiuk_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    Ptr<cv::TonemapMantiuk> _self_ = *(self1);
    PyObject* pyobj_saturation = NULL;
    float saturation=0.f;

    const char* keywords[] = { "saturation", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:TonemapMantiuk.setSaturation", (char**)keywords, &pyobj_saturation) &&
        pyopencv_to_safe(pyobj_saturation, saturation, ArgInfo("saturation", 0)) )
    {
        ERRWRAP2(_self_->setSaturation(saturation));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapMantiuk_setScale(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapMantiuk> * self1 = 0;
    if (!pyopencv_TonemapMantiuk_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapMantiuk' or its derivative)");
    Ptr<cv::TonemapMantiuk> _self_ = *(self1);
    PyObject* pyobj_scale = NULL;
    float scale=0.f;

    const char* keywords[] = { "scale", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:TonemapMantiuk.setScale", (char**)keywords, &pyobj_scale) &&
        pyopencv_to_safe(pyobj_scale, scale, ArgInfo("scale", 0)) )
    {
        ERRWRAP2(_self_->setScale(scale));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (TonemapMantiuk)

static PyGetSetDef pyopencv_TonemapMantiuk_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TonemapMantiuk_methods[] =
{
    {"getSaturation", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapMantiuk_getSaturation, 0), "getSaturation() -> retval\n."},
    {"getScale", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapMantiuk_getScale, 0), "getScale() -> retval\n."},
    {"setSaturation", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapMantiuk_setSaturation, 0), "setSaturation(saturation) -> None\n."},
    {"setScale", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapMantiuk_setScale, 0), "setScale(scale) -> None\n."},

    {NULL,          NULL}
};

// Converter (TonemapMantiuk)

template<>
struct PyOpenCV_Converter< Ptr<cv::TonemapMantiuk> >
{
    static PyObject* from(const Ptr<cv::TonemapMantiuk>& r)
    {
        return pyopencv_TonemapMantiuk_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::TonemapMantiuk>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::TonemapMantiuk> * dst_;
        if (pyopencv_TonemapMantiuk_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::TonemapMantiuk> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TonemapReinhard (Generic)
//================================================================================

// GetSet (TonemapReinhard)



// Methods (TonemapReinhard)

static PyObject* pyopencv_cv_TonemapReinhard_getColorAdaptation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapReinhard> * self1 = 0;
    if (!pyopencv_TonemapReinhard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    Ptr<cv::TonemapReinhard> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getColorAdaptation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_getIntensity(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapReinhard> * self1 = 0;
    if (!pyopencv_TonemapReinhard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    Ptr<cv::TonemapReinhard> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getIntensity());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_getLightAdaptation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapReinhard> * self1 = 0;
    if (!pyopencv_TonemapReinhard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    Ptr<cv::TonemapReinhard> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getLightAdaptation());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_setColorAdaptation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapReinhard> * self1 = 0;
    if (!pyopencv_TonemapReinhard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    Ptr<cv::TonemapReinhard> _self_ = *(self1);
    PyObject* pyobj_color_adapt = NULL;
    float color_adapt=0.f;

    const char* keywords[] = { "color_adapt", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:TonemapReinhard.setColorAdaptation", (char**)keywords, &pyobj_color_adapt) &&
        pyopencv_to_safe(pyobj_color_adapt, color_adapt, ArgInfo("color_adapt", 0)) )
    {
        ERRWRAP2(_self_->setColorAdaptation(color_adapt));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_setIntensity(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapReinhard> * self1 = 0;
    if (!pyopencv_TonemapReinhard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    Ptr<cv::TonemapReinhard> _self_ = *(self1);
    PyObject* pyobj_intensity = NULL;
    float intensity=0.f;

    const char* keywords[] = { "intensity", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:TonemapReinhard.setIntensity", (char**)keywords, &pyobj_intensity) &&
        pyopencv_to_safe(pyobj_intensity, intensity, ArgInfo("intensity", 0)) )
    {
        ERRWRAP2(_self_->setIntensity(intensity));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_TonemapReinhard_setLightAdaptation(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TonemapReinhard> * self1 = 0;
    if (!pyopencv_TonemapReinhard_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TonemapReinhard' or its derivative)");
    Ptr<cv::TonemapReinhard> _self_ = *(self1);
    PyObject* pyobj_light_adapt = NULL;
    float light_adapt=0.f;

    const char* keywords[] = { "light_adapt", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:TonemapReinhard.setLightAdaptation", (char**)keywords, &pyobj_light_adapt) &&
        pyopencv_to_safe(pyobj_light_adapt, light_adapt, ArgInfo("light_adapt", 0)) )
    {
        ERRWRAP2(_self_->setLightAdaptation(light_adapt));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (TonemapReinhard)

static PyGetSetDef pyopencv_TonemapReinhard_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TonemapReinhard_methods[] =
{
    {"getColorAdaptation", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapReinhard_getColorAdaptation, 0), "getColorAdaptation() -> retval\n."},
    {"getIntensity", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapReinhard_getIntensity, 0), "getIntensity() -> retval\n."},
    {"getLightAdaptation", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapReinhard_getLightAdaptation, 0), "getLightAdaptation() -> retval\n."},
    {"setColorAdaptation", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapReinhard_setColorAdaptation, 0), "setColorAdaptation(color_adapt) -> None\n."},
    {"setIntensity", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapReinhard_setIntensity, 0), "setIntensity(intensity) -> None\n."},
    {"setLightAdaptation", CV_PY_FN_WITH_KW_(pyopencv_cv_TonemapReinhard_setLightAdaptation, 0), "setLightAdaptation(light_adapt) -> None\n."},

    {NULL,          NULL}
};

// Converter (TonemapReinhard)

template<>
struct PyOpenCV_Converter< Ptr<cv::TonemapReinhard> >
{
    static PyObject* from(const Ptr<cv::TonemapReinhard>& r)
    {
        return pyopencv_TonemapReinhard_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::TonemapReinhard>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::TonemapReinhard> * dst_;
        if (pyopencv_TonemapReinhard_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::TonemapReinhard> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// Tracker (Generic)
//================================================================================

// GetSet (Tracker)



// Methods (Tracker)

static PyObject* pyopencv_cv_Tracker_init(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Tracker> * self1 = 0;
    if (!pyopencv_Tracker_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Tracker' or its derivative)");
    Ptr<cv::Tracker> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_boundingBox = NULL;
    Rect boundingBox;

    const char* keywords[] = { "image", "boundingBox", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:Tracker.init", (char**)keywords, &pyobj_image, &pyobj_boundingBox) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_boundingBox, boundingBox, ArgInfo("boundingBox", 0)) )
    {
        ERRWRAP2(_self_->init(image, boundingBox));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_boundingBox = NULL;
    Rect boundingBox;

    const char* keywords[] = { "image", "boundingBox", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:Tracker.init", (char**)keywords, &pyobj_image, &pyobj_boundingBox) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) &&
        pyopencv_to_safe(pyobj_boundingBox, boundingBox, ArgInfo("boundingBox", 0)) )
    {
        ERRWRAP2(_self_->init(image, boundingBox));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("init");

    return NULL;
}

static PyObject* pyopencv_cv_Tracker_update(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::Tracker> * self1 = 0;
    if (!pyopencv_Tracker_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'Tracker' or its derivative)");
    Ptr<cv::Tracker> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    Rect boundingBox;
    bool retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Tracker.update", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(retval = _self_->update(image, boundingBox));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(boundingBox));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    Rect boundingBox;
    bool retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Tracker.update", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(retval = _self_->update(image, boundingBox));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(boundingBox));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("update");

    return NULL;
}



// Tables (Tracker)

static PyGetSetDef pyopencv_Tracker_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_Tracker_methods[] =
{
    {"init", CV_PY_FN_WITH_KW_(pyopencv_cv_Tracker_init, 0), "init(image, boundingBox) -> None\n.   @brief Initialize the tracker with a known bounding box that surrounded the target\n.       @param image The initial frame\n.       @param boundingBox The initial bounding box"},
    {"update", CV_PY_FN_WITH_KW_(pyopencv_cv_Tracker_update, 0), "update(image) -> retval, boundingBox\n.   @brief Update the tracker, find the new most likely bounding box for the target\n.       @param image The current frame\n.       @param boundingBox The bounding box that represent the new target location, if true was returned, not\n.       modified otherwise\n.   \n.       @return True means that target was located and false means that tracker cannot locate target in\n.       current frame. Note, that latter *does not* imply that tracker has failed, maybe target is indeed\n.       missing from the frame (say, out of sight)"},

    {NULL,          NULL}
};

// Converter (Tracker)

template<>
struct PyOpenCV_Converter< Ptr<cv::Tracker> >
{
    static PyObject* from(const Ptr<cv::Tracker>& r)
    {
        return pyopencv_Tracker_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::Tracker>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::Tracker> * dst_;
        if (pyopencv_Tracker_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::Tracker> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerDaSiamRPN (Generic)
//================================================================================

// GetSet (TrackerDaSiamRPN)



// Methods (TrackerDaSiamRPN)

static PyObject* pyopencv_cv_TrackerDaSiamRPN_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_parameters = NULL;
    cv::TrackerDaSiamRPN::Params parameters=TrackerDaSiamRPN::Params();
    Ptr<TrackerDaSiamRPN> retval;

    const char* keywords[] = { "parameters", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:TrackerDaSiamRPN.create", (char**)keywords, &pyobj_parameters) &&
        pyopencv_to_safe(pyobj_parameters, parameters, ArgInfo("parameters", 0)) )
    {
        ERRWRAP2(retval = cv::TrackerDaSiamRPN::create(parameters));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TrackerDaSiamRPN_getTrackingScore(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TrackerDaSiamRPN> * self1 = 0;
    if (!pyopencv_TrackerDaSiamRPN_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TrackerDaSiamRPN' or its derivative)");
    Ptr<cv::TrackerDaSiamRPN> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrackingScore());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (TrackerDaSiamRPN)

static PyGetSetDef pyopencv_TrackerDaSiamRPN_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerDaSiamRPN_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_TrackerDaSiamRPN_create_static, METH_STATIC), "create([, parameters]) -> retval\n.   @brief Constructor\n.       @param parameters DaSiamRPN parameters TrackerDaSiamRPN::Params"},
    {"getTrackingScore", CV_PY_FN_WITH_KW_(pyopencv_cv_TrackerDaSiamRPN_getTrackingScore, 0), "getTrackingScore() -> retval\n.   @brief Return tracking score"},

    {NULL,          NULL}
};

// Converter (TrackerDaSiamRPN)

template<>
struct PyOpenCV_Converter< Ptr<cv::TrackerDaSiamRPN> >
{
    static PyObject* from(const Ptr<cv::TrackerDaSiamRPN>& r)
    {
        return pyopencv_TrackerDaSiamRPN_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::TrackerDaSiamRPN>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::TrackerDaSiamRPN> * dst_;
        if (pyopencv_TrackerDaSiamRPN_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::TrackerDaSiamRPN> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerDaSiamRPN_Params (Generic)
//================================================================================

// GetSet (TrackerDaSiamRPN_Params)


static PyObject* pyopencv_TrackerDaSiamRPN_Params_get_backend(pyopencv_TrackerDaSiamRPN_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.backend);
}

static int pyopencv_TrackerDaSiamRPN_Params_set_backend(pyopencv_TrackerDaSiamRPN_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the backend attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.backend, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerDaSiamRPN_Params_get_kernel_cls1(pyopencv_TrackerDaSiamRPN_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.kernel_cls1);
}

static int pyopencv_TrackerDaSiamRPN_Params_set_kernel_cls1(pyopencv_TrackerDaSiamRPN_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the kernel_cls1 attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.kernel_cls1, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerDaSiamRPN_Params_get_kernel_r1(pyopencv_TrackerDaSiamRPN_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.kernel_r1);
}

static int pyopencv_TrackerDaSiamRPN_Params_set_kernel_r1(pyopencv_TrackerDaSiamRPN_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the kernel_r1 attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.kernel_r1, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerDaSiamRPN_Params_get_model(pyopencv_TrackerDaSiamRPN_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.model);
}

static int pyopencv_TrackerDaSiamRPN_Params_set_model(pyopencv_TrackerDaSiamRPN_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the model attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.model, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerDaSiamRPN_Params_get_target(pyopencv_TrackerDaSiamRPN_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.target);
}

static int pyopencv_TrackerDaSiamRPN_Params_set_target(pyopencv_TrackerDaSiamRPN_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the target attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.target, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (TrackerDaSiamRPN_Params)

static int pyopencv_cv_TrackerDaSiamRPN_Params_TrackerDaSiamRPN_Params(pyopencv_TrackerDaSiamRPN_Params_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::TrackerDaSiamRPN::Params());
        return 0;
    }

    return -1;
}



// Tables (TrackerDaSiamRPN_Params)

static PyGetSetDef pyopencv_TrackerDaSiamRPN_Params_getseters[] =
{
    {(char*)"backend", (getter)pyopencv_TrackerDaSiamRPN_Params_get_backend, (setter)pyopencv_TrackerDaSiamRPN_Params_set_backend, (char*)"backend", NULL},
    {(char*)"kernel_cls1", (getter)pyopencv_TrackerDaSiamRPN_Params_get_kernel_cls1, (setter)pyopencv_TrackerDaSiamRPN_Params_set_kernel_cls1, (char*)"kernel_cls1", NULL},
    {(char*)"kernel_r1", (getter)pyopencv_TrackerDaSiamRPN_Params_get_kernel_r1, (setter)pyopencv_TrackerDaSiamRPN_Params_set_kernel_r1, (char*)"kernel_r1", NULL},
    {(char*)"model", (getter)pyopencv_TrackerDaSiamRPN_Params_get_model, (setter)pyopencv_TrackerDaSiamRPN_Params_set_model, (char*)"model", NULL},
    {(char*)"target", (getter)pyopencv_TrackerDaSiamRPN_Params_get_target, (setter)pyopencv_TrackerDaSiamRPN_Params_set_target, (char*)"target", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerDaSiamRPN_Params_methods[] =
{

    {NULL,          NULL}
};

// Converter (TrackerDaSiamRPN_Params)

template<>
struct PyOpenCV_Converter< cv::TrackerDaSiamRPN::Params >
{
    static PyObject* from(const cv::TrackerDaSiamRPN::Params& r)
    {
        return pyopencv_TrackerDaSiamRPN_Params_Instance(r);
    }
    static bool to(PyObject* src, cv::TrackerDaSiamRPN::Params& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::TrackerDaSiamRPN::Params * dst_;
        if (pyopencv_TrackerDaSiamRPN_Params_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::TrackerDaSiamRPN::Params for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerGOTURN (Generic)
//================================================================================

// GetSet (TrackerGOTURN)



// Methods (TrackerGOTURN)

static PyObject* pyopencv_cv_TrackerGOTURN_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_parameters = NULL;
    cv::TrackerGOTURN::Params parameters=TrackerGOTURN::Params();
    Ptr<TrackerGOTURN> retval;

    const char* keywords[] = { "parameters", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:TrackerGOTURN.create", (char**)keywords, &pyobj_parameters) &&
        pyopencv_to_safe(pyobj_parameters, parameters, ArgInfo("parameters", 0)) )
    {
        ERRWRAP2(retval = cv::TrackerGOTURN::create(parameters));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (TrackerGOTURN)

static PyGetSetDef pyopencv_TrackerGOTURN_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerGOTURN_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_TrackerGOTURN_create_static, METH_STATIC), "create([, parameters]) -> retval\n.   @brief Constructor\n.       @param parameters GOTURN parameters TrackerGOTURN::Params"},

    {NULL,          NULL}
};

// Converter (TrackerGOTURN)

template<>
struct PyOpenCV_Converter< Ptr<cv::TrackerGOTURN> >
{
    static PyObject* from(const Ptr<cv::TrackerGOTURN>& r)
    {
        return pyopencv_TrackerGOTURN_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::TrackerGOTURN>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::TrackerGOTURN> * dst_;
        if (pyopencv_TrackerGOTURN_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::TrackerGOTURN> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerGOTURN_Params (Generic)
//================================================================================

// GetSet (TrackerGOTURN_Params)


static PyObject* pyopencv_TrackerGOTURN_Params_get_modelBin(pyopencv_TrackerGOTURN_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.modelBin);
}

static int pyopencv_TrackerGOTURN_Params_set_modelBin(pyopencv_TrackerGOTURN_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the modelBin attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.modelBin, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerGOTURN_Params_get_modelTxt(pyopencv_TrackerGOTURN_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.modelTxt);
}

static int pyopencv_TrackerGOTURN_Params_set_modelTxt(pyopencv_TrackerGOTURN_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the modelTxt attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.modelTxt, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (TrackerGOTURN_Params)

static int pyopencv_cv_TrackerGOTURN_Params_TrackerGOTURN_Params(pyopencv_TrackerGOTURN_Params_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::TrackerGOTURN::Params());
        return 0;
    }

    return -1;
}



// Tables (TrackerGOTURN_Params)

static PyGetSetDef pyopencv_TrackerGOTURN_Params_getseters[] =
{
    {(char*)"modelBin", (getter)pyopencv_TrackerGOTURN_Params_get_modelBin, (setter)pyopencv_TrackerGOTURN_Params_set_modelBin, (char*)"modelBin", NULL},
    {(char*)"modelTxt", (getter)pyopencv_TrackerGOTURN_Params_get_modelTxt, (setter)pyopencv_TrackerGOTURN_Params_set_modelTxt, (char*)"modelTxt", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerGOTURN_Params_methods[] =
{

    {NULL,          NULL}
};

// Converter (TrackerGOTURN_Params)

template<>
struct PyOpenCV_Converter< cv::TrackerGOTURN::Params >
{
    static PyObject* from(const cv::TrackerGOTURN::Params& r)
    {
        return pyopencv_TrackerGOTURN_Params_Instance(r);
    }
    static bool to(PyObject* src, cv::TrackerGOTURN::Params& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::TrackerGOTURN::Params * dst_;
        if (pyopencv_TrackerGOTURN_Params_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::TrackerGOTURN::Params for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerMIL (Generic)
//================================================================================

// GetSet (TrackerMIL)



// Methods (TrackerMIL)

static PyObject* pyopencv_cv_TrackerMIL_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_parameters = NULL;
    cv::TrackerMIL::Params parameters=TrackerMIL::Params();
    Ptr<TrackerMIL> retval;

    const char* keywords[] = { "parameters", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:TrackerMIL.create", (char**)keywords, &pyobj_parameters) &&
        pyopencv_to_safe(pyobj_parameters, parameters, ArgInfo("parameters", 0)) )
    {
        ERRWRAP2(retval = cv::TrackerMIL::create(parameters));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (TrackerMIL)

static PyGetSetDef pyopencv_TrackerMIL_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerMIL_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_TrackerMIL_create_static, METH_STATIC), "create([, parameters]) -> retval\n.   @brief Create MIL tracker instance\n.        *  @param parameters MIL parameters TrackerMIL::Params"},

    {NULL,          NULL}
};

// Converter (TrackerMIL)

template<>
struct PyOpenCV_Converter< Ptr<cv::TrackerMIL> >
{
    static PyObject* from(const Ptr<cv::TrackerMIL>& r)
    {
        return pyopencv_TrackerMIL_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::TrackerMIL>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::TrackerMIL> * dst_;
        if (pyopencv_TrackerMIL_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::TrackerMIL> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerMIL_Params (Generic)
//================================================================================

// GetSet (TrackerMIL_Params)


static PyObject* pyopencv_TrackerMIL_Params_get_featureSetNumFeatures(pyopencv_TrackerMIL_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.featureSetNumFeatures);
}

static int pyopencv_TrackerMIL_Params_set_featureSetNumFeatures(pyopencv_TrackerMIL_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the featureSetNumFeatures attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.featureSetNumFeatures, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerMIL_Params_get_samplerInitInRadius(pyopencv_TrackerMIL_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.samplerInitInRadius);
}

static int pyopencv_TrackerMIL_Params_set_samplerInitInRadius(pyopencv_TrackerMIL_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the samplerInitInRadius attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.samplerInitInRadius, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerMIL_Params_get_samplerInitMaxNegNum(pyopencv_TrackerMIL_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.samplerInitMaxNegNum);
}

static int pyopencv_TrackerMIL_Params_set_samplerInitMaxNegNum(pyopencv_TrackerMIL_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the samplerInitMaxNegNum attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.samplerInitMaxNegNum, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerMIL_Params_get_samplerSearchWinSize(pyopencv_TrackerMIL_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.samplerSearchWinSize);
}

static int pyopencv_TrackerMIL_Params_set_samplerSearchWinSize(pyopencv_TrackerMIL_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the samplerSearchWinSize attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.samplerSearchWinSize, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerMIL_Params_get_samplerTrackInRadius(pyopencv_TrackerMIL_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.samplerTrackInRadius);
}

static int pyopencv_TrackerMIL_Params_set_samplerTrackInRadius(pyopencv_TrackerMIL_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the samplerTrackInRadius attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.samplerTrackInRadius, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerMIL_Params_get_samplerTrackMaxNegNum(pyopencv_TrackerMIL_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.samplerTrackMaxNegNum);
}

static int pyopencv_TrackerMIL_Params_set_samplerTrackMaxNegNum(pyopencv_TrackerMIL_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the samplerTrackMaxNegNum attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.samplerTrackMaxNegNum, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerMIL_Params_get_samplerTrackMaxPosNum(pyopencv_TrackerMIL_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.samplerTrackMaxPosNum);
}

static int pyopencv_TrackerMIL_Params_set_samplerTrackMaxPosNum(pyopencv_TrackerMIL_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the samplerTrackMaxPosNum attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.samplerTrackMaxPosNum, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (TrackerMIL_Params)

static int pyopencv_cv_TrackerMIL_Params_TrackerMIL_Params(pyopencv_TrackerMIL_Params_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::TrackerMIL::Params());
        return 0;
    }

    return -1;
}



// Tables (TrackerMIL_Params)

static PyGetSetDef pyopencv_TrackerMIL_Params_getseters[] =
{
    {(char*)"featureSetNumFeatures", (getter)pyopencv_TrackerMIL_Params_get_featureSetNumFeatures, (setter)pyopencv_TrackerMIL_Params_set_featureSetNumFeatures, (char*)"featureSetNumFeatures", NULL},
    {(char*)"samplerInitInRadius", (getter)pyopencv_TrackerMIL_Params_get_samplerInitInRadius, (setter)pyopencv_TrackerMIL_Params_set_samplerInitInRadius, (char*)"samplerInitInRadius", NULL},
    {(char*)"samplerInitMaxNegNum", (getter)pyopencv_TrackerMIL_Params_get_samplerInitMaxNegNum, (setter)pyopencv_TrackerMIL_Params_set_samplerInitMaxNegNum, (char*)"samplerInitMaxNegNum", NULL},
    {(char*)"samplerSearchWinSize", (getter)pyopencv_TrackerMIL_Params_get_samplerSearchWinSize, (setter)pyopencv_TrackerMIL_Params_set_samplerSearchWinSize, (char*)"samplerSearchWinSize", NULL},
    {(char*)"samplerTrackInRadius", (getter)pyopencv_TrackerMIL_Params_get_samplerTrackInRadius, (setter)pyopencv_TrackerMIL_Params_set_samplerTrackInRadius, (char*)"samplerTrackInRadius", NULL},
    {(char*)"samplerTrackMaxNegNum", (getter)pyopencv_TrackerMIL_Params_get_samplerTrackMaxNegNum, (setter)pyopencv_TrackerMIL_Params_set_samplerTrackMaxNegNum, (char*)"samplerTrackMaxNegNum", NULL},
    {(char*)"samplerTrackMaxPosNum", (getter)pyopencv_TrackerMIL_Params_get_samplerTrackMaxPosNum, (setter)pyopencv_TrackerMIL_Params_set_samplerTrackMaxPosNum, (char*)"samplerTrackMaxPosNum", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerMIL_Params_methods[] =
{

    {NULL,          NULL}
};

// Converter (TrackerMIL_Params)

template<>
struct PyOpenCV_Converter< cv::TrackerMIL::Params >
{
    static PyObject* from(const cv::TrackerMIL::Params& r)
    {
        return pyopencv_TrackerMIL_Params_Instance(r);
    }
    static bool to(PyObject* src, cv::TrackerMIL::Params& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::TrackerMIL::Params * dst_;
        if (pyopencv_TrackerMIL_Params_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::TrackerMIL::Params for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerNano (Generic)
//================================================================================

// GetSet (TrackerNano)



// Methods (TrackerNano)

static PyObject* pyopencv_cv_TrackerNano_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_parameters = NULL;
    cv::TrackerNano::Params parameters=TrackerNano::Params();
    Ptr<TrackerNano> retval;

    const char* keywords[] = { "parameters", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:TrackerNano.create", (char**)keywords, &pyobj_parameters) &&
        pyopencv_to_safe(pyobj_parameters, parameters, ArgInfo("parameters", 0)) )
    {
        ERRWRAP2(retval = cv::TrackerNano::create(parameters));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TrackerNano_getTrackingScore(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TrackerNano> * self1 = 0;
    if (!pyopencv_TrackerNano_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TrackerNano' or its derivative)");
    Ptr<cv::TrackerNano> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrackingScore());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (TrackerNano)

static PyGetSetDef pyopencv_TrackerNano_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerNano_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_TrackerNano_create_static, METH_STATIC), "create([, parameters]) -> retval\n.   @brief Constructor\n.       @param parameters NanoTrack parameters TrackerNano::Params"},
    {"getTrackingScore", CV_PY_FN_WITH_KW_(pyopencv_cv_TrackerNano_getTrackingScore, 0), "getTrackingScore() -> retval\n.   @brief Return tracking score"},

    {NULL,          NULL}
};

// Converter (TrackerNano)

template<>
struct PyOpenCV_Converter< Ptr<cv::TrackerNano> >
{
    static PyObject* from(const Ptr<cv::TrackerNano>& r)
    {
        return pyopencv_TrackerNano_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::TrackerNano>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::TrackerNano> * dst_;
        if (pyopencv_TrackerNano_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::TrackerNano> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerNano_Params (Generic)
//================================================================================

// GetSet (TrackerNano_Params)


static PyObject* pyopencv_TrackerNano_Params_get_backbone(pyopencv_TrackerNano_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.backbone);
}

static int pyopencv_TrackerNano_Params_set_backbone(pyopencv_TrackerNano_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the backbone attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.backbone, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerNano_Params_get_backend(pyopencv_TrackerNano_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.backend);
}

static int pyopencv_TrackerNano_Params_set_backend(pyopencv_TrackerNano_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the backend attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.backend, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerNano_Params_get_neckhead(pyopencv_TrackerNano_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.neckhead);
}

static int pyopencv_TrackerNano_Params_set_neckhead(pyopencv_TrackerNano_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the neckhead attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.neckhead, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerNano_Params_get_target(pyopencv_TrackerNano_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.target);
}

static int pyopencv_TrackerNano_Params_set_target(pyopencv_TrackerNano_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the target attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.target, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (TrackerNano_Params)

static int pyopencv_cv_TrackerNano_Params_TrackerNano_Params(pyopencv_TrackerNano_Params_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::TrackerNano::Params());
        return 0;
    }

    return -1;
}



// Tables (TrackerNano_Params)

static PyGetSetDef pyopencv_TrackerNano_Params_getseters[] =
{
    {(char*)"backbone", (getter)pyopencv_TrackerNano_Params_get_backbone, (setter)pyopencv_TrackerNano_Params_set_backbone, (char*)"backbone", NULL},
    {(char*)"backend", (getter)pyopencv_TrackerNano_Params_get_backend, (setter)pyopencv_TrackerNano_Params_set_backend, (char*)"backend", NULL},
    {(char*)"neckhead", (getter)pyopencv_TrackerNano_Params_get_neckhead, (setter)pyopencv_TrackerNano_Params_set_neckhead, (char*)"neckhead", NULL},
    {(char*)"target", (getter)pyopencv_TrackerNano_Params_get_target, (setter)pyopencv_TrackerNano_Params_set_target, (char*)"target", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerNano_Params_methods[] =
{

    {NULL,          NULL}
};

// Converter (TrackerNano_Params)

template<>
struct PyOpenCV_Converter< cv::TrackerNano::Params >
{
    static PyObject* from(const cv::TrackerNano::Params& r)
    {
        return pyopencv_TrackerNano_Params_Instance(r);
    }
    static bool to(PyObject* src, cv::TrackerNano::Params& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::TrackerNano::Params * dst_;
        if (pyopencv_TrackerNano_Params_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::TrackerNano::Params for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerVit (Generic)
//================================================================================

// GetSet (TrackerVit)



// Methods (TrackerVit)

static PyObject* pyopencv_cv_TrackerVit_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_parameters = NULL;
    cv::TrackerVit::Params parameters=TrackerVit::Params();
    Ptr<TrackerVit> retval;

    const char* keywords[] = { "parameters", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:TrackerVit.create", (char**)keywords, &pyobj_parameters) &&
        pyopencv_to_safe(pyobj_parameters, parameters, ArgInfo("parameters", 0)) )
    {
        ERRWRAP2(retval = cv::TrackerVit::create(parameters));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_TrackerVit_getTrackingScore(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::TrackerVit> * self1 = 0;
    if (!pyopencv_TrackerVit_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'TrackerVit' or its derivative)");
    Ptr<cv::TrackerVit> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getTrackingScore());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (TrackerVit)

static PyGetSetDef pyopencv_TrackerVit_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerVit_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_TrackerVit_create_static, METH_STATIC), "create([, parameters]) -> retval\n.   @brief Constructor\n.       @param parameters vit tracker parameters TrackerVit::Params"},
    {"getTrackingScore", CV_PY_FN_WITH_KW_(pyopencv_cv_TrackerVit_getTrackingScore, 0), "getTrackingScore() -> retval\n.   @brief Return tracking score"},

    {NULL,          NULL}
};

// Converter (TrackerVit)

template<>
struct PyOpenCV_Converter< Ptr<cv::TrackerVit> >
{
    static PyObject* from(const Ptr<cv::TrackerVit>& r)
    {
        return pyopencv_TrackerVit_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::TrackerVit>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::TrackerVit> * dst_;
        if (pyopencv_TrackerVit_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::TrackerVit> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// TrackerVit_Params (Generic)
//================================================================================

// GetSet (TrackerVit_Params)


static PyObject* pyopencv_TrackerVit_Params_get_backend(pyopencv_TrackerVit_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.backend);
}

static int pyopencv_TrackerVit_Params_set_backend(pyopencv_TrackerVit_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the backend attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.backend, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerVit_Params_get_meanvalue(pyopencv_TrackerVit_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.meanvalue);
}

static int pyopencv_TrackerVit_Params_set_meanvalue(pyopencv_TrackerVit_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the meanvalue attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.meanvalue, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerVit_Params_get_net(pyopencv_TrackerVit_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.net);
}

static int pyopencv_TrackerVit_Params_set_net(pyopencv_TrackerVit_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the net attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.net, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerVit_Params_get_stdvalue(pyopencv_TrackerVit_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.stdvalue);
}

static int pyopencv_TrackerVit_Params_set_stdvalue(pyopencv_TrackerVit_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the stdvalue attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.stdvalue, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_TrackerVit_Params_get_target(pyopencv_TrackerVit_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.target);
}

static int pyopencv_TrackerVit_Params_set_target(pyopencv_TrackerVit_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the target attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.target, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (TrackerVit_Params)

static int pyopencv_cv_TrackerVit_Params_TrackerVit_Params(pyopencv_TrackerVit_Params_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::TrackerVit::Params());
        return 0;
    }

    return -1;
}



// Tables (TrackerVit_Params)

static PyGetSetDef pyopencv_TrackerVit_Params_getseters[] =
{
    {(char*)"backend", (getter)pyopencv_TrackerVit_Params_get_backend, (setter)pyopencv_TrackerVit_Params_set_backend, (char*)"backend", NULL},
    {(char*)"meanvalue", (getter)pyopencv_TrackerVit_Params_get_meanvalue, (setter)pyopencv_TrackerVit_Params_set_meanvalue, (char*)"meanvalue", NULL},
    {(char*)"net", (getter)pyopencv_TrackerVit_Params_get_net, (setter)pyopencv_TrackerVit_Params_set_net, (char*)"net", NULL},
    {(char*)"stdvalue", (getter)pyopencv_TrackerVit_Params_get_stdvalue, (setter)pyopencv_TrackerVit_Params_set_stdvalue, (char*)"stdvalue", NULL},
    {(char*)"target", (getter)pyopencv_TrackerVit_Params_get_target, (setter)pyopencv_TrackerVit_Params_set_target, (char*)"target", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_TrackerVit_Params_methods[] =
{

    {NULL,          NULL}
};

// Converter (TrackerVit_Params)

template<>
struct PyOpenCV_Converter< cv::TrackerVit::Params >
{
    static PyObject* from(const cv::TrackerVit::Params& r)
    {
        return pyopencv_TrackerVit_Params_Instance(r);
    }
    static bool to(PyObject* src, cv::TrackerVit::Params& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::TrackerVit::Params * dst_;
        if (pyopencv_TrackerVit_Params_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::TrackerVit::Params for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// UMat (Generic)
//================================================================================

// GetSet (UMat)


static PyObject* pyopencv_UMat_get_offset(pyopencv_UMat_t* p, void *closure)
{
    return pyopencv_from(p->v->offset);
}

static int pyopencv_UMat_set_offset(pyopencv_UMat_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the offset attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v->offset, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (UMat)

static int pyopencv_cv_UMat_UMat(pyopencv_UMat_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(9);

    {
    PyObject* pyobj_usageFlags = NULL;
    UMatUsageFlags usageFlags=USAGE_DEFAULT;

    const char* keywords[] = { "usageFlags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:UMat", (char**)keywords, &pyobj_usageFlags) &&
        pyopencv_to_safe(pyobj_usageFlags, usageFlags, ArgInfo("usageFlags", 0)) )
    {
        new (&(self->v)) Ptr<cv::UMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::UMat(usageFlags)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_rows = NULL;
    int rows=0;
    PyObject* pyobj_cols = NULL;
    int cols=0;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_usageFlags = NULL;
    UMatUsageFlags usageFlags=USAGE_DEFAULT;

    const char* keywords[] = { "rows", "cols", "type", "usageFlags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:UMat", (char**)keywords, &pyobj_rows, &pyobj_cols, &pyobj_type, &pyobj_usageFlags) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) &&
        pyopencv_to_safe(pyobj_cols, cols, ArgInfo("cols", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_usageFlags, usageFlags, ArgInfo("usageFlags", 0)) )
    {
        new (&(self->v)) Ptr<cv::UMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::UMat(rows, cols, type, usageFlags)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_usageFlags = NULL;
    UMatUsageFlags usageFlags=USAGE_DEFAULT;

    const char* keywords[] = { "size", "type", "usageFlags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:UMat", (char**)keywords, &pyobj_size, &pyobj_type, &pyobj_usageFlags) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_usageFlags, usageFlags, ArgInfo("usageFlags", 0)) )
    {
        new (&(self->v)) Ptr<cv::UMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::UMat(size, type, usageFlags)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_rows = NULL;
    int rows=0;
    PyObject* pyobj_cols = NULL;
    int cols=0;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_usageFlags = NULL;
    UMatUsageFlags usageFlags=USAGE_DEFAULT;

    const char* keywords[] = { "rows", "cols", "type", "s", "usageFlags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO|O:UMat", (char**)keywords, &pyobj_rows, &pyobj_cols, &pyobj_type, &pyobj_s, &pyobj_usageFlags) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) &&
        pyopencv_to_safe(pyobj_cols, cols, ArgInfo("cols", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_usageFlags, usageFlags, ArgInfo("usageFlags", 0)) )
    {
        new (&(self->v)) Ptr<cv::UMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::UMat(rows, cols, type, s, usageFlags)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_usageFlags = NULL;
    UMatUsageFlags usageFlags=USAGE_DEFAULT;

    const char* keywords[] = { "size", "type", "s", "usageFlags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:UMat", (char**)keywords, &pyobj_size, &pyobj_type, &pyobj_s, &pyobj_usageFlags) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_usageFlags, usageFlags, ArgInfo("usageFlags", 0)) )
    {
        new (&(self->v)) Ptr<cv::UMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::UMat(size, type, s, usageFlags)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_m = NULL;
    UMat m;

    const char* keywords[] = { "m", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:UMat", (char**)keywords, &pyobj_m) &&
        pyopencv_to_safe(pyobj_m, m, ArgInfo("m", 0)) )
    {
        new (&(self->v)) Ptr<cv::UMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::UMat(m)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_m = NULL;
    UMat m;
    PyObject* pyobj_rowRange = NULL;
    Range rowRange;
    PyObject* pyobj_colRange = NULL;
    Range colRange=Range::all();

    const char* keywords[] = { "m", "rowRange", "colRange", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:UMat", (char**)keywords, &pyobj_m, &pyobj_rowRange, &pyobj_colRange) &&
        pyopencv_to_safe(pyobj_m, m, ArgInfo("m", 0)) &&
        pyopencv_to_safe(pyobj_rowRange, rowRange, ArgInfo("rowRange", 0)) &&
        pyopencv_to_safe(pyobj_colRange, colRange, ArgInfo("colRange", 0)) )
    {
        new (&(self->v)) Ptr<cv::UMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::UMat(m, rowRange, colRange)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_m = NULL;
    UMat m;
    PyObject* pyobj_roi = NULL;
    Rect roi;

    const char* keywords[] = { "m", "roi", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:UMat", (char**)keywords, &pyobj_m, &pyobj_roi) &&
        pyopencv_to_safe(pyobj_m, m, ArgInfo("m", 0)) &&
        pyopencv_to_safe(pyobj_roi, roi, ArgInfo("roi", 0)) )
    {
        new (&(self->v)) Ptr<cv::UMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::UMat(m, roi)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_m = NULL;
    UMat m;
    PyObject* pyobj_ranges = NULL;
    vector_Range ranges;

    const char* keywords[] = { "m", "ranges", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:UMat", (char**)keywords, &pyobj_m, &pyobj_ranges) &&
        pyopencv_to_safe(pyobj_m, m, ArgInfo("m", 0)) &&
        pyopencv_to_safe(pyobj_ranges, ranges, ArgInfo("ranges", 0)) )
    {
        new (&(self->v)) Ptr<cv::UMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::UMat(m, ranges)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("UMat");

    return -1;
}

static PyObject* pyopencv_cv_UMat_context_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    void* retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv_UMat_context());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_UMat_get(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::UMat> * self1 = 0;
    if (!pyopencv_UMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'UMat' or its derivative)");
    Ptr<cv::UMat> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv_UMat_get(_self_));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_UMat_handle(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::UMat> * self1 = 0;
    if (!pyopencv_UMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'UMat' or its derivative)");
    Ptr<cv::UMat> _self_ = *(self1);
    PyObject* pyobj_accessFlags = NULL;
    AccessFlag accessFlags=static_cast<AccessFlag>(0);
    void* retval;

    const char* keywords[] = { "accessFlags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:UMat.handle", (char**)keywords, &pyobj_accessFlags) &&
        pyopencv_to_safe(pyobj_accessFlags, accessFlags, ArgInfo("accessFlags", 0)) )
    {
        ERRWRAP2(retval = _self_->handle(accessFlags));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_UMat_isContinuous(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::UMat> * self1 = 0;
    if (!pyopencv_UMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'UMat' or its derivative)");
    Ptr<cv::UMat> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isContinuous());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_UMat_isSubmatrix(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::UMat> * self1 = 0;
    if (!pyopencv_UMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'UMat' or its derivative)");
    Ptr<cv::UMat> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isSubmatrix());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_UMat_queue_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    void* retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv_UMat_queue());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (UMat)

static PyGetSetDef pyopencv_UMat_getseters[] =
{
    {(char*)"offset", (getter)pyopencv_UMat_get_offset, (setter)pyopencv_UMat_set_offset, (char*)"offset", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_UMat_methods[] =
{
    {"context", CV_PY_FN_WITH_KW_(pyopencv_cv_UMat_context_static, METH_STATIC), "context() -> retval\n."},
    {"get", CV_PY_FN_WITH_KW_(pyopencv_cv_UMat_get, 0), "get() -> retval\n."},
    {"handle", CV_PY_FN_WITH_KW_(pyopencv_cv_UMat_handle, 0), "handle(accessFlags) -> retval\n."},
    {"isContinuous", CV_PY_FN_WITH_KW_(pyopencv_cv_UMat_isContinuous, 0), "isContinuous() -> retval\n."},
    {"isSubmatrix", CV_PY_FN_WITH_KW_(pyopencv_cv_UMat_isSubmatrix, 0), "isSubmatrix() -> retval\n."},
    {"queue", CV_PY_FN_WITH_KW_(pyopencv_cv_UMat_queue_static, METH_STATIC), "queue() -> retval\n."},

    {NULL,          NULL}
};

// Converter (UMat)

template<>
struct PyOpenCV_Converter< Ptr<cv::UMat> >
{
    static PyObject* from(const Ptr<cv::UMat>& r)
    {
        return pyopencv_UMat_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::UMat>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::UMat> * dst_;
        if (pyopencv_UMat_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
    {
        Ptr<Mat> _src;
        if (pyopencv_to_safe(src, _src, info))
        {
            return cv_mappable_to(_src, dst);
        }
    }

        failmsg("Expected Ptr<cv::UMat> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// VariationalRefinement (Generic)
//================================================================================

// GetSet (VariationalRefinement)



// Methods (VariationalRefinement)

static PyObject* pyopencv_cv_VariationalRefinement_calcUV(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_I0 = NULL;
    Mat I0;
    PyObject* pyobj_I1 = NULL;
    Mat I1;
    PyObject* pyobj_flow_u = NULL;
    Mat flow_u;
    PyObject* pyobj_flow_v = NULL;
    Mat flow_v;

    const char* keywords[] = { "I0", "I1", "flow_u", "flow_v", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO:VariationalRefinement.calcUV", (char**)keywords, &pyobj_I0, &pyobj_I1, &pyobj_flow_u, &pyobj_flow_v) &&
        pyopencv_to_safe(pyobj_I0, I0, ArgInfo("I0", 0)) &&
        pyopencv_to_safe(pyobj_I1, I1, ArgInfo("I1", 0)) &&
        pyopencv_to_safe(pyobj_flow_u, flow_u, ArgInfo("flow_u", 1)) &&
        pyopencv_to_safe(pyobj_flow_v, flow_v, ArgInfo("flow_v", 1)) )
    {
        ERRWRAP2(_self_->calcUV(I0, I1, flow_u, flow_v));
        return Py_BuildValue("(NN)", pyopencv_from(flow_u), pyopencv_from(flow_v));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_I0 = NULL;
    UMat I0;
    PyObject* pyobj_I1 = NULL;
    UMat I1;
    PyObject* pyobj_flow_u = NULL;
    UMat flow_u;
    PyObject* pyobj_flow_v = NULL;
    UMat flow_v;

    const char* keywords[] = { "I0", "I1", "flow_u", "flow_v", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO:VariationalRefinement.calcUV", (char**)keywords, &pyobj_I0, &pyobj_I1, &pyobj_flow_u, &pyobj_flow_v) &&
        pyopencv_to_safe(pyobj_I0, I0, ArgInfo("I0", 0)) &&
        pyopencv_to_safe(pyobj_I1, I1, ArgInfo("I1", 0)) &&
        pyopencv_to_safe(pyobj_flow_u, flow_u, ArgInfo("flow_u", 1)) &&
        pyopencv_to_safe(pyobj_flow_v, flow_v, ArgInfo("flow_v", 1)) )
    {
        ERRWRAP2(_self_->calcUV(I0, I1, flow_u, flow_v));
        return Py_BuildValue("(NN)", pyopencv_from(flow_u), pyopencv_from(flow_v));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("calcUV");

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    Ptr<VariationalRefinement> retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::VariationalRefinement::create());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_getAlpha(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAlpha());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_getDelta(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDelta());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_getFixedPointIterations(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFixedPointIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_getGamma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getGamma());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_getOmega(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getOmega());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_getSorIterations(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getSorIterations());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_setAlpha(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    float val=0.f;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VariationalRefinement.setAlpha", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setAlpha(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_setDelta(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    float val=0.f;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VariationalRefinement.setDelta", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setDelta(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_setFixedPointIterations(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VariationalRefinement.setFixedPointIterations", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setFixedPointIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_setGamma(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    float val=0.f;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VariationalRefinement.setGamma", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setGamma(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_setOmega(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    float val=0.f;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VariationalRefinement.setOmega", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setOmega(val));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VariationalRefinement_setSorIterations(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VariationalRefinement> * self1 = 0;
    if (!pyopencv_VariationalRefinement_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VariationalRefinement' or its derivative)");
    Ptr<cv::VariationalRefinement> _self_ = *(self1);
    PyObject* pyobj_val = NULL;
    int val=0;

    const char* keywords[] = { "val", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VariationalRefinement.setSorIterations", (char**)keywords, &pyobj_val) &&
        pyopencv_to_safe(pyobj_val, val, ArgInfo("val", 0)) )
    {
        ERRWRAP2(_self_->setSorIterations(val));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (VariationalRefinement)

static PyGetSetDef pyopencv_VariationalRefinement_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_VariationalRefinement_methods[] =
{
    {"calcUV", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_calcUV, 0), "calcUV(I0, I1, flow_u, flow_v) -> flow_u, flow_v\n.   @brief @ref calc function overload to handle separate horizontal (u) and vertical (v) flow components\n.   (to avoid extra splits/merges)"},
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_create_static, METH_STATIC), "create() -> retval\n.   @brief Creates an instance of VariationalRefinement"},
    {"getAlpha", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_getAlpha, 0), "getAlpha() -> retval\n.   @brief Weight of the smoothness term\n.   @see setAlpha"},
    {"getDelta", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_getDelta, 0), "getDelta() -> retval\n.   @brief Weight of the color constancy term\n.   @see setDelta"},
    {"getFixedPointIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_getFixedPointIterations, 0), "getFixedPointIterations() -> retval\n.   @brief Number of outer (fixed-point) iterations in the minimization procedure.\n.   @see setFixedPointIterations"},
    {"getGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_getGamma, 0), "getGamma() -> retval\n.   @brief Weight of the gradient constancy term\n.   @see setGamma"},
    {"getOmega", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_getOmega, 0), "getOmega() -> retval\n.   @brief Relaxation factor in SOR\n.   @see setOmega"},
    {"getSorIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_getSorIterations, 0), "getSorIterations() -> retval\n.   @brief Number of inner successive over-relaxation (SOR) iterations\n.           in the minimization procedure to solve the respective linear system.\n.   @see setSorIterations"},
    {"setAlpha", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_setAlpha, 0), "setAlpha(val) -> None\n.   @copybrief getAlpha @see getAlpha"},
    {"setDelta", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_setDelta, 0), "setDelta(val) -> None\n.   @copybrief getDelta @see getDelta"},
    {"setFixedPointIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_setFixedPointIterations, 0), "setFixedPointIterations(val) -> None\n.   @copybrief getFixedPointIterations @see getFixedPointIterations"},
    {"setGamma", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_setGamma, 0), "setGamma(val) -> None\n.   @copybrief getGamma @see getGamma"},
    {"setOmega", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_setOmega, 0), "setOmega(val) -> None\n.   @copybrief getOmega @see getOmega"},
    {"setSorIterations", CV_PY_FN_WITH_KW_(pyopencv_cv_VariationalRefinement_setSorIterations, 0), "setSorIterations(val) -> None\n.   @copybrief getSorIterations @see getSorIterations"},

    {NULL,          NULL}
};

// Converter (VariationalRefinement)

template<>
struct PyOpenCV_Converter< Ptr<cv::VariationalRefinement> >
{
    static PyObject* from(const Ptr<cv::VariationalRefinement>& r)
    {
        return pyopencv_VariationalRefinement_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::VariationalRefinement>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::VariationalRefinement> * dst_;
        if (pyopencv_VariationalRefinement_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::VariationalRefinement> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// VideoCapture (Generic)
//================================================================================

// GetSet (VideoCapture)



// Methods (VideoCapture)

static int pyopencv_cv_VideoCapture_VideoCapture(pyopencv_VideoCapture_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(5);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture()));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=CAP_ANY;

    const char* keywords[] = { "filename", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:VideoCapture", (char**)keywords, &pyobj_filename, &pyobj_apiPreference) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture(filename, apiPreference)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=0;
    PyObject* pyobj_params = NULL;
    vector_int params;

    const char* keywords[] = { "filename", "apiPreference", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:VideoCapture", (char**)keywords, &pyobj_filename, &pyobj_apiPreference, &pyobj_params) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture(filename, apiPreference, params)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_index = NULL;
    int index=0;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=CAP_ANY;

    const char* keywords[] = { "index", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:VideoCapture", (char**)keywords, &pyobj_index, &pyobj_apiPreference) &&
        pyopencv_to_safe(pyobj_index, index, ArgInfo("index", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture(index, apiPreference)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_index = NULL;
    int index=0;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=0;
    PyObject* pyobj_params = NULL;
    vector_int params;

    const char* keywords[] = { "index", "apiPreference", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:VideoCapture", (char**)keywords, &pyobj_index, &pyobj_apiPreference, &pyobj_params) &&
        pyopencv_to_safe(pyobj_index, index, ArgInfo("index", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoCapture>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoCapture(index, apiPreference, params)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("VideoCapture");

    return -1;
}

static PyObject* pyopencv_cv_VideoCapture_get(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    PyObject* pyobj_propId = NULL;
    int propId=0;
    double retval;

    const char* keywords[] = { "propId", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VideoCapture.get", (char**)keywords, &pyobj_propId) &&
        pyopencv_to_safe(pyobj_propId, propId, ArgInfo("propId", 0)) )
    {
        ERRWRAP2(retval = _self_->get(propId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_getBackendName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackendName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_getExceptionMode(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getExceptionMode());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_grab(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->grab());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_isOpened(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_open(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=CAP_ANY;
    bool retval;

    const char* keywords[] = { "filename", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:VideoCapture.open", (char**)keywords, &pyobj_filename, &pyobj_apiPreference) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, apiPreference));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=0;
    PyObject* pyobj_params = NULL;
    vector_int params;
    bool retval;

    const char* keywords[] = { "filename", "apiPreference", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:VideoCapture.open", (char**)keywords, &pyobj_filename, &pyobj_apiPreference, &pyobj_params) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, apiPreference, params));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_index = NULL;
    int index=0;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=CAP_ANY;
    bool retval;

    const char* keywords[] = { "index", "apiPreference", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:VideoCapture.open", (char**)keywords, &pyobj_index, &pyobj_apiPreference) &&
        pyopencv_to_safe(pyobj_index, index, ArgInfo("index", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) )
    {
        ERRWRAP2(retval = _self_->open(index, apiPreference));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_index = NULL;
    int index=0;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=0;
    PyObject* pyobj_params = NULL;
    vector_int params;
    bool retval;

    const char* keywords[] = { "index", "apiPreference", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:VideoCapture.open", (char**)keywords, &pyobj_index, &pyobj_apiPreference, &pyobj_params) &&
        pyopencv_to_safe(pyobj_index, index, ArgInfo("index", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->open(index, apiPreference, params));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("open");

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_read(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    bool retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:VideoCapture.read", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->read(image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    bool retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:VideoCapture.read", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 1)) )
    {
        ERRWRAP2(retval = _self_->read(image));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("read");

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_release(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_retrieve(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    PyObject* pyobj_flag = NULL;
    int flag=0;
    bool retval;

    const char* keywords[] = { "image", "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OO:VideoCapture.retrieve", (char**)keywords, &pyobj_image, &pyobj_flag) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 1)) &&
        pyopencv_to_safe(pyobj_flag, flag, ArgInfo("flag", 0)) )
    {
        ERRWRAP2(retval = _self_->retrieve(image, flag));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    PyObject* pyobj_flag = NULL;
    int flag=0;
    bool retval;

    const char* keywords[] = { "image", "flag", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OO:VideoCapture.retrieve", (char**)keywords, &pyobj_image, &pyobj_flag) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 1)) &&
        pyopencv_to_safe(pyobj_flag, flag, ArgInfo("flag", 0)) )
    {
        ERRWRAP2(retval = _self_->retrieve(image, flag));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(image));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("retrieve");

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_set(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    PyObject* pyobj_propId = NULL;
    int propId=0;
    PyObject* pyobj_value = NULL;
    double value=0;
    bool retval;

    const char* keywords[] = { "propId", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:VideoCapture.set", (char**)keywords, &pyobj_propId, &pyobj_value) &&
        pyopencv_to_safe(pyobj_propId, propId, ArgInfo("propId", 0)) &&
        pyopencv_to_safe(pyobj_value, value, ArgInfo("value", 0)) )
    {
        ERRWRAP2(retval = _self_->set(propId, value));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_setExceptionMode(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoCapture> * self1 = 0;
    if (!pyopencv_VideoCapture_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoCapture' or its derivative)");
    Ptr<cv::VideoCapture> _self_ = *(self1);
    PyObject* pyobj_enable = NULL;
    bool enable=0;

    const char* keywords[] = { "enable", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VideoCapture.setExceptionMode", (char**)keywords, &pyobj_enable) &&
        pyopencv_to_safe(pyobj_enable, enable, ArgInfo("enable", 0)) )
    {
        ERRWRAP2(_self_->setExceptionMode(enable));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoCapture_waitAny_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_streams = NULL;
    vector_VideoCapture streams;
    vector_int readyIndex;
    PyObject* pyobj_timeoutNs = NULL;
    int64 timeoutNs=0;
    bool retval;

    const char* keywords[] = { "streams", "timeoutNs", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:VideoCapture.waitAny", (char**)keywords, &pyobj_streams, &pyobj_timeoutNs) &&
        pyopencv_to_safe(pyobj_streams, streams, ArgInfo("streams", 0)) &&
        pyopencv_to_safe(pyobj_timeoutNs, timeoutNs, ArgInfo("timeoutNs", 0)) )
    {
        ERRWRAP2(retval = cv::VideoCapture::waitAny(streams, readyIndex, timeoutNs));
        return Py_BuildValue("(NN)", pyopencv_from(retval), pyopencv_from(readyIndex));
    }

    return NULL;
}



// Tables (VideoCapture)

static PyGetSetDef pyopencv_VideoCapture_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_VideoCapture_methods[] =
{
    {"get", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_get, 0), "get(propId) -> retval\n.   @brief Returns the specified VideoCapture property\n.   \n.       @param propId Property identifier from cv::VideoCaptureProperties (eg. cv::CAP_PROP_POS_MSEC, cv::CAP_PROP_POS_FRAMES, ...)\n.       or one from @ref videoio_flags_others\n.       @return Value for the specified property. Value 0 is returned when querying a property that is\n.       not supported by the backend used by the VideoCapture instance.\n.   \n.       @note Reading / writing properties involves many layers. Some unexpected result might happens\n.       along this chain.\n.       @code{.txt}\n.       VideoCapture -> API Backend -> Operating System -> Device Driver -> Device Hardware\n.       @endcode\n.       The returned value might be different from what really used by the device or it could be encoded\n.       using device dependent rules (eg. steps or percentage). Effective behaviour depends from device\n.       driver and API Backend"},
    {"getBackendName", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_getBackendName, 0), "getBackendName() -> retval\n.   @brief Returns used backend API name\n.   \n.        @note Stream should be opened."},
    {"getExceptionMode", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_getExceptionMode, 0), "getExceptionMode() -> retval\n."},
    {"grab", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_grab, 0), "grab() -> retval\n.   @brief Grabs the next frame from video file or capturing device.\n.   \n.       @return `true` (non-zero) in the case of success.\n.   \n.       The method/function grabs the next frame from video file or camera and returns true (non-zero) in\n.       the case of success.\n.   \n.       The primary use of the function is in multi-camera environments, especially when the cameras do not\n.       have hardware synchronization. That is, you call VideoCapture::grab() for each camera and after that\n.       call the slower method VideoCapture::retrieve() to decode and get frame from each camera. This way\n.       the overhead on demosaicing or motion jpeg decompression etc. is eliminated and the retrieved frames\n.       from different cameras will be closer in time.\n.   \n.       Also, when a connected camera is multi-head (for example, a stereo camera or a Kinect device), the\n.       correct way of retrieving data from it is to call VideoCapture::grab() first and then call\n.       VideoCapture::retrieve() one or more times with different values of the channel parameter.\n.   \n.       @ref tutorial_kinect_openni"},
    {"isOpened", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_isOpened, 0), "isOpened() -> retval\n.   @brief Returns true if video capturing has been initialized already.\n.   \n.       If the previous call to VideoCapture constructor or VideoCapture::open() succeeded, the method returns\n.       true."},
    {"open", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_open, 0), "open(filename[, apiPreference]) -> retval\n.   @brief  Opens a video file or a capturing device or an IP video stream for video capturing.\n.   \n.       @overload\n.   \n.       Parameters are same as the constructor VideoCapture(const String& filename, int apiPreference = CAP_ANY)\n.       @return `true` if the file has been successfully opened\n.   \n.       The method first calls VideoCapture::release to close the already opened file or camera.\n\n\n\nopen(filename, apiPreference, params) -> retval\n.   @brief  Opens a video file or a capturing device or an IP video stream for video capturing with API Preference and parameters\n.   \n.       @overload\n.   \n.       The `params` parameter allows to specify extra parameters encoded as pairs `(paramId_1, paramValue_1, paramId_2, paramValue_2, ...)`.\n.       See cv::VideoCaptureProperties\n.   \n.       @return `true` if the file has been successfully opened\n.   \n.       The method first calls VideoCapture::release to close the already opened file or camera.\n\n\n\nopen(index[, apiPreference]) -> retval\n.   @brief  Opens a camera for video capturing\n.   \n.       @overload\n.   \n.       Parameters are same as the constructor VideoCapture(int index, int apiPreference = CAP_ANY)\n.       @return `true` if the camera has been successfully opened.\n.   \n.       The method first calls VideoCapture::release to close the already opened file or camera.\n\n\n\nopen(index, apiPreference, params) -> retval\n.   @brief  Opens a camera for video capturing with API Preference and parameters\n.   \n.       @overload\n.   \n.       The `params` parameter allows to specify extra parameters encoded as pairs `(paramId_1, paramValue_1, paramId_2, paramValue_2, ...)`.\n.       See cv::VideoCaptureProperties\n.   \n.       @return `true` if the camera has been successfully opened.\n.   \n.       The method first calls VideoCapture::release to close the already opened file or camera."},
    {"read", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_read, 0), "read([, image]) -> retval, image\n.   @brief Grabs, decodes and returns the next video frame.\n.   \n.       @param [out] image the video frame is returned here. If no frames has been grabbed the image will be empty.\n.       @return `false` if no frames has been grabbed\n.   \n.       The method/function combines VideoCapture::grab() and VideoCapture::retrieve() in one call. This is the\n.       most convenient method for reading video files or capturing data from decode and returns the just\n.       grabbed frame. If no frames has been grabbed (camera has been disconnected, or there are no more\n.       frames in video file), the method returns false and the function returns empty image (with %cv::Mat, test it with Mat::empty()).\n.   \n.       @note In @ref videoio_c \"C API\", functions cvRetrieveFrame() and cv.RetrieveFrame() return image stored inside the video\n.       capturing structure. It is not allowed to modify or release the image! You can copy the frame using\n.       cvCloneImage and then do whatever you want with the copy."},
    {"release", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_release, 0), "release() -> None\n.   @brief Closes video file or capturing device.\n.   \n.       The method is automatically called by subsequent VideoCapture::open and by VideoCapture\n.       destructor.\n.   \n.       The C function also deallocates memory and clears \\*capture pointer."},
    {"retrieve", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_retrieve, 0), "retrieve([, image[, flag]]) -> retval, image\n.   @brief Decodes and returns the grabbed video frame.\n.   \n.       @param [out] image the video frame is returned here. If no frames has been grabbed the image will be empty.\n.       @param flag it could be a frame index or a driver specific flag\n.       @return `false` if no frames has been grabbed\n.   \n.       The method decodes and returns the just grabbed frame. If no frames has been grabbed\n.       (camera has been disconnected, or there are no more frames in video file), the method returns false\n.       and the function returns an empty image (with %cv::Mat, test it with Mat::empty()).\n.   \n.       @sa read()\n.   \n.       @note In @ref videoio_c \"C API\", functions cvRetrieveFrame() and cv.RetrieveFrame() return image stored inside the video\n.       capturing structure. It is not allowed to modify or release the image! You can copy the frame using\n.       cvCloneImage and then do whatever you want with the copy."},
    {"set", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_set, 0), "set(propId, value) -> retval\n.   @brief Sets a property in the VideoCapture.\n.   \n.       @param propId Property identifier from cv::VideoCaptureProperties (eg. cv::CAP_PROP_POS_MSEC, cv::CAP_PROP_POS_FRAMES, ...)\n.       or one from @ref videoio_flags_others\n.       @param value Value of the property.\n.       @return `true` if the property is supported by backend used by the VideoCapture instance.\n.       @note Even if it returns `true` this doesn't ensure that the property\n.       value has been accepted by the capture device. See note in VideoCapture::get()"},
    {"setExceptionMode", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_setExceptionMode, 0), "setExceptionMode(enable) -> None\n.   Switches exceptions mode\n.        *\n.        * methods raise exceptions if not successful instead of returning an error code"},
    {"waitAny", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoCapture_waitAny_static, METH_STATIC), "waitAny(streams[, timeoutNs]) -> retval, readyIndex\n.   @brief Wait for ready frames from VideoCapture.\n.   \n.       @param streams input video streams\n.       @param readyIndex stream indexes with grabbed frames (ready to use .retrieve() to fetch actual frame)\n.       @param timeoutNs number of nanoseconds (0 - infinite)\n.       @return `true` if streamReady is not empty\n.   \n.       @throws Exception %Exception on stream errors (check .isOpened() to filter out malformed streams) or VideoCapture type is not supported\n.   \n.       The primary use of the function is in multi-camera environments.\n.       The method fills the ready state vector, grabs video frame, if camera is ready.\n.   \n.       After this call use VideoCapture::retrieve() to decode and fetch frame data."},

    {NULL,          NULL}
};

// Converter (VideoCapture)

template<>
struct PyOpenCV_Converter< Ptr<cv::VideoCapture> >
{
    static PyObject* from(const Ptr<cv::VideoCapture>& r)
    {
        return pyopencv_VideoCapture_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::VideoCapture>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::VideoCapture> * dst_;
        if (pyopencv_VideoCapture_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::VideoCapture> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// VideoWriter (Generic)
//================================================================================

// GetSet (VideoWriter)



// Methods (VideoWriter)

static int pyopencv_cv_VideoWriter_VideoWriter(pyopencv_VideoWriter_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    pyPrepareArgumentConversionErrorsStorage(5);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoWriter()));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_fourcc = NULL;
    int fourcc=0;
    PyObject* pyobj_fps = NULL;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    PyObject* pyobj_isColor = NULL;
    bool isColor=true;

    const char* keywords[] = { "filename", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO|O:VideoWriter", (char**)keywords, &pyobj_filename, &pyobj_fourcc, &pyobj_fps, &pyobj_frameSize, &pyobj_isColor) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_fourcc, fourcc, ArgInfo("fourcc", 0)) &&
        pyopencv_to_safe(pyobj_fps, fps, ArgInfo("fps", 0)) &&
        pyopencv_to_safe(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) &&
        pyopencv_to_safe(pyobj_isColor, isColor, ArgInfo("isColor", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoWriter(filename, fourcc, fps, frameSize, isColor)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=0;
    PyObject* pyobj_fourcc = NULL;
    int fourcc=0;
    PyObject* pyobj_fps = NULL;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    PyObject* pyobj_isColor = NULL;
    bool isColor=true;

    const char* keywords[] = { "filename", "apiPreference", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOOO|O:VideoWriter", (char**)keywords, &pyobj_filename, &pyobj_apiPreference, &pyobj_fourcc, &pyobj_fps, &pyobj_frameSize, &pyobj_isColor) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) &&
        pyopencv_to_safe(pyobj_fourcc, fourcc, ArgInfo("fourcc", 0)) &&
        pyopencv_to_safe(pyobj_fps, fps, ArgInfo("fps", 0)) &&
        pyopencv_to_safe(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) &&
        pyopencv_to_safe(pyobj_isColor, isColor, ArgInfo("isColor", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoWriter(filename, apiPreference, fourcc, fps, frameSize, isColor)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_fourcc = NULL;
    int fourcc=0;
    PyObject* pyobj_fps = NULL;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    PyObject* pyobj_params = NULL;
    vector_int params;

    const char* keywords[] = { "filename", "fourcc", "fps", "frameSize", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOOO:VideoWriter", (char**)keywords, &pyobj_filename, &pyobj_fourcc, &pyobj_fps, &pyobj_frameSize, &pyobj_params) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_fourcc, fourcc, ArgInfo("fourcc", 0)) &&
        pyopencv_to_safe(pyobj_fps, fps, ArgInfo("fps", 0)) &&
        pyopencv_to_safe(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoWriter(filename, fourcc, fps, frameSize, params)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=0;
    PyObject* pyobj_fourcc = NULL;
    int fourcc=0;
    PyObject* pyobj_fps = NULL;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    PyObject* pyobj_params = NULL;
    vector_int params;

    const char* keywords[] = { "filename", "apiPreference", "fourcc", "fps", "frameSize", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOOOO:VideoWriter", (char**)keywords, &pyobj_filename, &pyobj_apiPreference, &pyobj_fourcc, &pyobj_fps, &pyobj_frameSize, &pyobj_params) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) &&
        pyopencv_to_safe(pyobj_fourcc, fourcc, ArgInfo("fourcc", 0)) &&
        pyopencv_to_safe(pyobj_fps, fps, ArgInfo("fps", 0)) &&
        pyopencv_to_safe(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        new (&(self->v)) Ptr<cv::VideoWriter>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::VideoWriter(filename, apiPreference, fourcc, fps, frameSize, params)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("VideoWriter");

    return -1;
}

static PyObject* pyopencv_cv_VideoWriter_fourcc_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;

    PyObject* pyobj_c1 = NULL;
    char c1;
    PyObject* pyobj_c2 = NULL;
    char c2;
    PyObject* pyobj_c3 = NULL;
    char c3;
    PyObject* pyobj_c4 = NULL;
    char c4;
    int retval;

    const char* keywords[] = { "c1", "c2", "c3", "c4", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO:VideoWriter.fourcc", (char**)keywords, &pyobj_c1, &pyobj_c2, &pyobj_c3, &pyobj_c4) &&
        convert_to_char(pyobj_c1, &c1, ArgInfo("c1", 0)) &&
        convert_to_char(pyobj_c2, &c2, ArgInfo("c2", 0)) &&
        convert_to_char(pyobj_c3, &c3, ArgInfo("c3", 0)) &&
        convert_to_char(pyobj_c4, &c4, ArgInfo("c4", 0)) )
    {
        ERRWRAP2(retval = cv::VideoWriter::fourcc(c1, c2, c3, c4));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_get(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    PyObject* pyobj_propId = NULL;
    int propId=0;
    double retval;

    const char* keywords[] = { "propId", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VideoWriter.get", (char**)keywords, &pyobj_propId) &&
        pyopencv_to_safe(pyobj_propId, propId, ArgInfo("propId", 0)) )
    {
        ERRWRAP2(retval = _self_->get(propId));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_getBackendName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getBackendName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_isOpened(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isOpened());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_open(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_fourcc = NULL;
    int fourcc=0;
    PyObject* pyobj_fps = NULL;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    PyObject* pyobj_isColor = NULL;
    bool isColor=true;
    bool retval;

    const char* keywords[] = { "filename", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO|O:VideoWriter.open", (char**)keywords, &pyobj_filename, &pyobj_fourcc, &pyobj_fps, &pyobj_frameSize, &pyobj_isColor) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_fourcc, fourcc, ArgInfo("fourcc", 0)) &&
        pyopencv_to_safe(pyobj_fps, fps, ArgInfo("fps", 0)) &&
        pyopencv_to_safe(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) &&
        pyopencv_to_safe(pyobj_isColor, isColor, ArgInfo("isColor", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, fourcc, fps, frameSize, isColor));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=0;
    PyObject* pyobj_fourcc = NULL;
    int fourcc=0;
    PyObject* pyobj_fps = NULL;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    PyObject* pyobj_isColor = NULL;
    bool isColor=true;
    bool retval;

    const char* keywords[] = { "filename", "apiPreference", "fourcc", "fps", "frameSize", "isColor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOOO|O:VideoWriter.open", (char**)keywords, &pyobj_filename, &pyobj_apiPreference, &pyobj_fourcc, &pyobj_fps, &pyobj_frameSize, &pyobj_isColor) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) &&
        pyopencv_to_safe(pyobj_fourcc, fourcc, ArgInfo("fourcc", 0)) &&
        pyopencv_to_safe(pyobj_fps, fps, ArgInfo("fps", 0)) &&
        pyopencv_to_safe(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) &&
        pyopencv_to_safe(pyobj_isColor, isColor, ArgInfo("isColor", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, apiPreference, fourcc, fps, frameSize, isColor));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_fourcc = NULL;
    int fourcc=0;
    PyObject* pyobj_fps = NULL;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    PyObject* pyobj_params = NULL;
    vector_int params;
    bool retval;

    const char* keywords[] = { "filename", "fourcc", "fps", "frameSize", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOOO:VideoWriter.open", (char**)keywords, &pyobj_filename, &pyobj_fourcc, &pyobj_fps, &pyobj_frameSize, &pyobj_params) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_fourcc, fourcc, ArgInfo("fourcc", 0)) &&
        pyopencv_to_safe(pyobj_fps, fps, ArgInfo("fps", 0)) &&
        pyopencv_to_safe(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, fourcc, fps, frameSize, params));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_filename = NULL;
    String filename;
    PyObject* pyobj_apiPreference = NULL;
    int apiPreference=0;
    PyObject* pyobj_fourcc = NULL;
    int fourcc=0;
    PyObject* pyobj_fps = NULL;
    double fps=0;
    PyObject* pyobj_frameSize = NULL;
    Size frameSize;
    PyObject* pyobj_params = NULL;
    vector_int params;
    bool retval;

    const char* keywords[] = { "filename", "apiPreference", "fourcc", "fps", "frameSize", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOOOO:VideoWriter.open", (char**)keywords, &pyobj_filename, &pyobj_apiPreference, &pyobj_fourcc, &pyobj_fps, &pyobj_frameSize, &pyobj_params) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) &&
        pyopencv_to_safe(pyobj_apiPreference, apiPreference, ArgInfo("apiPreference", 0)) &&
        pyopencv_to_safe(pyobj_fourcc, fourcc, ArgInfo("fourcc", 0)) &&
        pyopencv_to_safe(pyobj_fps, fps, ArgInfo("fps", 0)) &&
        pyopencv_to_safe(pyobj_frameSize, frameSize, ArgInfo("frameSize", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->open(filename, apiPreference, fourcc, fps, frameSize, params));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("open");

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_release(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_set(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    PyObject* pyobj_propId = NULL;
    int propId=0;
    PyObject* pyobj_value = NULL;
    double value=0;
    bool retval;

    const char* keywords[] = { "propId", "value", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:VideoWriter.set", (char**)keywords, &pyobj_propId, &pyobj_value) &&
        pyopencv_to_safe(pyobj_propId, propId, ArgInfo("propId", 0)) &&
        pyopencv_to_safe(pyobj_value, value, ArgInfo("value", 0)) )
    {
        ERRWRAP2(retval = _self_->set(propId, value));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_VideoWriter_write(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv;


    Ptr<cv::VideoWriter> * self1 = 0;
    if (!pyopencv_VideoWriter_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'VideoWriter' or its derivative)");
    Ptr<cv::VideoWriter> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VideoWriter.write", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->write(image));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:VideoWriter.write", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(_self_->write(image));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("write");

    return NULL;
}



// Tables (VideoWriter)

static PyGetSetDef pyopencv_VideoWriter_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_VideoWriter_methods[] =
{
    {"fourcc", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_fourcc_static, METH_STATIC), "fourcc(c1, c2, c3, c4) -> retval\n.   @brief Concatenates 4 chars to a fourcc code\n.   \n.       @return a fourcc code\n.   \n.       This static method constructs the fourcc code of the codec to be used in the constructor\n.       VideoWriter::VideoWriter or VideoWriter::open."},
    {"get", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_get, 0), "get(propId) -> retval\n.   @brief Returns the specified VideoWriter property\n.   \n.        @param propId Property identifier from cv::VideoWriterProperties (eg. cv::VIDEOWRITER_PROP_QUALITY)\n.        or one of @ref videoio_flags_others\n.   \n.        @return Value for the specified property. Value 0 is returned when querying a property that is\n.        not supported by the backend used by the VideoWriter instance."},
    {"getBackendName", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_getBackendName, 0), "getBackendName() -> retval\n.   @brief Returns used backend API name\n.   \n.        @note Stream should be opened."},
    {"isOpened", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_isOpened, 0), "isOpened() -> retval\n.   @brief Returns true if video writer has been successfully initialized."},
    {"open", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_open, 0), "open(filename, fourcc, fps, frameSize[, isColor]) -> retval\n.   @brief Initializes or reinitializes video writer.\n.   \n.       The method opens video writer. Parameters are the same as in the constructor\n.       VideoWriter::VideoWriter.\n.       @return `true` if video writer has been successfully initialized\n.   \n.       The method first calls VideoWriter::release to close the already opened file.\n\n\n\nopen(filename, apiPreference, fourcc, fps, frameSize[, isColor]) -> retval\n.   @overload\n\n\n\nopen(filename, fourcc, fps, frameSize, params) -> retval\n.   @overload\n\n\n\nopen(filename, apiPreference, fourcc, fps, frameSize, params) -> retval\n.   @overload"},
    {"release", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_release, 0), "release() -> None\n.   @brief Closes the video writer.\n.   \n.       The method is automatically called by subsequent VideoWriter::open and by the VideoWriter\n.       destructor."},
    {"set", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_set, 0), "set(propId, value) -> retval\n.   @brief Sets a property in the VideoWriter.\n.   \n.        @param propId Property identifier from cv::VideoWriterProperties (eg. cv::VIDEOWRITER_PROP_QUALITY)\n.        or one of @ref videoio_flags_others\n.   \n.        @param value Value of the property.\n.        @return  `true` if the property is supported by the backend used by the VideoWriter instance."},
    {"write", CV_PY_FN_WITH_KW_(pyopencv_cv_VideoWriter_write, 0), "write(image) -> None\n.   @brief Writes the next video frame\n.   \n.       @param image The written frame. In general, color images are expected in BGR format.\n.   \n.       The function/method writes the specified image to video file. It must have the same size as has\n.       been specified when opening the video writer."},

    {NULL,          NULL}
};

// Converter (VideoWriter)

template<>
struct PyOpenCV_Converter< Ptr<cv::VideoWriter> >
{
    static PyObject* from(const Ptr<cv::VideoWriter>& r)
    {
        return pyopencv_VideoWriter_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::VideoWriter>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::VideoWriter> * dst_;
        if (pyopencv_VideoWriter_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::VideoWriter> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_BufferPool (Generic)
//================================================================================

// GetSet (cuda_BufferPool)



// Methods (cuda_BufferPool)

static int pyopencv_cv_cuda_cuda_BufferPool_BufferPool(pyopencv_cuda_BufferPool_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "stream", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:BufferPool", (char**)keywords, &pyobj_stream) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::BufferPool>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::BufferPool(stream)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_cuda_cuda_BufferPool_getAllocator(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::BufferPool> * self1 = 0;
    if (!pyopencv_cuda_BufferPool_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_BufferPool' or its derivative)");
    Ptr<cv::cuda::BufferPool> _self_ = *(self1);
    Ptr<GpuMat::Allocator> retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAllocator());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_BufferPool_getBuffer(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::BufferPool> * self1 = 0;
    if (!pyopencv_cuda_BufferPool_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_BufferPool' or its derivative)");
    Ptr<cv::cuda::BufferPool> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_rows = NULL;
    int rows=0;
    PyObject* pyobj_cols = NULL;
    int cols=0;
    PyObject* pyobj_type = NULL;
    int type=0;
    GpuMat retval;

    const char* keywords[] = { "rows", "cols", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:cuda_BufferPool.getBuffer", (char**)keywords, &pyobj_rows, &pyobj_cols, &pyobj_type) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) &&
        pyopencv_to_safe(pyobj_cols, cols, ArgInfo("cols", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(retval = _self_->getBuffer(rows, cols, type));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_type = NULL;
    int type=0;
    GpuMat retval;

    const char* keywords[] = { "size", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_BufferPool.getBuffer", (char**)keywords, &pyobj_size, &pyobj_type) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(retval = _self_->getBuffer(size, type));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("getBuffer");

    return NULL;
}



// Tables (cuda_BufferPool)

static PyGetSetDef pyopencv_cuda_BufferPool_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_BufferPool_methods[] =
{
    {"getAllocator", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_BufferPool_getAllocator, 0), "getAllocator() -> retval\n."},
    {"getBuffer", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_BufferPool_getBuffer, 0), "getBuffer(rows, cols, type) -> retval\n.   \n\n\n\ngetBuffer(size, type) -> retval\n."},

    {NULL,          NULL}
};

// Converter (cuda_BufferPool)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::BufferPool> >
{
    static PyObject* from(const Ptr<cv::cuda::BufferPool>& r)
    {
        return pyopencv_cuda_BufferPool_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::BufferPool>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::BufferPool> * dst_;
        if (pyopencv_cuda_BufferPool_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::BufferPool> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_DeviceInfo (Generic)
//================================================================================

// GetSet (cuda_DeviceInfo)



// Methods (cuda_DeviceInfo)

static int pyopencv_cv_cuda_cuda_DeviceInfo_DeviceInfo(pyopencv_cuda_DeviceInfo_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    pyPrepareArgumentConversionErrorsStorage(2);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::cuda::DeviceInfo>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::DeviceInfo()));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_device_id = NULL;
    int device_id=0;

    const char* keywords[] = { "device_id", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:DeviceInfo", (char**)keywords, &pyobj_device_id) &&
        pyopencv_to_safe(pyobj_device_id, device_id, ArgInfo("device_id", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::DeviceInfo>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::DeviceInfo(device_id)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("DeviceInfo");

    return -1;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_ECCEnabled(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->ECCEnabled());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_asyncEngineCount(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->asyncEngineCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_canMapHostMemory(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->canMapHostMemory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_clockRate(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->clockRate());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_computeMode(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    DeviceInfo::ComputeMode retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->computeMode());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_concurrentKernels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->concurrentKernels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_deviceID(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->deviceID());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_freeMemory(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->freeMemory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_integrated(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->integrated());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_isCompatible(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isCompatible());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_kernelExecTimeoutEnabled(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->kernelExecTimeoutEnabled());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_l2CacheSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->l2CacheSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_majorVersion(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->majorVersion());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxGridSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec3i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxGridSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface1D(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxSurface1D());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface1DLayered(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec2i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxSurface1DLayered());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface2D(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec2i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxSurface2D());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface2DLayered(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec3i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxSurface2DLayered());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface3D(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec3i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxSurface3D());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxSurfaceCubemap(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxSurfaceCubemap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxSurfaceCubemapLayered(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec2i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxSurfaceCubemapLayered());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture1D(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture1D());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture1DLayered(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec2i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture1DLayered());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture1DLinear(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture1DLinear());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture1DMipmap(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture1DMipmap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2D(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec2i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture2D());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2DGather(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec2i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture2DGather());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2DLayered(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec3i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture2DLayered());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2DLinear(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec3i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture2DLinear());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2DMipmap(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec2i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture2DMipmap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture3D(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec3i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTexture3D());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTextureCubemap(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTextureCubemap());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxTextureCubemapLayered(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec2i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxTextureCubemapLayered());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxThreadsDim(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    Vec3i retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxThreadsDim());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxThreadsPerBlock(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxThreadsPerBlock());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_maxThreadsPerMultiProcessor(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxThreadsPerMultiProcessor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_memPitch(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->memPitch());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_memoryBusWidth(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->memoryBusWidth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_memoryClockRate(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->memoryClockRate());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_minorVersion(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->minorVersion());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_multiProcessorCount(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->multiProcessorCount());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_pciBusID(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->pciBusID());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_pciDeviceID(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->pciDeviceID());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_pciDomainID(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->pciDomainID());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_queryMemory(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    PyObject* pyobj_totalMemory = NULL;
    size_t totalMemory=0;
    PyObject* pyobj_freeMemory = NULL;
    size_t freeMemory=0;

    const char* keywords[] = { "totalMemory", "freeMemory", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_DeviceInfo.queryMemory", (char**)keywords, &pyobj_totalMemory, &pyobj_freeMemory) &&
        pyopencv_to_safe(pyobj_totalMemory, totalMemory, ArgInfo("totalMemory", 0)) &&
        pyopencv_to_safe(pyobj_freeMemory, freeMemory, ArgInfo("freeMemory", 0)) )
    {
        ERRWRAP2(_self_->queryMemory(totalMemory, freeMemory));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_regsPerBlock(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->regsPerBlock());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_sharedMemPerBlock(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->sharedMemPerBlock());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_surfaceAlignment(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->surfaceAlignment());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_tccDriver(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->tccDriver());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_textureAlignment(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->textureAlignment());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_texturePitchAlignment(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->texturePitchAlignment());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_totalConstMem(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->totalConstMem());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_totalGlobalMem(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->totalGlobalMem());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_totalMemory(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->totalMemory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_unifiedAddressing(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->unifiedAddressing());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_DeviceInfo_warpSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::DeviceInfo> * self1 = 0;
    if (!pyopencv_cuda_DeviceInfo_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_DeviceInfo' or its derivative)");
    Ptr<cv::cuda::DeviceInfo> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->warpSize());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (cuda_DeviceInfo)

static PyGetSetDef pyopencv_cuda_DeviceInfo_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_DeviceInfo_methods[] =
{
    {"ECCEnabled", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_ECCEnabled, 0), "ECCEnabled() -> retval\n."},
    {"asyncEngineCount", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_asyncEngineCount, 0), "asyncEngineCount() -> retval\n."},
    {"canMapHostMemory", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_canMapHostMemory, 0), "canMapHostMemory() -> retval\n."},
    {"clockRate", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_clockRate, 0), "clockRate() -> retval\n."},
    {"computeMode", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_computeMode, 0), "computeMode() -> retval\n."},
    {"concurrentKernels", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_concurrentKernels, 0), "concurrentKernels() -> retval\n."},
    {"deviceID", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_deviceID, 0), "deviceID() -> retval\n.   @brief Returns system index of the CUDA device starting with 0."},
    {"freeMemory", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_freeMemory, 0), "freeMemory() -> retval\n."},
    {"integrated", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_integrated, 0), "integrated() -> retval\n."},
    {"isCompatible", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_isCompatible, 0), "isCompatible() -> retval\n.   @brief Checks the CUDA module and device compatibility.\n.   \n.       This function returns true if the CUDA module can be run on the specified device. Otherwise, it\n.       returns false ."},
    {"kernelExecTimeoutEnabled", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_kernelExecTimeoutEnabled, 0), "kernelExecTimeoutEnabled() -> retval\n."},
    {"l2CacheSize", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_l2CacheSize, 0), "l2CacheSize() -> retval\n."},
    {"majorVersion", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_majorVersion, 0), "majorVersion() -> retval\n."},
    {"maxGridSize", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxGridSize, 0), "maxGridSize() -> retval\n."},
    {"maxSurface1D", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface1D, 0), "maxSurface1D() -> retval\n."},
    {"maxSurface1DLayered", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface1DLayered, 0), "maxSurface1DLayered() -> retval\n."},
    {"maxSurface2D", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface2D, 0), "maxSurface2D() -> retval\n."},
    {"maxSurface2DLayered", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface2DLayered, 0), "maxSurface2DLayered() -> retval\n."},
    {"maxSurface3D", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxSurface3D, 0), "maxSurface3D() -> retval\n."},
    {"maxSurfaceCubemap", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxSurfaceCubemap, 0), "maxSurfaceCubemap() -> retval\n."},
    {"maxSurfaceCubemapLayered", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxSurfaceCubemapLayered, 0), "maxSurfaceCubemapLayered() -> retval\n."},
    {"maxTexture1D", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture1D, 0), "maxTexture1D() -> retval\n."},
    {"maxTexture1DLayered", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture1DLayered, 0), "maxTexture1DLayered() -> retval\n."},
    {"maxTexture1DLinear", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture1DLinear, 0), "maxTexture1DLinear() -> retval\n."},
    {"maxTexture1DMipmap", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture1DMipmap, 0), "maxTexture1DMipmap() -> retval\n."},
    {"maxTexture2D", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2D, 0), "maxTexture2D() -> retval\n."},
    {"maxTexture2DGather", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2DGather, 0), "maxTexture2DGather() -> retval\n."},
    {"maxTexture2DLayered", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2DLayered, 0), "maxTexture2DLayered() -> retval\n."},
    {"maxTexture2DLinear", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2DLinear, 0), "maxTexture2DLinear() -> retval\n."},
    {"maxTexture2DMipmap", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture2DMipmap, 0), "maxTexture2DMipmap() -> retval\n."},
    {"maxTexture3D", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTexture3D, 0), "maxTexture3D() -> retval\n."},
    {"maxTextureCubemap", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTextureCubemap, 0), "maxTextureCubemap() -> retval\n."},
    {"maxTextureCubemapLayered", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxTextureCubemapLayered, 0), "maxTextureCubemapLayered() -> retval\n."},
    {"maxThreadsDim", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxThreadsDim, 0), "maxThreadsDim() -> retval\n."},
    {"maxThreadsPerBlock", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxThreadsPerBlock, 0), "maxThreadsPerBlock() -> retval\n."},
    {"maxThreadsPerMultiProcessor", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_maxThreadsPerMultiProcessor, 0), "maxThreadsPerMultiProcessor() -> retval\n."},
    {"memPitch", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_memPitch, 0), "memPitch() -> retval\n."},
    {"memoryBusWidth", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_memoryBusWidth, 0), "memoryBusWidth() -> retval\n."},
    {"memoryClockRate", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_memoryClockRate, 0), "memoryClockRate() -> retval\n."},
    {"minorVersion", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_minorVersion, 0), "minorVersion() -> retval\n."},
    {"multiProcessorCount", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_multiProcessorCount, 0), "multiProcessorCount() -> retval\n."},
    {"pciBusID", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_pciBusID, 0), "pciBusID() -> retval\n."},
    {"pciDeviceID", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_pciDeviceID, 0), "pciDeviceID() -> retval\n."},
    {"pciDomainID", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_pciDomainID, 0), "pciDomainID() -> retval\n."},
    {"queryMemory", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_queryMemory, 0), "queryMemory(totalMemory, freeMemory) -> None\n."},
    {"regsPerBlock", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_regsPerBlock, 0), "regsPerBlock() -> retval\n."},
    {"sharedMemPerBlock", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_sharedMemPerBlock, 0), "sharedMemPerBlock() -> retval\n."},
    {"surfaceAlignment", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_surfaceAlignment, 0), "surfaceAlignment() -> retval\n."},
    {"tccDriver", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_tccDriver, 0), "tccDriver() -> retval\n."},
    {"textureAlignment", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_textureAlignment, 0), "textureAlignment() -> retval\n."},
    {"texturePitchAlignment", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_texturePitchAlignment, 0), "texturePitchAlignment() -> retval\n."},
    {"totalConstMem", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_totalConstMem, 0), "totalConstMem() -> retval\n."},
    {"totalGlobalMem", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_totalGlobalMem, 0), "totalGlobalMem() -> retval\n."},
    {"totalMemory", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_totalMemory, 0), "totalMemory() -> retval\n."},
    {"unifiedAddressing", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_unifiedAddressing, 0), "unifiedAddressing() -> retval\n."},
    {"warpSize", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_DeviceInfo_warpSize, 0), "warpSize() -> retval\n."},

    {NULL,          NULL}
};

// Converter (cuda_DeviceInfo)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::DeviceInfo> >
{
    static PyObject* from(const Ptr<cv::cuda::DeviceInfo>& r)
    {
        return pyopencv_cuda_DeviceInfo_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::DeviceInfo>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::DeviceInfo> * dst_;
        if (pyopencv_cuda_DeviceInfo_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::DeviceInfo> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_Event (Generic)
//================================================================================

// GetSet (cuda_Event)



// Methods (cuda_Event)

static int pyopencv_cv_cuda_cuda_Event_Event(pyopencv_cuda_Event_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_flags = NULL;
    Event_CreateFlags flags=Event::CreateFlags::DEFAULT;

    const char* keywords[] = { "flags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:Event", (char**)keywords, &pyobj_flags) &&
        pyopencv_to_safe(pyobj_flags, flags, ArgInfo("flags", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::Event>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::Event(flags)));
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_cuda_cuda_Event_elapsedTime_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_start = NULL;
    Event start;
    PyObject* pyobj_end = NULL;
    Event end;
    float retval;

    const char* keywords[] = { "start", "end", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_Event.elapsedTime", (char**)keywords, &pyobj_start, &pyobj_end) &&
        pyopencv_to_safe(pyobj_start, start, ArgInfo("start", 0)) &&
        pyopencv_to_safe(pyobj_end, end, ArgInfo("end", 0)) )
    {
        ERRWRAP2(retval = cv::cuda::Event::elapsedTime(start, end));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_Event_queryIfComplete(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::Event> * self1 = 0;
    if (!pyopencv_cuda_Event_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_Event' or its derivative)");
    Ptr<cv::cuda::Event> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->queryIfComplete());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_Event_record(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::Event> * self1 = 0;
    if (!pyopencv_cuda_Event_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_Event' or its derivative)");
    Ptr<cv::cuda::Event> _self_ = *(self1);
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "stream", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:cuda_Event.record", (char**)keywords, &pyobj_stream) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->record(stream));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_Event_waitForCompletion(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::Event> * self1 = 0;
    if (!pyopencv_cuda_Event_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_Event' or its derivative)");
    Ptr<cv::cuda::Event> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->waitForCompletion());
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (cuda_Event)

static PyGetSetDef pyopencv_cuda_Event_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_Event_methods[] =
{
    {"elapsedTime", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_Event_elapsedTime_static, METH_STATIC), "elapsedTime(start, end) -> retval\n."},
    {"queryIfComplete", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_Event_queryIfComplete, 0), "queryIfComplete() -> retval\n."},
    {"record", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_Event_record, 0), "record([, stream]) -> None\n."},
    {"waitForCompletion", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_Event_waitForCompletion, 0), "waitForCompletion() -> None\n."},

    {NULL,          NULL}
};

// Converter (cuda_Event)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::Event> >
{
    static PyObject* from(const Ptr<cv::cuda::Event>& r)
    {
        return pyopencv_cuda_Event_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::Event>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::Event> * dst_;
        if (pyopencv_cuda_Event_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::Event> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_GpuData (Generic)
//================================================================================

// GetSet (cuda_GpuData)



// Methods (cuda_GpuData)



// Tables (cuda_GpuData)

static PyGetSetDef pyopencv_cuda_GpuData_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_GpuData_methods[] =
{

    {NULL,          NULL}
};

// Converter (cuda_GpuData)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::GpuData> >
{
    static PyObject* from(const Ptr<cv::cuda::GpuData>& r)
    {
        return pyopencv_cuda_GpuData_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::GpuData>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::GpuData> * dst_;
        if (pyopencv_cuda_GpuData_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::GpuData> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_GpuMat (Generic)
//================================================================================

// GetSet (cuda_GpuMat)


static PyObject* pyopencv_cuda_GpuMat_get_step(pyopencv_cuda_GpuMat_t* p, void *closure)
{
    return pyopencv_from(p->v->step);
}


// Methods (cuda_GpuMat)

static int pyopencv_cv_cuda_cuda_GpuMat_GpuMat(pyopencv_cuda_GpuMat_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    pyPrepareArgumentConversionErrorsStorage(11);

    {
    PyObject* pyobj_allocator = NULL;
    GpuMat_Allocator* allocator=GpuMat::defaultAllocator();

    const char* keywords[] = { "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:GpuMat", (char**)keywords, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(allocator)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_rows = NULL;
    int rows=0;
    PyObject* pyobj_cols = NULL;
    int cols=0;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_allocator = NULL;
    GpuMat_Allocator* allocator=GpuMat::defaultAllocator();

    const char* keywords[] = { "rows", "cols", "type", "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:GpuMat", (char**)keywords, &pyobj_rows, &pyobj_cols, &pyobj_type, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) &&
        pyopencv_to_safe(pyobj_cols, cols, ArgInfo("cols", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(rows, cols, type, allocator)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_allocator = NULL;
    GpuMat_Allocator* allocator=GpuMat::defaultAllocator();

    const char* keywords[] = { "size", "type", "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:GpuMat", (char**)keywords, &pyobj_size, &pyobj_type, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(size, type, allocator)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_rows = NULL;
    int rows=0;
    PyObject* pyobj_cols = NULL;
    int cols=0;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_allocator = NULL;
    GpuMat_Allocator* allocator=GpuMat::defaultAllocator();

    const char* keywords[] = { "rows", "cols", "type", "s", "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO|O:GpuMat", (char**)keywords, &pyobj_rows, &pyobj_cols, &pyobj_type, &pyobj_s, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) &&
        pyopencv_to_safe(pyobj_cols, cols, ArgInfo("cols", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(rows, cols, type, s, allocator)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_allocator = NULL;
    GpuMat_Allocator* allocator=GpuMat::defaultAllocator();

    const char* keywords[] = { "size", "type", "s", "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:GpuMat", (char**)keywords, &pyobj_size, &pyobj_type, &pyobj_s, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(size, type, s, allocator)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_m = NULL;
    GpuMat m;

    const char* keywords[] = { "m", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:GpuMat", (char**)keywords, &pyobj_m) &&
        pyopencv_to_safe(pyobj_m, m, ArgInfo("m", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(m)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_m = NULL;
    GpuMat m;
    PyObject* pyobj_rowRange = NULL;
    Range rowRange;
    PyObject* pyobj_colRange = NULL;
    Range colRange;

    const char* keywords[] = { "m", "rowRange", "colRange", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:GpuMat", (char**)keywords, &pyobj_m, &pyobj_rowRange, &pyobj_colRange) &&
        pyopencv_to_safe(pyobj_m, m, ArgInfo("m", 0)) &&
        pyopencv_to_safe(pyobj_rowRange, rowRange, ArgInfo("rowRange", 0)) &&
        pyopencv_to_safe(pyobj_colRange, colRange, ArgInfo("colRange", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(m, rowRange, colRange)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_m = NULL;
    GpuMat m;
    PyObject* pyobj_roi = NULL;
    Rect roi;

    const char* keywords[] = { "m", "roi", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:GpuMat", (char**)keywords, &pyobj_m, &pyobj_roi) &&
        pyopencv_to_safe(pyobj_m, m, ArgInfo("m", 0)) &&
        pyopencv_to_safe(pyobj_roi, roi, ArgInfo("roi", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(m, roi)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    Mat arr;
    PyObject* pyobj_allocator = NULL;
    GpuMat_Allocator* allocator=GpuMat::defaultAllocator();

    const char* keywords[] = { "arr", "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:GpuMat", (char**)keywords, &pyobj_arr, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(arr, allocator)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    cuda::GpuMat arr;
    PyObject* pyobj_allocator = NULL;
    GpuMat_Allocator* allocator=GpuMat::defaultAllocator();

    const char* keywords[] = { "arr", "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:GpuMat", (char**)keywords, &pyobj_arr, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(arr, allocator)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    UMat arr;
    PyObject* pyobj_allocator = NULL;
    GpuMat_Allocator* allocator=GpuMat::defaultAllocator();

    const char* keywords[] = { "arr", "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:GpuMat", (char**)keywords, &pyobj_arr, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::GpuMat>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::GpuMat(arr, allocator)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("GpuMat");

    return -1;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_adjustROI(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    PyObject* pyobj_dtop = NULL;
    int dtop=0;
    PyObject* pyobj_dbottom = NULL;
    int dbottom=0;
    PyObject* pyobj_dleft = NULL;
    int dleft=0;
    PyObject* pyobj_dright = NULL;
    int dright=0;
    GpuMat retval;

    const char* keywords[] = { "dtop", "dbottom", "dleft", "dright", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO:cuda_GpuMat.adjustROI", (char**)keywords, &pyobj_dtop, &pyobj_dbottom, &pyobj_dleft, &pyobj_dright) &&
        pyopencv_to_safe(pyobj_dtop, dtop, ArgInfo("dtop", 0)) &&
        pyopencv_to_safe(pyobj_dbottom, dbottom, ArgInfo("dbottom", 0)) &&
        pyopencv_to_safe(pyobj_dleft, dleft, ArgInfo("dleft", 0)) &&
        pyopencv_to_safe(pyobj_dright, dright, ArgInfo("dright", 0)) )
    {
        ERRWRAP2(retval = _self_->adjustROI(dtop, dbottom, dleft, dright));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_assignTo(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    PyObject* pyobj_m = NULL;
    GpuMat m;
    PyObject* pyobj_type = NULL;
    int type=-1;

    const char* keywords[] = { "m", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:cuda_GpuMat.assignTo", (char**)keywords, &pyobj_m, &pyobj_type) &&
        pyopencv_to_safe(pyobj_m, m, ArgInfo("m", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(_self_->assignTo(m, type));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_channels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->channels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_clone(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    GpuMat retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->clone());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_col(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    PyObject* pyobj_x = NULL;
    int x=0;
    GpuMat retval;

    const char* keywords[] = { "x", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.col", (char**)keywords, &pyobj_x) &&
        pyopencv_to_safe(pyobj_x, x, ArgInfo("x", 0)) )
    {
        ERRWRAP2(retval = _self_->col(x));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_colRange(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_startcol = NULL;
    int startcol=0;
    PyObject* pyobj_endcol = NULL;
    int endcol=0;
    GpuMat retval;

    const char* keywords[] = { "startcol", "endcol", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.colRange", (char**)keywords, &pyobj_startcol, &pyobj_endcol) &&
        pyopencv_to_safe(pyobj_startcol, startcol, ArgInfo("startcol", 0)) &&
        pyopencv_to_safe(pyobj_endcol, endcol, ArgInfo("endcol", 0)) )
    {
        ERRWRAP2(retval = _self_->colRange(startcol, endcol));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_r = NULL;
    Range r;
    GpuMat retval;

    const char* keywords[] = { "r", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.colRange", (char**)keywords, &pyobj_r) &&
        pyopencv_to_safe(pyobj_r, r, ArgInfo("r", 0)) )
    {
        ERRWRAP2(retval = _self_->colRange(r));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("colRange");

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_convertTo(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(3);

    {
    PyObject* pyobj_dst = NULL;
    GpuMat dst;
    PyObject* pyobj_rtype = NULL;
    int rtype=0;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "rtype", "stream", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:cuda_GpuMat.convertTo", (char**)keywords, &pyobj_rtype, &pyobj_stream, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_rtype, rtype, ArgInfo("rtype", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->convertTo(dst, rtype, stream));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    GpuMat dst;
    PyObject* pyobj_rtype = NULL;
    int rtype=0;
    PyObject* pyobj_alpha = NULL;
    double alpha=1.0;
    PyObject* pyobj_beta = NULL;
    double beta=0.0;

    const char* keywords[] = { "rtype", "dst", "alpha", "beta", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OOO:cuda_GpuMat.convertTo", (char**)keywords, &pyobj_rtype, &pyobj_dst, &pyobj_alpha, &pyobj_beta) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_rtype, rtype, ArgInfo("rtype", 0)) &&
        pyopencv_to_safe(pyobj_alpha, alpha, ArgInfo("alpha", 0)) &&
        pyopencv_to_safe(pyobj_beta, beta, ArgInfo("beta", 0)) )
    {
        ERRWRAP2(_self_->convertTo(dst, rtype, alpha, beta));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    GpuMat dst;
    PyObject* pyobj_rtype = NULL;
    int rtype=0;
    PyObject* pyobj_alpha = NULL;
    double alpha=0;
    PyObject* pyobj_beta = NULL;
    double beta=0;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "rtype", "alpha", "beta", "stream", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOOO|O:cuda_GpuMat.convertTo", (char**)keywords, &pyobj_rtype, &pyobj_alpha, &pyobj_beta, &pyobj_stream, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_rtype, rtype, ArgInfo("rtype", 0)) &&
        pyopencv_to_safe(pyobj_alpha, alpha, ArgInfo("alpha", 0)) &&
        pyopencv_to_safe(pyobj_beta, beta, ArgInfo("beta", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->convertTo(dst, rtype, alpha, beta, stream));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("convertTo");

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_copyTo(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(4);

    {
    PyObject* pyobj_dst = NULL;
    GpuMat dst;

    const char* keywords[] = { "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:cuda_GpuMat.copyTo", (char**)keywords, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->copyTo(dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    GpuMat dst;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "stream", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:cuda_GpuMat.copyTo", (char**)keywords, &pyobj_stream, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->copyTo(dst, stream));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    GpuMat dst;
    PyObject* pyobj_mask = NULL;
    GpuMat mask;

    const char* keywords[] = { "mask", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:cuda_GpuMat.copyTo", (char**)keywords, &pyobj_mask, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(_self_->copyTo(dst, mask));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    GpuMat dst;
    PyObject* pyobj_mask = NULL;
    GpuMat mask;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "mask", "stream", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:cuda_GpuMat.copyTo", (char**)keywords, &pyobj_mask, &pyobj_stream, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->copyTo(dst, mask, stream));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("copyTo");

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_create(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_rows = NULL;
    int rows=0;
    PyObject* pyobj_cols = NULL;
    int cols=0;
    PyObject* pyobj_type = NULL;
    int type=0;

    const char* keywords[] = { "rows", "cols", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:cuda_GpuMat.create", (char**)keywords, &pyobj_rows, &pyobj_cols, &pyobj_type) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) &&
        pyopencv_to_safe(pyobj_cols, cols, ArgInfo("cols", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(_self_->create(rows, cols, type));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_type = NULL;
    int type=0;

    const char* keywords[] = { "size", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.create", (char**)keywords, &pyobj_size, &pyobj_type) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(_self_->create(size, type));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("create");

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_cudaPtr(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    void* retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->cudaPtr());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_defaultAllocator_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    GpuMat::Allocator* retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::cuda::GpuMat::defaultAllocator());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_depth(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->depth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_download(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(6);

    {
    PyObject* pyobj_dst = NULL;
    Mat dst;

    const char* keywords[] = { "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:cuda_GpuMat.download", (char**)keywords, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->download(dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    cuda::GpuMat dst;

    const char* keywords[] = { "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:cuda_GpuMat.download", (char**)keywords, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->download(dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    UMat dst;

    const char* keywords[] = { "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:cuda_GpuMat.download", (char**)keywords, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) )
    {
        ERRWRAP2(_self_->download(dst));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    Mat dst;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "stream", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:cuda_GpuMat.download", (char**)keywords, &pyobj_stream, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->download(dst, stream));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    cuda::GpuMat dst;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "stream", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:cuda_GpuMat.download", (char**)keywords, &pyobj_stream, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->download(dst, stream));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_dst = NULL;
    UMat dst;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "stream", "dst", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:cuda_GpuMat.download", (char**)keywords, &pyobj_stream, &pyobj_dst) &&
        pyopencv_to_safe(pyobj_dst, dst, ArgInfo("dst", 1)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->download(dst, stream));
        return pyopencv_from(dst);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("download");

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_elemSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->elemSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_elemSize1(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->elemSize1());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_empty(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_isContinuous(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isContinuous());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_locateROI(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    PyObject* pyobj_wholeSize = NULL;
    Size wholeSize;
    PyObject* pyobj_ofs = NULL;
    Point ofs;

    const char* keywords[] = { "wholeSize", "ofs", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.locateROI", (char**)keywords, &pyobj_wholeSize, &pyobj_ofs) &&
        pyopencv_to_safe(pyobj_wholeSize, wholeSize, ArgInfo("wholeSize", 0)) &&
        pyopencv_to_safe(pyobj_ofs, ofs, ArgInfo("ofs", 0)) )
    {
        ERRWRAP2(_self_->locateROI(wholeSize, ofs));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_release(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_reshape(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    PyObject* pyobj_cn = NULL;
    int cn=0;
    PyObject* pyobj_rows = NULL;
    int rows=0;
    GpuMat retval;

    const char* keywords[] = { "cn", "rows", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:cuda_GpuMat.reshape", (char**)keywords, &pyobj_cn, &pyobj_rows) &&
        pyopencv_to_safe(pyobj_cn, cn, ArgInfo("cn", 0)) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) )
    {
        ERRWRAP2(retval = _self_->reshape(cn, rows));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_row(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    PyObject* pyobj_y = NULL;
    int y=0;
    GpuMat retval;

    const char* keywords[] = { "y", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.row", (char**)keywords, &pyobj_y) &&
        pyopencv_to_safe(pyobj_y, y, ArgInfo("y", 0)) )
    {
        ERRWRAP2(retval = _self_->row(y));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_rowRange(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_startrow = NULL;
    int startrow=0;
    PyObject* pyobj_endrow = NULL;
    int endrow=0;
    GpuMat retval;

    const char* keywords[] = { "startrow", "endrow", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.rowRange", (char**)keywords, &pyobj_startrow, &pyobj_endrow) &&
        pyopencv_to_safe(pyobj_startrow, startrow, ArgInfo("startrow", 0)) &&
        pyopencv_to_safe(pyobj_endrow, endrow, ArgInfo("endrow", 0)) )
    {
        ERRWRAP2(retval = _self_->rowRange(startrow, endrow));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_r = NULL;
    Range r;
    GpuMat retval;

    const char* keywords[] = { "r", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.rowRange", (char**)keywords, &pyobj_r) &&
        pyopencv_to_safe(pyobj_r, r, ArgInfo("r", 0)) )
    {
        ERRWRAP2(retval = _self_->rowRange(r));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("rowRange");

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_setDefaultAllocator_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_allocator = NULL;
    GpuMat_Allocator* allocator;

    const char* keywords[] = { "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.setDefaultAllocator", (char**)keywords, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        ERRWRAP2(cv::cuda::GpuMat::setDefaultAllocator(allocator));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_setTo(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(8);

    {
    PyObject* pyobj_s = NULL;
    Scalar s;
    GpuMat retval;

    const char* keywords[] = { "s", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.setTo", (char**)keywords, &pyobj_s) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) )
    {
        ERRWRAP2(retval = _self_->setTo(s));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();
    GpuMat retval;

    const char* keywords[] = { "s", "stream", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.setTo", (char**)keywords, &pyobj_s, &pyobj_stream) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(retval = _self_->setTo(s, stream));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    GpuMat retval;

    const char* keywords[] = { "s", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.setTo", (char**)keywords, &pyobj_s, &pyobj_mask) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(retval = _self_->setTo(s, mask));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_mask = NULL;
    cuda::GpuMat mask;
    GpuMat retval;

    const char* keywords[] = { "s", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.setTo", (char**)keywords, &pyobj_s, &pyobj_mask) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(retval = _self_->setTo(s, mask));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    GpuMat retval;

    const char* keywords[] = { "s", "mask", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.setTo", (char**)keywords, &pyobj_s, &pyobj_mask) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) )
    {
        ERRWRAP2(retval = _self_->setTo(s, mask));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_mask = NULL;
    Mat mask;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();
    GpuMat retval;

    const char* keywords[] = { "s", "mask", "stream", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:cuda_GpuMat.setTo", (char**)keywords, &pyobj_s, &pyobj_mask, &pyobj_stream) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(retval = _self_->setTo(s, mask, stream));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_mask = NULL;
    cuda::GpuMat mask;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();
    GpuMat retval;

    const char* keywords[] = { "s", "mask", "stream", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:cuda_GpuMat.setTo", (char**)keywords, &pyobj_s, &pyobj_mask, &pyobj_stream) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(retval = _self_->setTo(s, mask, stream));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_s = NULL;
    Scalar s;
    PyObject* pyobj_mask = NULL;
    UMat mask;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();
    GpuMat retval;

    const char* keywords[] = { "s", "mask", "stream", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:cuda_GpuMat.setTo", (char**)keywords, &pyobj_s, &pyobj_mask, &pyobj_stream) &&
        pyopencv_to_safe(pyobj_s, s, ArgInfo("s", 0)) &&
        pyopencv_to_safe(pyobj_mask, mask, ArgInfo("mask", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(retval = _self_->setTo(s, mask, stream));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("setTo");

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_size(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    Size retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->size());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_step1(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->step1());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_swap(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    PyObject* pyobj_mat = NULL;
    GpuMat mat;

    const char* keywords[] = { "mat", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.swap", (char**)keywords, &pyobj_mat) &&
        pyopencv_to_safe(pyobj_mat, mat, ArgInfo("mat", 0)) )
    {
        ERRWRAP2(_self_->swap(mat));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_type(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->type());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_updateContinuityFlag(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->updateContinuityFlag());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_GpuMat_upload(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::GpuMat> * self1 = 0;
    if (!pyopencv_cuda_GpuMat_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_GpuMat' or its derivative)");
    Ptr<cv::cuda::GpuMat> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(6);

    {
    PyObject* pyobj_arr = NULL;
    Mat arr;

    const char* keywords[] = { "arr", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.upload", (char**)keywords, &pyobj_arr) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) )
    {
        ERRWRAP2(_self_->upload(arr));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    cuda::GpuMat arr;

    const char* keywords[] = { "arr", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.upload", (char**)keywords, &pyobj_arr) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) )
    {
        ERRWRAP2(_self_->upload(arr));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    UMat arr;

    const char* keywords[] = { "arr", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_GpuMat.upload", (char**)keywords, &pyobj_arr) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) )
    {
        ERRWRAP2(_self_->upload(arr));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    Mat arr;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "arr", "stream", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.upload", (char**)keywords, &pyobj_arr, &pyobj_stream) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->upload(arr, stream));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    cuda::GpuMat arr;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "arr", "stream", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.upload", (char**)keywords, &pyobj_arr, &pyobj_stream) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->upload(arr, stream));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    UMat arr;
    PyObject* pyobj_stream = NULL;
    Stream stream=Stream::Null();

    const char* keywords[] = { "arr", "stream", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_GpuMat.upload", (char**)keywords, &pyobj_arr, &pyobj_stream) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) &&
        pyopencv_to_safe(pyobj_stream, stream, ArgInfo("stream", 0)) )
    {
        ERRWRAP2(_self_->upload(arr, stream));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("upload");

    return NULL;
}



// Tables (cuda_GpuMat)

static PyGetSetDef pyopencv_cuda_GpuMat_getseters[] =
{
    {(char*)"step", (getter)pyopencv_cuda_GpuMat_get_step, NULL, (char*)"step", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_GpuMat_methods[] =
{
    {"adjustROI", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_adjustROI, 0), "adjustROI(dtop, dbottom, dleft, dright) -> retval\n."},
    {"assignTo", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_assignTo, 0), "assignTo(m[, type]) -> None\n."},
    {"channels", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_channels, 0), "channels() -> retval\n."},
    {"clone", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_clone, 0), "clone() -> retval\n."},
    {"col", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_col, 0), "col(x) -> retval\n."},
    {"colRange", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_colRange, 0), "colRange(startcol, endcol) -> retval\n.   \n\n\n\ncolRange(r) -> retval\n."},
    {"convertTo", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_convertTo, 0), "convertTo(rtype, stream[, dst]) -> dst\n.   \n\n\n\nconvertTo(rtype[, dst[, alpha[, beta]]]) -> dst\n.   \n\n\n\nconvertTo(rtype, alpha, beta, stream[, dst]) -> dst\n."},
    {"copyTo", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_copyTo, 0), "copyTo([, dst]) -> dst\n.   \n\n\n\ncopyTo(stream[, dst]) -> dst\n.   \n\n\n\ncopyTo(mask[, dst]) -> dst\n.   \n\n\n\ncopyTo(mask, stream[, dst]) -> dst\n."},
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_create, 0), "create(rows, cols, type) -> None\n.   \n\n\n\ncreate(size, type) -> None\n."},
    {"cudaPtr", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_cudaPtr, 0), "cudaPtr() -> retval\n."},
    {"defaultAllocator", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_defaultAllocator_static, METH_STATIC), "defaultAllocator() -> retval\n."},
    {"depth", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_depth, 0), "depth() -> retval\n."},
    {"download", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_download, 0), "download([, dst]) -> dst\n.   @brief Performs data download from GpuMat (Blocking call)\n.   \n.       This function copies data from device memory to host memory. As being a blocking call, it is\n.       guaranteed that the copy operation is finished when this function returns.\n\n\n\ndownload(stream[, dst]) -> dst\n.   @brief Performs data download from GpuMat (Non-Blocking call)\n.   \n.       This function copies data from device memory to host memory. As being a non-blocking call, this\n.       function may return even if the copy operation is not finished.\n.   \n.       The copy operation may be overlapped with operations in other non-default streams if \\p stream is\n.       not the default stream and \\p dst is HostMem allocated with HostMem::PAGE_LOCKED option."},
    {"elemSize", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_elemSize, 0), "elemSize() -> retval\n."},
    {"elemSize1", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_elemSize1, 0), "elemSize1() -> retval\n."},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_empty, 0), "empty() -> retval\n."},
    {"isContinuous", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_isContinuous, 0), "isContinuous() -> retval\n."},
    {"locateROI", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_locateROI, 0), "locateROI(wholeSize, ofs) -> None\n."},
    {"release", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_release, 0), "release() -> None\n."},
    {"reshape", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_reshape, 0), "reshape(cn[, rows]) -> retval\n."},
    {"row", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_row, 0), "row(y) -> retval\n."},
    {"rowRange", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_rowRange, 0), "rowRange(startrow, endrow) -> retval\n.   \n\n\n\nrowRange(r) -> retval\n."},
    {"setDefaultAllocator", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_setDefaultAllocator_static, METH_STATIC), "setDefaultAllocator(allocator) -> None\n."},
    {"setTo", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_setTo, 0), "setTo(s) -> retval\n.   \n\n\n\nsetTo(s, stream) -> retval\n.   \n\n\n\nsetTo(s, mask) -> retval\n.   \n\n\n\nsetTo(s, mask, stream) -> retval\n."},
    {"size", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_size, 0), "size() -> retval\n."},
    {"step1", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_step1, 0), "step1() -> retval\n."},
    {"swap", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_swap, 0), "swap(mat) -> None\n."},
    {"type", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_type, 0), "type() -> retval\n."},
    {"updateContinuityFlag", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_updateContinuityFlag, 0), "updateContinuityFlag() -> None\n."},
    {"upload", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_GpuMat_upload, 0), "upload(arr) -> None\n.   @brief Performs data upload to GpuMat (Blocking call)\n.   \n.       This function copies data from host memory to device memory. As being a blocking call, it is\n.       guaranteed that the copy operation is finished when this function returns.\n\n\n\nupload(arr, stream) -> None\n.   @brief Performs data upload to GpuMat (Non-Blocking call)\n.   \n.       This function copies data from host memory to device memory. As being a non-blocking call, this\n.       function may return even if the copy operation is not finished.\n.   \n.       The copy operation may be overlapped with operations in other non-default streams if \\p stream is\n.       not the default stream and \\p dst is HostMem allocated with HostMem::PAGE_LOCKED option."},

    {NULL,          NULL}
};

// Converter (cuda_GpuMat)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::GpuMat> >
{
    static PyObject* from(const Ptr<cv::cuda::GpuMat>& r)
    {
        return pyopencv_cuda_GpuMat_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::GpuMat>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::GpuMat> * dst_;
        if (pyopencv_cuda_GpuMat_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::GpuMat> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_GpuMatND (Generic)
//================================================================================

// GetSet (cuda_GpuMatND)



// Methods (cuda_GpuMatND)



// Tables (cuda_GpuMatND)

static PyGetSetDef pyopencv_cuda_GpuMatND_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_GpuMatND_methods[] =
{

    {NULL,          NULL}
};

// Converter (cuda_GpuMatND)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::GpuMatND> >
{
    static PyObject* from(const Ptr<cv::cuda::GpuMatND>& r)
    {
        return pyopencv_cuda_GpuMatND_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::GpuMatND>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::GpuMatND> * dst_;
        if (pyopencv_cuda_GpuMatND_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::GpuMatND> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_GpuMat_Allocator (Generic)
//================================================================================

// GetSet (cuda_GpuMat_Allocator)



// Methods (cuda_GpuMat_Allocator)



// Tables (cuda_GpuMat_Allocator)

static PyGetSetDef pyopencv_cuda_GpuMat_Allocator_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_GpuMat_Allocator_methods[] =
{

    {NULL,          NULL}
};

// Converter (cuda_GpuMat_Allocator)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::GpuMat::Allocator> >
{
    static PyObject* from(const Ptr<cv::cuda::GpuMat::Allocator>& r)
    {
        return pyopencv_cuda_GpuMat_Allocator_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::GpuMat::Allocator>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::GpuMat::Allocator> * dst_;
        if (pyopencv_cuda_GpuMat_Allocator_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::GpuMat::Allocator> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_HostMem (Generic)
//================================================================================

// GetSet (cuda_HostMem)


static PyObject* pyopencv_cuda_HostMem_get_step(pyopencv_cuda_HostMem_t* p, void *closure)
{
    return pyopencv_from(p->v->step);
}


// Methods (cuda_HostMem)

static int pyopencv_cv_cuda_cuda_HostMem_HostMem(pyopencv_cuda_HostMem_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    pyPrepareArgumentConversionErrorsStorage(6);

    {
    PyObject* pyobj_alloc_type = NULL;
    HostMem_AllocType alloc_type=HostMem::AllocType::PAGE_LOCKED;

    const char* keywords[] = { "alloc_type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:HostMem", (char**)keywords, &pyobj_alloc_type) &&
        pyopencv_to_safe(pyobj_alloc_type, alloc_type, ArgInfo("alloc_type", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::HostMem>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::HostMem(alloc_type)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_rows = NULL;
    int rows=0;
    PyObject* pyobj_cols = NULL;
    int cols=0;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_alloc_type = NULL;
    HostMem_AllocType alloc_type=HostMem::AllocType::PAGE_LOCKED;

    const char* keywords[] = { "rows", "cols", "type", "alloc_type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:HostMem", (char**)keywords, &pyobj_rows, &pyobj_cols, &pyobj_type, &pyobj_alloc_type) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) &&
        pyopencv_to_safe(pyobj_cols, cols, ArgInfo("cols", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_alloc_type, alloc_type, ArgInfo("alloc_type", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::HostMem>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::HostMem(rows, cols, type, alloc_type)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_size = NULL;
    Size size;
    PyObject* pyobj_type = NULL;
    int type=0;
    PyObject* pyobj_alloc_type = NULL;
    HostMem_AllocType alloc_type=HostMem::AllocType::PAGE_LOCKED;

    const char* keywords[] = { "size", "type", "alloc_type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:HostMem", (char**)keywords, &pyobj_size, &pyobj_type, &pyobj_alloc_type) &&
        pyopencv_to_safe(pyobj_size, size, ArgInfo("size", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) &&
        pyopencv_to_safe(pyobj_alloc_type, alloc_type, ArgInfo("alloc_type", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::HostMem>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::HostMem(size, type, alloc_type)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    Mat arr;
    PyObject* pyobj_alloc_type = NULL;
    HostMem_AllocType alloc_type=HostMem::AllocType::PAGE_LOCKED;

    const char* keywords[] = { "arr", "alloc_type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:HostMem", (char**)keywords, &pyobj_arr, &pyobj_alloc_type) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) &&
        pyopencv_to_safe(pyobj_alloc_type, alloc_type, ArgInfo("alloc_type", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::HostMem>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::HostMem(arr, alloc_type)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    cuda::GpuMat arr;
    PyObject* pyobj_alloc_type = NULL;
    HostMem_AllocType alloc_type=HostMem::AllocType::PAGE_LOCKED;

    const char* keywords[] = { "arr", "alloc_type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:HostMem", (char**)keywords, &pyobj_arr, &pyobj_alloc_type) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) &&
        pyopencv_to_safe(pyobj_alloc_type, alloc_type, ArgInfo("alloc_type", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::HostMem>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::HostMem(arr, alloc_type)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_arr = NULL;
    UMat arr;
    PyObject* pyobj_alloc_type = NULL;
    HostMem_AllocType alloc_type=HostMem::AllocType::PAGE_LOCKED;

    const char* keywords[] = { "arr", "alloc_type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:HostMem", (char**)keywords, &pyobj_arr, &pyobj_alloc_type) &&
        pyopencv_to_safe(pyobj_arr, arr, ArgInfo("arr", 0)) &&
        pyopencv_to_safe(pyobj_alloc_type, alloc_type, ArgInfo("alloc_type", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::HostMem>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::HostMem(arr, alloc_type)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("HostMem");

    return -1;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_channels(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->channels());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_clone(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    HostMem retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->clone());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_create(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    PyObject* pyobj_rows = NULL;
    int rows=0;
    PyObject* pyobj_cols = NULL;
    int cols=0;
    PyObject* pyobj_type = NULL;
    int type=0;

    const char* keywords[] = { "rows", "cols", "type", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:cuda_HostMem.create", (char**)keywords, &pyobj_rows, &pyobj_cols, &pyobj_type) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) &&
        pyopencv_to_safe(pyobj_cols, cols, ArgInfo("cols", 0)) &&
        pyopencv_to_safe(pyobj_type, type, ArgInfo("type", 0)) )
    {
        ERRWRAP2(_self_->create(rows, cols, type));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_createMatHeader(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    Mat retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->createMatHeader());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_depth(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->depth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_elemSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->elemSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_elemSize1(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->elemSize1());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_empty(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->empty());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_isContinuous(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isContinuous());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_reshape(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    PyObject* pyobj_cn = NULL;
    int cn=0;
    PyObject* pyobj_rows = NULL;
    int rows=0;
    HostMem retval;

    const char* keywords[] = { "cn", "rows", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|O:cuda_HostMem.reshape", (char**)keywords, &pyobj_cn, &pyobj_rows) &&
        pyopencv_to_safe(pyobj_cn, cn, ArgInfo("cn", 0)) &&
        pyopencv_to_safe(pyobj_rows, rows, ArgInfo("rows", 0)) )
    {
        ERRWRAP2(retval = _self_->reshape(cn, rows));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_size(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    Size retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->size());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_step1(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->step1());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_swap(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    PyObject* pyobj_b = NULL;
    HostMem b;

    const char* keywords[] = { "b", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_HostMem.swap", (char**)keywords, &pyobj_b) &&
        pyopencv_to_safe(pyobj_b, b, ArgInfo("b", 0)) )
    {
        ERRWRAP2(_self_->swap(b));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_HostMem_type(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::HostMem> * self1 = 0;
    if (!pyopencv_cuda_HostMem_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_HostMem' or its derivative)");
    Ptr<cv::cuda::HostMem> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->type());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (cuda_HostMem)

static PyGetSetDef pyopencv_cuda_HostMem_getseters[] =
{
    {(char*)"step", (getter)pyopencv_cuda_HostMem_get_step, NULL, (char*)"step", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_HostMem_methods[] =
{
    {"channels", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_channels, 0), "channels() -> retval\n."},
    {"clone", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_clone, 0), "clone() -> retval\n."},
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_create, 0), "create(rows, cols, type) -> None\n."},
    {"createMatHeader", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_createMatHeader, 0), "createMatHeader() -> retval\n."},
    {"depth", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_depth, 0), "depth() -> retval\n."},
    {"elemSize", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_elemSize, 0), "elemSize() -> retval\n."},
    {"elemSize1", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_elemSize1, 0), "elemSize1() -> retval\n."},
    {"empty", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_empty, 0), "empty() -> retval\n."},
    {"isContinuous", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_isContinuous, 0), "isContinuous() -> retval\n.   @brief Maps CPU memory to GPU address space and creates the cuda::GpuMat header without reference counting\n.       for it.\n.   \n.       This can be done only if memory was allocated with the SHARED flag and if it is supported by the\n.       hardware. Laptops often share video and CPU memory, so address spaces can be mapped, which\n.       eliminates an extra copy."},
    {"reshape", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_reshape, 0), "reshape(cn[, rows]) -> retval\n."},
    {"size", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_size, 0), "size() -> retval\n."},
    {"step1", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_step1, 0), "step1() -> retval\n."},
    {"swap", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_swap, 0), "swap(b) -> None\n."},
    {"type", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_HostMem_type, 0), "type() -> retval\n."},

    {NULL,          NULL}
};

// Converter (cuda_HostMem)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::HostMem> >
{
    static PyObject* from(const Ptr<cv::cuda::HostMem>& r)
    {
        return pyopencv_cuda_HostMem_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::HostMem>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::HostMem> * dst_;
        if (pyopencv_cuda_HostMem_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::HostMem> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_Stream (Generic)
//================================================================================

// GetSet (cuda_Stream)



// Methods (cuda_Stream)

static int pyopencv_cv_cuda_cuda_Stream_Stream(pyopencv_cuda_Stream_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    pyPrepareArgumentConversionErrorsStorage(3);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::cuda::Stream>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::Stream()));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_allocator = NULL;
    Ptr<GpuMat::Allocator> allocator;

    const char* keywords[] = { "allocator", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Stream", (char**)keywords, &pyobj_allocator) &&
        pyopencv_to_safe(pyobj_allocator, allocator, ArgInfo("allocator", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::Stream>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::Stream(allocator)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_cudaFlags = NULL;
    size_t cudaFlags=0;

    const char* keywords[] = { "cudaFlags", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:Stream", (char**)keywords, &pyobj_cudaFlags) &&
        pyopencv_to_safe(pyobj_cudaFlags, cudaFlags, ArgInfo("cudaFlags", 0)) )
    {
        new (&(self->v)) Ptr<cv::cuda::Stream>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::cuda::Stream(cudaFlags)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("Stream");

    return -1;
}

static PyObject* pyopencv_cv_cuda_cuda_Stream_Null_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    Stream retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::cuda::Stream::Null());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_Stream_cudaPtr(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::Stream> * self1 = 0;
    if (!pyopencv_cuda_Stream_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_Stream' or its derivative)");
    Ptr<cv::cuda::Stream> _self_ = *(self1);
    void* retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->cudaPtr());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_Stream_queryIfComplete(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::Stream> * self1 = 0;
    if (!pyopencv_cuda_Stream_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_Stream' or its derivative)");
    Ptr<cv::cuda::Stream> _self_ = *(self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->queryIfComplete());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_Stream_waitEvent(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::Stream> * self1 = 0;
    if (!pyopencv_cuda_Stream_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_Stream' or its derivative)");
    Ptr<cv::cuda::Stream> _self_ = *(self1);
    PyObject* pyobj_event = NULL;
    Event event;

    const char* keywords[] = { "event", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:cuda_Stream.waitEvent", (char**)keywords, &pyobj_event) &&
        pyopencv_to_safe(pyobj_event, event, ArgInfo("event", 0)) )
    {
        ERRWRAP2(_self_->waitEvent(event));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_Stream_waitForCompletion(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;


    Ptr<cv::cuda::Stream> * self1 = 0;
    if (!pyopencv_cuda_Stream_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'cuda_Stream' or its derivative)");
    Ptr<cv::cuda::Stream> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->waitForCompletion());
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (cuda_Stream)

static PyGetSetDef pyopencv_cuda_Stream_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_Stream_methods[] =
{
    {"Null", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_Stream_Null_static, METH_STATIC), "Null() -> retval\n.   @brief Adds a callback to be called on the host after all currently enqueued items in the stream have\n.       completed.\n.   \n.       @note Callbacks must not make any CUDA API calls. Callbacks must not perform any synchronization\n.       that may depend on outstanding device work or other callbacks that are not mandated to run earlier.\n.       Callbacks without a mandated order (in independent streams) execute in undefined order and may be\n.       serialized."},
    {"cudaPtr", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_Stream_cudaPtr, 0), "cudaPtr() -> retval\n."},
    {"queryIfComplete", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_Stream_queryIfComplete, 0), "queryIfComplete() -> retval\n.   @brief Returns true if the current stream queue is finished. Otherwise, it returns false."},
    {"waitEvent", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_Stream_waitEvent, 0), "waitEvent(event) -> None\n.   @brief Makes a compute stream wait on an event."},
    {"waitForCompletion", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_Stream_waitForCompletion, 0), "waitForCompletion() -> None\n.   @brief Blocks the current CPU thread until all operations in the stream are complete."},

    {NULL,          NULL}
};

// Converter (cuda_Stream)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::Stream> >
{
    static PyObject* from(const Ptr<cv::cuda::Stream>& r)
    {
        return pyopencv_cuda_Stream_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::Stream>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::Stream> * dst_;
        if (pyopencv_cuda_Stream_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::Stream> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// cuda_TargetArchs (Generic)
//================================================================================

// GetSet (cuda_TargetArchs)



// Methods (cuda_TargetArchs)

static PyObject* pyopencv_cv_cuda_cuda_TargetArchs_has_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_major = NULL;
    int major=0;
    PyObject* pyobj_minor = NULL;
    int minor=0;
    bool retval;

    const char* keywords[] = { "major", "minor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_TargetArchs.has", (char**)keywords, &pyobj_major, &pyobj_minor) &&
        pyopencv_to_safe(pyobj_major, major, ArgInfo("major", 0)) &&
        pyopencv_to_safe(pyobj_minor, minor, ArgInfo("minor", 0)) )
    {
        ERRWRAP2(retval = cv::cuda::TargetArchs::has(major, minor));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_TargetArchs_hasBin_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_major = NULL;
    int major=0;
    PyObject* pyobj_minor = NULL;
    int minor=0;
    bool retval;

    const char* keywords[] = { "major", "minor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_TargetArchs.hasBin", (char**)keywords, &pyobj_major, &pyobj_minor) &&
        pyopencv_to_safe(pyobj_major, major, ArgInfo("major", 0)) &&
        pyopencv_to_safe(pyobj_minor, minor, ArgInfo("minor", 0)) )
    {
        ERRWRAP2(retval = cv::cuda::TargetArchs::hasBin(major, minor));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_TargetArchs_hasEqualOrGreater_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_major = NULL;
    int major=0;
    PyObject* pyobj_minor = NULL;
    int minor=0;
    bool retval;

    const char* keywords[] = { "major", "minor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_TargetArchs.hasEqualOrGreater", (char**)keywords, &pyobj_major, &pyobj_minor) &&
        pyopencv_to_safe(pyobj_major, major, ArgInfo("major", 0)) &&
        pyopencv_to_safe(pyobj_minor, minor, ArgInfo("minor", 0)) )
    {
        ERRWRAP2(retval = cv::cuda::TargetArchs::hasEqualOrGreater(major, minor));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_TargetArchs_hasEqualOrGreaterBin_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_major = NULL;
    int major=0;
    PyObject* pyobj_minor = NULL;
    int minor=0;
    bool retval;

    const char* keywords[] = { "major", "minor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_TargetArchs.hasEqualOrGreaterBin", (char**)keywords, &pyobj_major, &pyobj_minor) &&
        pyopencv_to_safe(pyobj_major, major, ArgInfo("major", 0)) &&
        pyopencv_to_safe(pyobj_minor, minor, ArgInfo("minor", 0)) )
    {
        ERRWRAP2(retval = cv::cuda::TargetArchs::hasEqualOrGreaterBin(major, minor));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_TargetArchs_hasEqualOrGreaterPtx_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_major = NULL;
    int major=0;
    PyObject* pyobj_minor = NULL;
    int minor=0;
    bool retval;

    const char* keywords[] = { "major", "minor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_TargetArchs.hasEqualOrGreaterPtx", (char**)keywords, &pyobj_major, &pyobj_minor) &&
        pyopencv_to_safe(pyobj_major, major, ArgInfo("major", 0)) &&
        pyopencv_to_safe(pyobj_minor, minor, ArgInfo("minor", 0)) )
    {
        ERRWRAP2(retval = cv::cuda::TargetArchs::hasEqualOrGreaterPtx(major, minor));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_TargetArchs_hasEqualOrLessPtx_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_major = NULL;
    int major=0;
    PyObject* pyobj_minor = NULL;
    int minor=0;
    bool retval;

    const char* keywords[] = { "major", "minor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_TargetArchs.hasEqualOrLessPtx", (char**)keywords, &pyobj_major, &pyobj_minor) &&
        pyopencv_to_safe(pyobj_major, major, ArgInfo("major", 0)) &&
        pyopencv_to_safe(pyobj_minor, minor, ArgInfo("minor", 0)) )
    {
        ERRWRAP2(retval = cv::cuda::TargetArchs::hasEqualOrLessPtx(major, minor));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_cuda_cuda_TargetArchs_hasPtx_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::cuda;

    PyObject* pyobj_major = NULL;
    int major=0;
    PyObject* pyobj_minor = NULL;
    int minor=0;
    bool retval;

    const char* keywords[] = { "major", "minor", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:cuda_TargetArchs.hasPtx", (char**)keywords, &pyobj_major, &pyobj_minor) &&
        pyopencv_to_safe(pyobj_major, major, ArgInfo("major", 0)) &&
        pyopencv_to_safe(pyobj_minor, minor, ArgInfo("minor", 0)) )
    {
        ERRWRAP2(retval = cv::cuda::TargetArchs::hasPtx(major, minor));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (cuda_TargetArchs)

static PyGetSetDef pyopencv_cuda_TargetArchs_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_cuda_TargetArchs_methods[] =
{
    {"has", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_TargetArchs_has_static, METH_STATIC), "has(major, minor) -> retval\n.   @brief There is a set of methods to check whether the module contains intermediate (PTX) or binary CUDA\n.       code for the given architecture(s):\n.   \n.       @param major Major compute capability version.\n.       @param minor Minor compute capability version."},
    {"hasBin", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_TargetArchs_hasBin_static, METH_STATIC), "hasBin(major, minor) -> retval\n."},
    {"hasEqualOrGreater", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_TargetArchs_hasEqualOrGreater_static, METH_STATIC), "hasEqualOrGreater(major, minor) -> retval\n."},
    {"hasEqualOrGreaterBin", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_TargetArchs_hasEqualOrGreaterBin_static, METH_STATIC), "hasEqualOrGreaterBin(major, minor) -> retval\n."},
    {"hasEqualOrGreaterPtx", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_TargetArchs_hasEqualOrGreaterPtx_static, METH_STATIC), "hasEqualOrGreaterPtx(major, minor) -> retval\n."},
    {"hasEqualOrLessPtx", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_TargetArchs_hasEqualOrLessPtx_static, METH_STATIC), "hasEqualOrLessPtx(major, minor) -> retval\n."},
    {"hasPtx", CV_PY_FN_WITH_KW_(pyopencv_cv_cuda_cuda_TargetArchs_hasPtx_static, METH_STATIC), "hasPtx(major, minor) -> retval\n."},

    {NULL,          NULL}
};

// Converter (cuda_TargetArchs)

template<>
struct PyOpenCV_Converter< Ptr<cv::cuda::TargetArchs> >
{
    static PyObject* from(const Ptr<cv::cuda::TargetArchs>& r)
    {
        return pyopencv_cuda_TargetArchs_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::cuda::TargetArchs>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::cuda::TargetArchs> * dst_;
        if (pyopencv_cuda_TargetArchs_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::cuda::TargetArchs> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// flann_Index (Generic)
//================================================================================

// GetSet (flann_Index)



// Methods (flann_Index)

static int pyopencv_cv_flann_flann_Index_Index(pyopencv_flann_Index_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::flann;

    pyPrepareArgumentConversionErrorsStorage(3);

    {

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        new (&(self->v)) Ptr<cv::flann::Index>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::flann::Index()));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:Index", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to_safe(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to_safe(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        new (&(self->v)) Ptr<cv::flann::Index>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::flann::Index(features, params, distType)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_features = NULL;
    UMat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:Index", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to_safe(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to_safe(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        new (&(self->v)) Ptr<cv::flann::Index>(); // init Ptr with placement new
        if(self) ERRWRAP2(self->v.reset(new cv::flann::Index(features, params, distType)));
        return 0;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("Index");

    return -1;
}

static PyObject* pyopencv_cv_flann_flann_Index_build(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:flann_Index.build", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to_safe(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to_safe(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        ERRWRAP2(_self_->build(features, params, distType));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_features = NULL;
    UMat features;
    PyObject* pyobj_params = NULL;
    IndexParams params;
    PyObject* pyobj_distType = NULL;
    cvflann_flann_distance_t distType=cvflann::FLANN_DIST_L2;

    const char* keywords[] = { "features", "params", "distType", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|O:flann_Index.build", (char**)keywords, &pyobj_features, &pyobj_params, &pyobj_distType) &&
        pyopencv_to_safe(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) &&
        pyopencv_to_safe(pyobj_distType, distType, ArgInfo("distType", 0)) )
    {
        ERRWRAP2(_self_->build(features, params, distType));
        Py_RETURN_NONE;
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("build");

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_getAlgorithm(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    cvflann::flann_algorithm_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getAlgorithm());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_getDistance(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    cvflann::flann_distance_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getDistance());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_knnSearch(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    PyObject* pyobj_knn = NULL;
    int knn=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;

    const char* keywords[] = { "query", "knn", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OOO:flann_Index.knnSearch", (char**)keywords, &pyobj_query, &pyobj_knn, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to_safe(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to_safe(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to_safe(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to_safe(pyobj_knn, knn, ArgInfo("knn", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(_self_->knnSearch(query, indices, dists, knn, params));
        return Py_BuildValue("(NN)", pyopencv_from(indices), pyopencv_from(dists));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_query = NULL;
    UMat query;
    PyObject* pyobj_indices = NULL;
    UMat indices;
    PyObject* pyobj_dists = NULL;
    UMat dists;
    PyObject* pyobj_knn = NULL;
    int knn=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;

    const char* keywords[] = { "query", "knn", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OOO:flann_Index.knnSearch", (char**)keywords, &pyobj_query, &pyobj_knn, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to_safe(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to_safe(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to_safe(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to_safe(pyobj_knn, knn, ArgInfo("knn", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(_self_->knnSearch(query, indices, dists, knn, params));
        return Py_BuildValue("(NN)", pyopencv_from(indices), pyopencv_from(dists));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("knnSearch");

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_load(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_features = NULL;
    Mat features;
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "features", "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:flann_Index.load", (char**)keywords, &pyobj_features, &pyobj_filename) &&
        pyopencv_to_safe(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(features, filename));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_features = NULL;
    UMat features;
    PyObject* pyobj_filename = NULL;
    String filename;
    bool retval;

    const char* keywords[] = { "features", "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO:flann_Index.load", (char**)keywords, &pyobj_features, &pyobj_filename) &&
        pyopencv_to_safe(pyobj_features, features, ArgInfo("features", 0)) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(retval = _self_->load(features, filename));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("load");

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_radiusSearch(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_query = NULL;
    Mat query;
    PyObject* pyobj_indices = NULL;
    Mat indices;
    PyObject* pyobj_dists = NULL;
    Mat dists;
    PyObject* pyobj_radius = NULL;
    double radius=0;
    PyObject* pyobj_maxResults = NULL;
    int maxResults=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;
    int retval;

    const char* keywords[] = { "query", "radius", "maxResults", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|OOO:flann_Index.radiusSearch", (char**)keywords, &pyobj_query, &pyobj_radius, &pyobj_maxResults, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to_safe(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to_safe(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to_safe(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to_safe(pyobj_radius, radius, ArgInfo("radius", 0)) &&
        pyopencv_to_safe(pyobj_maxResults, maxResults, ArgInfo("maxResults", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->radiusSearch(query, indices, dists, radius, maxResults, params));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(indices), pyopencv_from(dists));
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_query = NULL;
    UMat query;
    PyObject* pyobj_indices = NULL;
    UMat indices;
    PyObject* pyobj_dists = NULL;
    UMat dists;
    PyObject* pyobj_radius = NULL;
    double radius=0;
    PyObject* pyobj_maxResults = NULL;
    int maxResults=0;
    PyObject* pyobj_params = NULL;
    SearchParams params;
    int retval;

    const char* keywords[] = { "query", "radius", "maxResults", "indices", "dists", "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|OOO:flann_Index.radiusSearch", (char**)keywords, &pyobj_query, &pyobj_radius, &pyobj_maxResults, &pyobj_indices, &pyobj_dists, &pyobj_params) &&
        pyopencv_to_safe(pyobj_query, query, ArgInfo("query", 0)) &&
        pyopencv_to_safe(pyobj_indices, indices, ArgInfo("indices", 1)) &&
        pyopencv_to_safe(pyobj_dists, dists, ArgInfo("dists", 1)) &&
        pyopencv_to_safe(pyobj_radius, radius, ArgInfo("radius", 0)) &&
        pyopencv_to_safe(pyobj_maxResults, maxResults, ArgInfo("maxResults", 0)) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = _self_->radiusSearch(query, indices, dists, radius, maxResults, params));
        return Py_BuildValue("(NNN)", pyopencv_from(retval), pyopencv_from(indices), pyopencv_from(dists));
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("radiusSearch");

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_release(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(_self_->release());
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_flann_flann_Index_save(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::flann;


    Ptr<cv::flann::Index> * self1 = 0;
    if (!pyopencv_flann_Index_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'flann_Index' or its derivative)");
    Ptr<cv::flann::Index> _self_ = *(self1);
    PyObject* pyobj_filename = NULL;
    String filename;

    const char* keywords[] = { "filename", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:flann_Index.save", (char**)keywords, &pyobj_filename) &&
        pyopencv_to_safe(pyobj_filename, filename, ArgInfo("filename", 0)) )
    {
        ERRWRAP2(_self_->save(filename));
        Py_RETURN_NONE;
    }

    return NULL;
}



// Tables (flann_Index)

static PyGetSetDef pyopencv_flann_Index_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_flann_Index_methods[] =
{
    {"build", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_build, 0), "build(features, params[, distType]) -> None\n."},
    {"getAlgorithm", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_getAlgorithm, 0), "getAlgorithm() -> retval\n."},
    {"getDistance", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_getDistance, 0), "getDistance() -> retval\n."},
    {"knnSearch", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_knnSearch, 0), "knnSearch(query, knn[, indices[, dists[, params]]]) -> indices, dists\n."},
    {"load", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_load, 0), "load(features, filename) -> retval\n."},
    {"radiusSearch", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_radiusSearch, 0), "radiusSearch(query, radius, maxResults[, indices[, dists[, params]]]) -> retval, indices, dists\n."},
    {"release", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_release, 0), "release() -> None\n."},
    {"save", CV_PY_FN_WITH_KW_(pyopencv_cv_flann_flann_Index_save, 0), "save(filename) -> None\n."},

    {NULL,          NULL}
};

// Converter (flann_Index)

template<>
struct PyOpenCV_Converter< Ptr<cv::flann::Index> >
{
    static PyObject* from(const Ptr<cv::flann::Index>& r)
    {
        return pyopencv_flann_Index_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::flann::Index>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::flann::Index> * dst_;
        if (pyopencv_flann_Index_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::flann::Index> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ocl_Device (Generic)
//================================================================================

// GetSet (ocl_Device)



// Methods (ocl_Device)

static int pyopencv_cv_ocl_ocl_Device_Device(pyopencv_ocl_Device_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::ocl::Device());
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_OpenCLVersion(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->OpenCLVersion());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_OpenCL_C_Version(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->OpenCL_C_Version());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_addressBits(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->addressBits());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_available(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->available());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_compilerAvailable(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->compilerAvailable());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_deviceVersionMajor(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->deviceVersionMajor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_deviceVersionMinor(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->deviceVersionMinor());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_doubleFPConfig(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->doubleFPConfig());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_driverVersion(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->driverVersion());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_endianLittle(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->endianLittle());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_errorCorrectionSupport(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->errorCorrectionSupport());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_executionCapabilities(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->executionCapabilities());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_extensions(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->extensions());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_getDefault_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;

    Device retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::ocl::Device::getDefault());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_globalMemCacheLineSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->globalMemCacheLineSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_globalMemCacheSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->globalMemCacheSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_globalMemCacheType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->globalMemCacheType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_globalMemSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->globalMemSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_halfFPConfig(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->halfFPConfig());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_hostUnifiedMemory(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->hostUnifiedMemory());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image2DMaxHeight(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image2DMaxHeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image2DMaxWidth(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image2DMaxWidth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image3DMaxDepth(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image3DMaxDepth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image3DMaxHeight(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image3DMaxHeight());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_image3DMaxWidth(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->image3DMaxWidth());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_imageFromBufferSupport(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->imageFromBufferSupport());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_imageMaxArraySize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->imageMaxArraySize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_imageMaxBufferSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->imageMaxBufferSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_imageSupport(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->imageSupport());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_intelSubgroupsSupport(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->intelSubgroupsSupport());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_isAMD(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isAMD());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_isExtensionSupported(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    PyObject* pyobj_extensionName = NULL;
    String extensionName;
    bool retval;

    const char* keywords[] = { "extensionName", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:ocl_Device.isExtensionSupported", (char**)keywords, &pyobj_extensionName) &&
        pyopencv_to_safe(pyobj_extensionName, extensionName, ArgInfo("extensionName", 0)) )
    {
        ERRWRAP2(retval = _self_->isExtensionSupported(extensionName));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_isIntel(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isIntel());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_isNVidia(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->isNVidia());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_linkerAvailable(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    bool retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->linkerAvailable());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_localMemSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->localMemSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_localMemType(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->localMemType());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxClockFrequency(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxClockFrequency());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxComputeUnits(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxComputeUnits());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxConstantArgs(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxConstantArgs());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxConstantBufferSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxConstantBufferSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxMemAllocSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxMemAllocSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxParameterSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxParameterSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxReadImageArgs(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxReadImageArgs());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxSamplers(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxSamplers());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxWorkGroupSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxWorkGroupSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxWorkItemDims(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxWorkItemDims());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_maxWriteImageArgs(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->maxWriteImageArgs());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_memBaseAddrAlign(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->memBaseAddrAlign());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_name(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->name());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthChar(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthChar());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthDouble(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthDouble());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthFloat(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthFloat());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthHalf(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthHalf());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthInt(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthInt());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthLong(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthLong());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_nativeVectorWidthShort(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->nativeVectorWidthShort());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthChar(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthChar());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthDouble(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthDouble());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthFloat(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthFloat());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthHalf(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthHalf());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthInt(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthInt());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthLong(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthLong());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_preferredVectorWidthShort(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->preferredVectorWidthShort());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_printfBufferSize(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->printfBufferSize());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_profilingTimerResolution(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    size_t retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->profilingTimerResolution());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_singleFPConfig(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->singleFPConfig());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_type(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->type());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_vendorID(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->vendorID());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_vendorName(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->vendorName());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_ocl_ocl_Device_version(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::ocl;


    cv::ocl::Device * self1 = 0;
    if (!pyopencv_ocl_Device_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'ocl_Device' or its derivative)");
    cv::ocl::Device* _self_ = (self1);
    String retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->version());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (ocl_Device)

static PyGetSetDef pyopencv_ocl_Device_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ocl_Device_methods[] =
{
    {"OpenCLVersion", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_OpenCLVersion, 0), "OpenCLVersion() -> retval\n."},
    {"OpenCL_C_Version", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_OpenCL_C_Version, 0), "OpenCL_C_Version() -> retval\n."},
    {"addressBits", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_addressBits, 0), "addressBits() -> retval\n."},
    {"available", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_available, 0), "available() -> retval\n."},
    {"compilerAvailable", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_compilerAvailable, 0), "compilerAvailable() -> retval\n."},
    {"deviceVersionMajor", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_deviceVersionMajor, 0), "deviceVersionMajor() -> retval\n."},
    {"deviceVersionMinor", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_deviceVersionMinor, 0), "deviceVersionMinor() -> retval\n."},
    {"doubleFPConfig", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_doubleFPConfig, 0), "doubleFPConfig() -> retval\n."},
    {"driverVersion", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_driverVersion, 0), "driverVersion() -> retval\n."},
    {"endianLittle", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_endianLittle, 0), "endianLittle() -> retval\n."},
    {"errorCorrectionSupport", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_errorCorrectionSupport, 0), "errorCorrectionSupport() -> retval\n."},
    {"executionCapabilities", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_executionCapabilities, 0), "executionCapabilities() -> retval\n."},
    {"extensions", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_extensions, 0), "extensions() -> retval\n."},
    {"getDefault", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_getDefault_static, METH_STATIC), "getDefault() -> retval\n."},
    {"globalMemCacheLineSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_globalMemCacheLineSize, 0), "globalMemCacheLineSize() -> retval\n."},
    {"globalMemCacheSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_globalMemCacheSize, 0), "globalMemCacheSize() -> retval\n."},
    {"globalMemCacheType", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_globalMemCacheType, 0), "globalMemCacheType() -> retval\n."},
    {"globalMemSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_globalMemSize, 0), "globalMemSize() -> retval\n."},
    {"halfFPConfig", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_halfFPConfig, 0), "halfFPConfig() -> retval\n."},
    {"hostUnifiedMemory", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_hostUnifiedMemory, 0), "hostUnifiedMemory() -> retval\n."},
    {"image2DMaxHeight", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image2DMaxHeight, 0), "image2DMaxHeight() -> retval\n."},
    {"image2DMaxWidth", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image2DMaxWidth, 0), "image2DMaxWidth() -> retval\n."},
    {"image3DMaxDepth", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image3DMaxDepth, 0), "image3DMaxDepth() -> retval\n."},
    {"image3DMaxHeight", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image3DMaxHeight, 0), "image3DMaxHeight() -> retval\n."},
    {"image3DMaxWidth", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_image3DMaxWidth, 0), "image3DMaxWidth() -> retval\n."},
    {"imageFromBufferSupport", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_imageFromBufferSupport, 0), "imageFromBufferSupport() -> retval\n."},
    {"imageMaxArraySize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_imageMaxArraySize, 0), "imageMaxArraySize() -> retval\n."},
    {"imageMaxBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_imageMaxBufferSize, 0), "imageMaxBufferSize() -> retval\n."},
    {"imageSupport", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_imageSupport, 0), "imageSupport() -> retval\n."},
    {"intelSubgroupsSupport", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_intelSubgroupsSupport, 0), "intelSubgroupsSupport() -> retval\n."},
    {"isAMD", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_isAMD, 0), "isAMD() -> retval\n."},
    {"isExtensionSupported", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_isExtensionSupported, 0), "isExtensionSupported(extensionName) -> retval\n."},
    {"isIntel", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_isIntel, 0), "isIntel() -> retval\n."},
    {"isNVidia", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_isNVidia, 0), "isNVidia() -> retval\n."},
    {"linkerAvailable", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_linkerAvailable, 0), "linkerAvailable() -> retval\n."},
    {"localMemSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_localMemSize, 0), "localMemSize() -> retval\n."},
    {"localMemType", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_localMemType, 0), "localMemType() -> retval\n."},
    {"maxClockFrequency", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxClockFrequency, 0), "maxClockFrequency() -> retval\n."},
    {"maxComputeUnits", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxComputeUnits, 0), "maxComputeUnits() -> retval\n."},
    {"maxConstantArgs", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxConstantArgs, 0), "maxConstantArgs() -> retval\n."},
    {"maxConstantBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxConstantBufferSize, 0), "maxConstantBufferSize() -> retval\n."},
    {"maxMemAllocSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxMemAllocSize, 0), "maxMemAllocSize() -> retval\n."},
    {"maxParameterSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxParameterSize, 0), "maxParameterSize() -> retval\n."},
    {"maxReadImageArgs", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxReadImageArgs, 0), "maxReadImageArgs() -> retval\n."},
    {"maxSamplers", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxSamplers, 0), "maxSamplers() -> retval\n."},
    {"maxWorkGroupSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxWorkGroupSize, 0), "maxWorkGroupSize() -> retval\n."},
    {"maxWorkItemDims", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxWorkItemDims, 0), "maxWorkItemDims() -> retval\n."},
    {"maxWriteImageArgs", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_maxWriteImageArgs, 0), "maxWriteImageArgs() -> retval\n."},
    {"memBaseAddrAlign", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_memBaseAddrAlign, 0), "memBaseAddrAlign() -> retval\n."},
    {"name", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_name, 0), "name() -> retval\n."},
    {"nativeVectorWidthChar", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthChar, 0), "nativeVectorWidthChar() -> retval\n."},
    {"nativeVectorWidthDouble", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthDouble, 0), "nativeVectorWidthDouble() -> retval\n."},
    {"nativeVectorWidthFloat", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthFloat, 0), "nativeVectorWidthFloat() -> retval\n."},
    {"nativeVectorWidthHalf", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthHalf, 0), "nativeVectorWidthHalf() -> retval\n."},
    {"nativeVectorWidthInt", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthInt, 0), "nativeVectorWidthInt() -> retval\n."},
    {"nativeVectorWidthLong", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthLong, 0), "nativeVectorWidthLong() -> retval\n."},
    {"nativeVectorWidthShort", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_nativeVectorWidthShort, 0), "nativeVectorWidthShort() -> retval\n."},
    {"preferredVectorWidthChar", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthChar, 0), "preferredVectorWidthChar() -> retval\n."},
    {"preferredVectorWidthDouble", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthDouble, 0), "preferredVectorWidthDouble() -> retval\n."},
    {"preferredVectorWidthFloat", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthFloat, 0), "preferredVectorWidthFloat() -> retval\n."},
    {"preferredVectorWidthHalf", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthHalf, 0), "preferredVectorWidthHalf() -> retval\n."},
    {"preferredVectorWidthInt", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthInt, 0), "preferredVectorWidthInt() -> retval\n."},
    {"preferredVectorWidthLong", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthLong, 0), "preferredVectorWidthLong() -> retval\n."},
    {"preferredVectorWidthShort", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_preferredVectorWidthShort, 0), "preferredVectorWidthShort() -> retval\n."},
    {"printfBufferSize", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_printfBufferSize, 0), "printfBufferSize() -> retval\n."},
    {"profilingTimerResolution", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_profilingTimerResolution, 0), "profilingTimerResolution() -> retval\n."},
    {"singleFPConfig", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_singleFPConfig, 0), "singleFPConfig() -> retval\n."},
    {"type", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_type, 0), "type() -> retval\n."},
    {"vendorID", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_vendorID, 0), "vendorID() -> retval\n."},
    {"vendorName", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_vendorName, 0), "vendorName() -> retval\n."},
    {"version", CV_PY_FN_WITH_KW_(pyopencv_cv_ocl_ocl_Device_version, 0), "version() -> retval\n."},

    {NULL,          NULL}
};

// Converter (ocl_Device)

template<>
struct PyOpenCV_Converter< cv::ocl::Device >
{
    static PyObject* from(const cv::ocl::Device& r)
    {
        return pyopencv_ocl_Device_Instance(r);
    }
    static bool to(PyObject* src, cv::ocl::Device& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::ocl::Device * dst_;
        if (pyopencv_ocl_Device_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::ocl::Device for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// ocl_OpenCLExecutionContext (Generic)
//================================================================================

// GetSet (ocl_OpenCLExecutionContext)



// Methods (ocl_OpenCLExecutionContext)



// Tables (ocl_OpenCLExecutionContext)

static PyGetSetDef pyopencv_ocl_OpenCLExecutionContext_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_ocl_OpenCLExecutionContext_methods[] =
{

    {NULL,          NULL}
};

// Converter (ocl_OpenCLExecutionContext)

template<>
struct PyOpenCV_Converter< Ptr<cv::ocl::OpenCLExecutionContext> >
{
    static PyObject* from(const Ptr<cv::ocl::OpenCLExecutionContext>& r)
    {
        return pyopencv_ocl_OpenCLExecutionContext_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::ocl::OpenCLExecutionContext>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::ocl::OpenCLExecutionContext> * dst_;
        if (pyopencv_ocl_OpenCLExecutionContext_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::ocl::OpenCLExecutionContext> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// segmentation_IntelligentScissorsMB (Generic)
//================================================================================

// GetSet (segmentation_IntelligentScissorsMB)



// Methods (segmentation_IntelligentScissorsMB)

static int pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_IntelligentScissorsMB(pyopencv_segmentation_IntelligentScissorsMB_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::segmentation;


    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::segmentation::IntelligentScissorsMB());
        return 0;
    }

    return -1;
}

static PyObject* pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_applyImage(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::segmentation;


    cv::segmentation::IntelligentScissorsMB * self1 = 0;
    if (!pyopencv_segmentation_IntelligentScissorsMB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'segmentation_IntelligentScissorsMB' or its derivative)");
    cv::segmentation::IntelligentScissorsMB* _self_ = (self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_image = NULL;
    Mat image;
    IntelligentScissorsMB retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:segmentation_IntelligentScissorsMB.applyImage", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(retval = _self_->applyImage(image));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_image = NULL;
    UMat image;
    IntelligentScissorsMB retval;

    const char* keywords[] = { "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:segmentation_IntelligentScissorsMB.applyImage", (char**)keywords, &pyobj_image) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(retval = _self_->applyImage(image));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("applyImage");

    return NULL;
}

static PyObject* pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_applyImageFeatures(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::segmentation;


    cv::segmentation::IntelligentScissorsMB * self1 = 0;
    if (!pyopencv_segmentation_IntelligentScissorsMB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'segmentation_IntelligentScissorsMB' or its derivative)");
    cv::segmentation::IntelligentScissorsMB* _self_ = (self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_non_edge = NULL;
    Mat non_edge;
    PyObject* pyobj_gradient_direction = NULL;
    Mat gradient_direction;
    PyObject* pyobj_gradient_magnitude = NULL;
    Mat gradient_magnitude;
    PyObject* pyobj_image = NULL;
    Mat image;
    IntelligentScissorsMB retval;

    const char* keywords[] = { "non_edge", "gradient_direction", "gradient_magnitude", "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:segmentation_IntelligentScissorsMB.applyImageFeatures", (char**)keywords, &pyobj_non_edge, &pyobj_gradient_direction, &pyobj_gradient_magnitude, &pyobj_image) &&
        pyopencv_to_safe(pyobj_non_edge, non_edge, ArgInfo("non_edge", 0)) &&
        pyopencv_to_safe(pyobj_gradient_direction, gradient_direction, ArgInfo("gradient_direction", 0)) &&
        pyopencv_to_safe(pyobj_gradient_magnitude, gradient_magnitude, ArgInfo("gradient_magnitude", 0)) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(retval = _self_->applyImageFeatures(non_edge, gradient_direction, gradient_magnitude, image));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_non_edge = NULL;
    UMat non_edge;
    PyObject* pyobj_gradient_direction = NULL;
    UMat gradient_direction;
    PyObject* pyobj_gradient_magnitude = NULL;
    UMat gradient_magnitude;
    PyObject* pyobj_image = NULL;
    UMat image;
    IntelligentScissorsMB retval;

    const char* keywords[] = { "non_edge", "gradient_direction", "gradient_magnitude", "image", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO|O:segmentation_IntelligentScissorsMB.applyImageFeatures", (char**)keywords, &pyobj_non_edge, &pyobj_gradient_direction, &pyobj_gradient_magnitude, &pyobj_image) &&
        pyopencv_to_safe(pyobj_non_edge, non_edge, ArgInfo("non_edge", 0)) &&
        pyopencv_to_safe(pyobj_gradient_direction, gradient_direction, ArgInfo("gradient_direction", 0)) &&
        pyopencv_to_safe(pyobj_gradient_magnitude, gradient_magnitude, ArgInfo("gradient_magnitude", 0)) &&
        pyopencv_to_safe(pyobj_image, image, ArgInfo("image", 0)) )
    {
        ERRWRAP2(retval = _self_->applyImageFeatures(non_edge, gradient_direction, gradient_magnitude, image));
        return pyopencv_from(retval);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("applyImageFeatures");

    return NULL;
}

static PyObject* pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_buildMap(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::segmentation;


    cv::segmentation::IntelligentScissorsMB * self1 = 0;
    if (!pyopencv_segmentation_IntelligentScissorsMB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'segmentation_IntelligentScissorsMB' or its derivative)");
    cv::segmentation::IntelligentScissorsMB* _self_ = (self1);
    PyObject* pyobj_sourcePt = NULL;
    Point sourcePt;

    const char* keywords[] = { "sourcePt", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O:segmentation_IntelligentScissorsMB.buildMap", (char**)keywords, &pyobj_sourcePt) &&
        pyopencv_to_safe(pyobj_sourcePt, sourcePt, ArgInfo("sourcePt", 0)) )
    {
        ERRWRAP2(_self_->buildMap(sourcePt));
        Py_RETURN_NONE;
    }

    return NULL;
}

static PyObject* pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_getContour(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::segmentation;


    cv::segmentation::IntelligentScissorsMB * self1 = 0;
    if (!pyopencv_segmentation_IntelligentScissorsMB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'segmentation_IntelligentScissorsMB' or its derivative)");
    cv::segmentation::IntelligentScissorsMB* _self_ = (self1);
    pyPrepareArgumentConversionErrorsStorage(2);

    {
    PyObject* pyobj_targetPt = NULL;
    Point targetPt;
    PyObject* pyobj_contour = NULL;
    Mat contour;
    PyObject* pyobj_backward = NULL;
    bool backward=false;

    const char* keywords[] = { "targetPt", "contour", "backward", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:segmentation_IntelligentScissorsMB.getContour", (char**)keywords, &pyobj_targetPt, &pyobj_contour, &pyobj_backward) &&
        pyopencv_to_safe(pyobj_targetPt, targetPt, ArgInfo("targetPt", 0)) &&
        pyopencv_to_safe(pyobj_contour, contour, ArgInfo("contour", 1)) &&
        pyopencv_to_safe(pyobj_backward, backward, ArgInfo("backward", 0)) )
    {
        ERRWRAP2(_self_->getContour(targetPt, contour, backward));
        return pyopencv_from(contour);
    }


        pyPopulateArgumentConversionErrors();
    }
    

    {
    PyObject* pyobj_targetPt = NULL;
    Point targetPt;
    PyObject* pyobj_contour = NULL;
    UMat contour;
    PyObject* pyobj_backward = NULL;
    bool backward=false;

    const char* keywords[] = { "targetPt", "contour", "backward", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "O|OO:segmentation_IntelligentScissorsMB.getContour", (char**)keywords, &pyobj_targetPt, &pyobj_contour, &pyobj_backward) &&
        pyopencv_to_safe(pyobj_targetPt, targetPt, ArgInfo("targetPt", 0)) &&
        pyopencv_to_safe(pyobj_contour, contour, ArgInfo("contour", 1)) &&
        pyopencv_to_safe(pyobj_backward, backward, ArgInfo("backward", 0)) )
    {
        ERRWRAP2(_self_->getContour(targetPt, contour, backward));
        return pyopencv_from(contour);
    }


        pyPopulateArgumentConversionErrors();
    }
    pyRaiseCVOverloadException("getContour");

    return NULL;
}

static PyObject* pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_setEdgeFeatureCannyParameters(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::segmentation;


    cv::segmentation::IntelligentScissorsMB * self1 = 0;
    if (!pyopencv_segmentation_IntelligentScissorsMB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'segmentation_IntelligentScissorsMB' or its derivative)");
    cv::segmentation::IntelligentScissorsMB* _self_ = (self1);
    PyObject* pyobj_threshold1 = NULL;
    double threshold1=0;
    PyObject* pyobj_threshold2 = NULL;
    double threshold2=0;
    PyObject* pyobj_apertureSize = NULL;
    int apertureSize=3;
    PyObject* pyobj_L2gradient = NULL;
    bool L2gradient=false;
    IntelligentScissorsMB retval;

    const char* keywords[] = { "threshold1", "threshold2", "apertureSize", "L2gradient", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OO|OO:segmentation_IntelligentScissorsMB.setEdgeFeatureCannyParameters", (char**)keywords, &pyobj_threshold1, &pyobj_threshold2, &pyobj_apertureSize, &pyobj_L2gradient) &&
        pyopencv_to_safe(pyobj_threshold1, threshold1, ArgInfo("threshold1", 0)) &&
        pyopencv_to_safe(pyobj_threshold2, threshold2, ArgInfo("threshold2", 0)) &&
        pyopencv_to_safe(pyobj_apertureSize, apertureSize, ArgInfo("apertureSize", 0)) &&
        pyopencv_to_safe(pyobj_L2gradient, L2gradient, ArgInfo("L2gradient", 0)) )
    {
        ERRWRAP2(retval = _self_->setEdgeFeatureCannyParameters(threshold1, threshold2, apertureSize, L2gradient));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_setEdgeFeatureZeroCrossingParameters(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::segmentation;


    cv::segmentation::IntelligentScissorsMB * self1 = 0;
    if (!pyopencv_segmentation_IntelligentScissorsMB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'segmentation_IntelligentScissorsMB' or its derivative)");
    cv::segmentation::IntelligentScissorsMB* _self_ = (self1);
    PyObject* pyobj_gradient_magnitude_min_value = NULL;
    float gradient_magnitude_min_value=0.0f;
    IntelligentScissorsMB retval;

    const char* keywords[] = { "gradient_magnitude_min_value", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:segmentation_IntelligentScissorsMB.setEdgeFeatureZeroCrossingParameters", (char**)keywords, &pyobj_gradient_magnitude_min_value) &&
        pyopencv_to_safe(pyobj_gradient_magnitude_min_value, gradient_magnitude_min_value, ArgInfo("gradient_magnitude_min_value", 0)) )
    {
        ERRWRAP2(retval = _self_->setEdgeFeatureZeroCrossingParameters(gradient_magnitude_min_value));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_setGradientMagnitudeMaxLimit(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::segmentation;


    cv::segmentation::IntelligentScissorsMB * self1 = 0;
    if (!pyopencv_segmentation_IntelligentScissorsMB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'segmentation_IntelligentScissorsMB' or its derivative)");
    cv::segmentation::IntelligentScissorsMB* _self_ = (self1);
    PyObject* pyobj_gradient_magnitude_threshold_max = NULL;
    float gradient_magnitude_threshold_max=0.0f;
    IntelligentScissorsMB retval;

    const char* keywords[] = { "gradient_magnitude_threshold_max", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:segmentation_IntelligentScissorsMB.setGradientMagnitudeMaxLimit", (char**)keywords, &pyobj_gradient_magnitude_threshold_max) &&
        pyopencv_to_safe(pyobj_gradient_magnitude_threshold_max, gradient_magnitude_threshold_max, ArgInfo("gradient_magnitude_threshold_max", 0)) )
    {
        ERRWRAP2(retval = _self_->setGradientMagnitudeMaxLimit(gradient_magnitude_threshold_max));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_setWeights(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::segmentation;


    cv::segmentation::IntelligentScissorsMB * self1 = 0;
    if (!pyopencv_segmentation_IntelligentScissorsMB_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'segmentation_IntelligentScissorsMB' or its derivative)");
    cv::segmentation::IntelligentScissorsMB* _self_ = (self1);
    PyObject* pyobj_weight_non_edge = NULL;
    float weight_non_edge=0.f;
    PyObject* pyobj_weight_gradient_direction = NULL;
    float weight_gradient_direction=0.f;
    PyObject* pyobj_weight_gradient_magnitude = NULL;
    float weight_gradient_magnitude=0.f;
    IntelligentScissorsMB retval;

    const char* keywords[] = { "weight_non_edge", "weight_gradient_direction", "weight_gradient_magnitude", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "OOO:segmentation_IntelligentScissorsMB.setWeights", (char**)keywords, &pyobj_weight_non_edge, &pyobj_weight_gradient_direction, &pyobj_weight_gradient_magnitude) &&
        pyopencv_to_safe(pyobj_weight_non_edge, weight_non_edge, ArgInfo("weight_non_edge", 0)) &&
        pyopencv_to_safe(pyobj_weight_gradient_direction, weight_gradient_direction, ArgInfo("weight_gradient_direction", 0)) &&
        pyopencv_to_safe(pyobj_weight_gradient_magnitude, weight_gradient_magnitude, ArgInfo("weight_gradient_magnitude", 0)) )
    {
        ERRWRAP2(retval = _self_->setWeights(weight_non_edge, weight_gradient_direction, weight_gradient_magnitude));
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (segmentation_IntelligentScissorsMB)

static PyGetSetDef pyopencv_segmentation_IntelligentScissorsMB_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_segmentation_IntelligentScissorsMB_methods[] =
{
    {"applyImage", CV_PY_FN_WITH_KW_(pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_applyImage, 0), "applyImage(image) -> retval\n.   @brief Specify input image and extract image features\n.        *\n.        * @param image input image. Type is #CV_8UC1 / #CV_8UC3"},
    {"applyImageFeatures", CV_PY_FN_WITH_KW_(pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_applyImageFeatures, 0), "applyImageFeatures(non_edge, gradient_direction, gradient_magnitude[, image]) -> retval\n.   @brief Specify custom features of input image\n.        *\n.        * Customized advanced variant of applyImage() call.\n.        *\n.        * @param non_edge Specify cost of non-edge pixels. Type is CV_8UC1. Expected values are `{0, 1}`.\n.        * @param gradient_direction Specify gradient direction feature. Type is CV_32FC2. Values are expected to be normalized: `x^2 + y^2 == 1`\n.        * @param gradient_magnitude Specify cost of gradient magnitude function: Type is CV_32FC1. Values should be in range `[0, 1]`.\n.        * @param image **Optional parameter**. Must be specified if subset of features is specified (non-specified features are calculated internally)"},
    {"buildMap", CV_PY_FN_WITH_KW_(pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_buildMap, 0), "buildMap(sourcePt) -> None\n.   @brief Prepares a map of optimal paths for the given source point on the image\n.        *\n.        * @note applyImage() / applyImageFeatures() must be called before this call\n.        *\n.        * @param sourcePt The source point used to find the paths"},
    {"getContour", CV_PY_FN_WITH_KW_(pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_getContour, 0), "getContour(targetPt[, contour[, backward]]) -> contour\n.   @brief Extracts optimal contour for the given target point on the image\n.        *\n.        * @note buildMap() must be called before this call\n.        *\n.        * @param targetPt The target point\n.        * @param[out] contour The list of pixels which contains optimal path between the source and the target points of the image. Type is CV_32SC2 (compatible with `std::vector<Point>`)\n.        * @param backward Flag to indicate reverse order of retrived pixels (use \"true\" value to fetch points from the target to the source point)"},
    {"setEdgeFeatureCannyParameters", CV_PY_FN_WITH_KW_(pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_setEdgeFeatureCannyParameters, 0), "setEdgeFeatureCannyParameters(threshold1, threshold2[, apertureSize[, L2gradient]]) -> retval\n.   @brief Switch edge feature extractor to use Canny edge detector\n.        *\n.        * @note \"Laplacian Zero-Crossing\" feature extractor is used by default (following to original article)\n.        *\n.        * @sa Canny"},
    {"setEdgeFeatureZeroCrossingParameters", CV_PY_FN_WITH_KW_(pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_setEdgeFeatureZeroCrossingParameters, 0), "setEdgeFeatureZeroCrossingParameters([, gradient_magnitude_min_value]) -> retval\n.   @brief Switch to \"Laplacian Zero-Crossing\" edge feature extractor and specify its parameters\n.        *\n.        * This feature extractor is used by default according to article.\n.        *\n.        * Implementation has additional filtering for regions with low-amplitude noise.\n.        * This filtering is enabled through parameter of minimal gradient amplitude (use some small value 4, 8, 16).\n.        *\n.        * @note Current implementation of this feature extractor is based on processing of grayscale images (color image is converted to grayscale image first).\n.        *\n.        * @note Canny edge detector is a bit slower, but provides better results (especially on color images): use setEdgeFeatureCannyParameters().\n.        *\n.        * @param gradient_magnitude_min_value Minimal gradient magnitude value for edge pixels (default: 0, check is disabled)"},
    {"setGradientMagnitudeMaxLimit", CV_PY_FN_WITH_KW_(pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_setGradientMagnitudeMaxLimit, 0), "setGradientMagnitudeMaxLimit([, gradient_magnitude_threshold_max]) -> retval\n.   @brief Specify gradient magnitude max value threshold\n.        *\n.        * Zero limit value is used to disable gradient magnitude thresholding (default behavior, as described in original article).\n.        * Otherwize pixels with `gradient magnitude >= threshold` have zero cost.\n.        *\n.        * @note Thresholding should be used for images with irregular regions (to avoid stuck on parameters from high-contract areas, like embedded logos).\n.        *\n.        * @param gradient_magnitude_threshold_max Specify gradient magnitude max value threshold (default: 0, disabled)"},
    {"setWeights", CV_PY_FN_WITH_KW_(pyopencv_cv_segmentation_segmentation_IntelligentScissorsMB_setWeights, 0), "setWeights(weight_non_edge, weight_gradient_direction, weight_gradient_magnitude) -> retval\n.   @brief Specify weights of feature functions\n.        *\n.        * Consider keeping weights normalized (sum of weights equals to 1.0)\n.        * Discrete dynamic programming (DP) goal is minimization of costs between pixels.\n.        *\n.        * @param weight_non_edge Specify cost of non-edge pixels (default: 0.43f)\n.        * @param weight_gradient_direction Specify cost of gradient direction function (default: 0.43f)\n.        * @param weight_gradient_magnitude Specify cost of gradient magnitude function (default: 0.14f)"},

    {NULL,          NULL}
};

// Converter (segmentation_IntelligentScissorsMB)

template<>
struct PyOpenCV_Converter< cv::segmentation::IntelligentScissorsMB >
{
    static PyObject* from(const cv::segmentation::IntelligentScissorsMB& r)
    {
        return pyopencv_segmentation_IntelligentScissorsMB_Instance(r);
    }
    static bool to(PyObject* src, cv::segmentation::IntelligentScissorsMB& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::segmentation::IntelligentScissorsMB * dst_;
        if (pyopencv_segmentation_IntelligentScissorsMB_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::segmentation::IntelligentScissorsMB for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// utils_ClassWithKeywordProperties (Generic)
//================================================================================

// GetSet (utils_ClassWithKeywordProperties)


static PyObject* pyopencv_utils_ClassWithKeywordProperties_get_except(pyopencv_utils_ClassWithKeywordProperties_t* p, void *closure)
{
    return pyopencv_from(p->v.except);
}

static PyObject* pyopencv_utils_ClassWithKeywordProperties_get_lambda(pyopencv_utils_ClassWithKeywordProperties_t* p, void *closure)
{
    return pyopencv_from(p->v.lambda);
}

static int pyopencv_utils_ClassWithKeywordProperties_set_lambda(pyopencv_utils_ClassWithKeywordProperties_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the lambda attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.lambda, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (utils_ClassWithKeywordProperties)

static int pyopencv_cv_utils_utils_ClassWithKeywordProperties_ClassWithKeywordProperties(pyopencv_utils_ClassWithKeywordProperties_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::utils;

    PyObject* pyobj_lambda_arg = NULL;
    int lambda_arg=24;
    PyObject* pyobj_except_arg = NULL;
    int except_arg=42;

    const char* keywords[] = { "lambda_arg", "except_arg", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OO:ClassWithKeywordProperties", (char**)keywords, &pyobj_lambda_arg, &pyobj_except_arg) &&
        pyopencv_to_safe(pyobj_lambda_arg, lambda_arg, ArgInfo("lambda_arg", 0)) &&
        pyopencv_to_safe(pyobj_except_arg, except_arg, ArgInfo("except_arg", 0)) )
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::utils::ClassWithKeywordProperties(lambda_arg, except_arg));
        return 0;
    }

    return -1;
}



// Tables (utils_ClassWithKeywordProperties)

static PyGetSetDef pyopencv_utils_ClassWithKeywordProperties_getseters[] =
{
    {(char*)"except_", (getter)pyopencv_utils_ClassWithKeywordProperties_get_except, NULL, (char*)"except_", NULL},
    {(char*)"lambda_", (getter)pyopencv_utils_ClassWithKeywordProperties_get_lambda, (setter)pyopencv_utils_ClassWithKeywordProperties_set_lambda, (char*)"lambda_", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_utils_ClassWithKeywordProperties_methods[] =
{

    {NULL,          NULL}
};

// Converter (utils_ClassWithKeywordProperties)

template<>
struct PyOpenCV_Converter< cv::utils::ClassWithKeywordProperties >
{
    static PyObject* from(const cv::utils::ClassWithKeywordProperties& r)
    {
        return pyopencv_utils_ClassWithKeywordProperties_Instance(r);
    }
    static bool to(PyObject* src, cv::utils::ClassWithKeywordProperties& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::utils::ClassWithKeywordProperties * dst_;
        if (pyopencv_utils_ClassWithKeywordProperties_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::utils::ClassWithKeywordProperties for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// utils_FunctionParams (Map)
//================================================================================
static bool pyopencv_to(PyObject* src, cv::utils::FunctionParams& dst, const ArgInfo& info)
{
    PyObject* tmp;
    bool ok;

    if( PyMapping_HasKeyString(src, (char*)"lambda") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"lambda");
        ok = tmp && pyopencv_to_safe(tmp, dst.lambda, ArgInfo("lambda", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    if( PyMapping_HasKeyString(src, (char*)"sigma") )
    {
        tmp = PyMapping_GetItemString(src, (char*)"sigma");
        ok = tmp && pyopencv_to_safe(tmp, dst.sigma, ArgInfo("sigma", 0));
        Py_DECREF(tmp);
        if(!ok) return false;
    }
    return true;
}

template<> bool pyopencv_to(PyObject* src, cv::utils::FunctionParams& dst, const ArgInfo& info);

//================================================================================
// utils_nested_OriginalClassName (Generic)
//================================================================================

// GetSet (utils_nested_OriginalClassName)



// Methods (utils_nested_OriginalClassName)

static PyObject* pyopencv_cv_utils_nested_utils_nested_OriginalClassName_create_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::utils::nested;

    PyObject* pyobj_params = NULL;
    OriginalClassName_Params params=OriginalClassName::Params();
    Ptr<OriginalClassName> retval;

    const char* keywords[] = { "params", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|O:utils_nested_ExportClassName.create", (char**)keywords, &pyobj_params) &&
        pyopencv_to_safe(pyobj_params, params, ArgInfo("params", 0)) )
    {
        ERRWRAP2(retval = cv::utils::nested::OriginalClassName::create(params));
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_utils_nested_utils_nested_OriginalClassName_getFloatParam(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::utils::nested;


    Ptr<cv::utils::nested::OriginalClassName> * self1 = 0;
    if (!pyopencv_utils_nested_OriginalClassName_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'utils_nested_OriginalClassName' or its derivative)");
    Ptr<cv::utils::nested::OriginalClassName> _self_ = *(self1);
    float retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getFloatParam());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_utils_nested_utils_nested_OriginalClassName_getIntParam(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::utils::nested;


    Ptr<cv::utils::nested::OriginalClassName> * self1 = 0;
    if (!pyopencv_utils_nested_OriginalClassName_getp(self, self1))
        return failmsgp("Incorrect type of self (must be 'utils_nested_OriginalClassName' or its derivative)");
    Ptr<cv::utils::nested::OriginalClassName> _self_ = *(self1);
    int retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = _self_->getIntParam());
        return pyopencv_from(retval);
    }

    return NULL;
}

static PyObject* pyopencv_cv_utils_nested_utils_nested_OriginalClassName_originalName_static(PyObject* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::utils::nested;

    std::string retval;

    if(PyObject_Size(py_args) == 0 && (!kw || PyObject_Size(kw) == 0))
    {
        ERRWRAP2(retval = cv::utils::nested::OriginalClassName::originalName());
        return pyopencv_from(retval);
    }

    return NULL;
}



// Tables (utils_nested_OriginalClassName)

static PyGetSetDef pyopencv_utils_nested_OriginalClassName_getseters[] =
{
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_utils_nested_OriginalClassName_methods[] =
{
    {"create", CV_PY_FN_WITH_KW_(pyopencv_cv_utils_nested_utils_nested_OriginalClassName_create_static, METH_STATIC), "create([, params]) -> retval\n."},
    {"getFloatParam", CV_PY_FN_WITH_KW_(pyopencv_cv_utils_nested_utils_nested_OriginalClassName_getFloatParam, 0), "getFloatParam() -> retval\n."},
    {"getIntParam", CV_PY_FN_WITH_KW_(pyopencv_cv_utils_nested_utils_nested_OriginalClassName_getIntParam, 0), "getIntParam() -> retval\n."},
    {"originalName", CV_PY_FN_WITH_KW_(pyopencv_cv_utils_nested_utils_nested_OriginalClassName_originalName_static, METH_STATIC), "originalName() -> retval\n."},

    {NULL,          NULL}
};

// Converter (utils_nested_OriginalClassName)

template<>
struct PyOpenCV_Converter< Ptr<cv::utils::nested::OriginalClassName> >
{
    static PyObject* from(const Ptr<cv::utils::nested::OriginalClassName>& r)
    {
        return pyopencv_utils_nested_OriginalClassName_Instance(r);
    }
    static bool to(PyObject* src, Ptr<cv::utils::nested::OriginalClassName>& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        Ptr<cv::utils::nested::OriginalClassName> * dst_;
        if (pyopencv_utils_nested_OriginalClassName_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected Ptr<cv::utils::nested::OriginalClassName> for argument '%s'", info.name);
        return false;
    }
};

//================================================================================
// utils_nested_OriginalClassName_Params (Generic)
//================================================================================

// GetSet (utils_nested_OriginalClassName_Params)


static PyObject* pyopencv_utils_nested_OriginalClassName_Params_get_float_value(pyopencv_utils_nested_OriginalClassName_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.float_value);
}

static int pyopencv_utils_nested_OriginalClassName_Params_set_float_value(pyopencv_utils_nested_OriginalClassName_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the float_value attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.float_value, ArgInfo("value", 0)) ? 0 : -1;
}

static PyObject* pyopencv_utils_nested_OriginalClassName_Params_get_int_value(pyopencv_utils_nested_OriginalClassName_Params_t* p, void *closure)
{
    return pyopencv_from(p->v.int_value);
}

static int pyopencv_utils_nested_OriginalClassName_Params_set_int_value(pyopencv_utils_nested_OriginalClassName_Params_t* p, PyObject *value, void *closure)
{
    if (!value)
    {
        PyErr_SetString(PyExc_TypeError, "Cannot delete the int_value attribute");
        return -1;
    }
    return pyopencv_to_safe(value, p->v.int_value, ArgInfo("value", 0)) ? 0 : -1;
}


// Methods (utils_nested_OriginalClassName_Params)

static int pyopencv_cv_utils_nested_utils_nested_OriginalClassName_Params_OriginalClassName_Params(pyopencv_utils_nested_OriginalClassName_Params_t* self, PyObject* py_args, PyObject* kw)
{
    using namespace cv::utils::nested;

    PyObject* pyobj_int_param = NULL;
    int int_param=123;
    PyObject* pyobj_float_param = NULL;
    float float_param=3.5f;

    const char* keywords[] = { "int_param", "float_param", NULL };
    if( PyArg_ParseTupleAndKeywords(py_args, kw, "|OO:OriginalClassName_Params", (char**)keywords, &pyobj_int_param, &pyobj_float_param) &&
        pyopencv_to_safe(pyobj_int_param, int_param, ArgInfo("int_param", 0)) &&
        pyopencv_to_safe(pyobj_float_param, float_param, ArgInfo("float_param", 0)) )
    {
        if(self) ERRWRAP2(new (&(self->v)) cv::utils::nested::OriginalClassName::Params(int_param, float_param));
        return 0;
    }

    return -1;
}



// Tables (utils_nested_OriginalClassName_Params)

static PyGetSetDef pyopencv_utils_nested_OriginalClassName_Params_getseters[] =
{
    {(char*)"float_value", (getter)pyopencv_utils_nested_OriginalClassName_Params_get_float_value, (setter)pyopencv_utils_nested_OriginalClassName_Params_set_float_value, (char*)"float_value", NULL},
    {(char*)"int_value", (getter)pyopencv_utils_nested_OriginalClassName_Params_get_int_value, (setter)pyopencv_utils_nested_OriginalClassName_Params_set_int_value, (char*)"int_value", NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef pyopencv_utils_nested_OriginalClassName_Params_methods[] =
{

    {NULL,          NULL}
};

// Converter (utils_nested_OriginalClassName_Params)

template<>
struct PyOpenCV_Converter< cv::utils::nested::OriginalClassName::Params >
{
    static PyObject* from(const cv::utils::nested::OriginalClassName::Params& r)
    {
        return pyopencv_utils_nested_OriginalClassName_Params_Instance(r);
    }
    static bool to(PyObject* src, cv::utils::nested::OriginalClassName::Params& dst, const ArgInfo& info)
    {
        if(!src || src == Py_None)
            return true;
        cv::utils::nested::OriginalClassName::Params * dst_;
        if (pyopencv_utils_nested_OriginalClassName_Params_getp(src, dst_))
        {
            dst = *dst_;
            return true;
        }
        
        failmsg("Expected cv::utils::nested::OriginalClassName::Params for argument '%s'", info.name);
        return false;
    }
};

